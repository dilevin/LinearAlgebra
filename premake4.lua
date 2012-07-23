package.path = package.path .. ";../BuildScripts/?.lua"
require "findExternalLibrary"
require "getOSType"
require "setProjectLocation"

findExternalLibrary("CSparse", "../ExternalLibs")

project "LinearAlgebra"
	setProjectLocation()
	setupExternalLibraries()
	language "C++"
	kind "StaticLib"
	uses  "CSparse"
	includedirs{"./include"}
	files  {"./include/*.h", "./cpp/*.cpp"}
	
	configuration {"Debug*"}
		defines {"_DEBUG", "DEBUG"}
		flags{"Symbols"}
		targetdir ("./bin/"..getOSType().."/Debug")
	
	configuration {"Release*"}
		defines{"NDEBUG"}
		flags{"Optimize"}
		targetdir ("./bin/"..getOSType().."/Release")
		
------------------------- USAGE PROJECT FOR INCLUDING INTO OTHER PROJECTS--------
usage "LinearAlgebra"
		kind "StaticLib"
		includedirs{"./include"}
		
		configuration{"Debug*"}
			links{"./bin/"..getOSType().."/Debug"}
			
		configuration{"Release *"}
			links{"./bin/"..getOSType().."/Release"}

	