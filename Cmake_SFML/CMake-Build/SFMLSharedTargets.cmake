# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.8)
   message(FATAL_ERROR "CMake >= 2.8.0 required")
endif()
if(CMAKE_VERSION VERSION_LESS "3.0.0")
   message(FATAL_ERROR "CMake >= 3.0.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 3.0.0...3.28)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_cmake_targets_defined "")
set(_cmake_targets_not_defined "")
set(_cmake_expected_targets "")
foreach(_cmake_expected_target IN ITEMS sfml-system sfml-main sfml-window OpenGL sfml-network sfml-graphics Freetype OpenAL VORBIS FLAC sfml-audio)
  list(APPEND _cmake_expected_targets "${_cmake_expected_target}")
  if(TARGET "${_cmake_expected_target}")
    list(APPEND _cmake_targets_defined "${_cmake_expected_target}")
  else()
    list(APPEND _cmake_targets_not_defined "${_cmake_expected_target}")
  endif()
endforeach()
unset(_cmake_expected_target)
if(_cmake_targets_defined STREQUAL _cmake_expected_targets)
  unset(_cmake_targets_defined)
  unset(_cmake_targets_not_defined)
  unset(_cmake_expected_targets)
  unset(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT _cmake_targets_defined STREQUAL "")
  string(REPLACE ";" ", " _cmake_targets_defined_text "${_cmake_targets_defined}")
  string(REPLACE ";" ", " _cmake_targets_not_defined_text "${_cmake_targets_not_defined}")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_cmake_targets_defined_text}\nTargets not yet defined: ${_cmake_targets_not_defined_text}\n")
endif()
unset(_cmake_targets_defined)
unset(_cmake_targets_not_defined)
unset(_cmake_expected_targets)


# Create imported target sfml-system
add_library(sfml-system SHARED IMPORTED)

set_target_properties(sfml-system PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/include"
)

# Create imported target sfml-main
add_library(sfml-main STATIC IMPORTED)

set_target_properties(sfml-main PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/include"
)

# Create imported target sfml-window
add_library(sfml-window SHARED IMPORTED)

set_target_properties(sfml-window PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/include"
  INTERFACE_LINK_LIBRARIES "sfml-system"
)

# Create imported target OpenGL
add_library(OpenGL INTERFACE IMPORTED)

set_target_properties(OpenGL PROPERTIES
  INTERFACE_LINK_LIBRARIES "opengl32"
)

# Create imported target sfml-network
add_library(sfml-network SHARED IMPORTED)

set_target_properties(sfml-network PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/include"
  INTERFACE_LINK_LIBRARIES "sfml-system"
)

# Create imported target sfml-graphics
add_library(sfml-graphics SHARED IMPORTED)

set_target_properties(sfml-graphics PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/include"
  INTERFACE_LINK_LIBRARIES "sfml-window"
)

# Create imported target Freetype
add_library(Freetype INTERFACE IMPORTED)

set_target_properties(Freetype PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/headers/freetype2"
  INTERFACE_LINK_LIBRARIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/freetype.lib"
)

# Create imported target OpenAL
add_library(OpenAL INTERFACE IMPORTED)

set_target_properties(OpenAL PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/headers/AL"
  INTERFACE_LINK_LIBRARIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/openal32.lib"
)

# Create imported target VORBIS
add_library(VORBIS INTERFACE IMPORTED)

set_target_properties(VORBIS PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "OV_EXCLUDE_STATIC_CALLBACKS"
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/headers;C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/headers"
  INTERFACE_LINK_LIBRARIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/vorbisenc.lib;C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/vorbisfile.lib;C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/vorbis.lib;C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/ogg.lib"
)

# Create imported target FLAC
add_library(FLAC INTERFACE IMPORTED)

set_target_properties(FLAC PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "FLAC__NO_DLL"
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/headers"
  INTERFACE_LINK_LIBRARIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/extlibs/libs-msvc-universal/x64/flac.lib"
)

# Create imported target sfml-audio
add_library(sfml-audio SHARED IMPORTED)

set_target_properties(sfml-audio PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/tjong/Desktop/Cmake_SFML/SFML-2.6.x/include"
  INTERFACE_LINK_LIBRARIES "sfml-system"
)

# Import target "sfml-system" for configuration "Debug"
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_IMPLIB_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-system-d.lib"
  IMPORTED_LOCATION_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-system-d-2.dll"
  )

# Import target "sfml-main" for configuration "Debug"
set_property(TARGET sfml-main APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sfml-main PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-main-d.lib"
  )

# Import target "sfml-window" for configuration "Debug"
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_IMPLIB_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-window-d.lib"
  IMPORTED_LOCATION_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-window-d-2.dll"
  )

# Import target "sfml-network" for configuration "Debug"
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_IMPLIB_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-network-d.lib"
  IMPORTED_LOCATION_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-network-d-2.dll"
  )

# Import target "sfml-graphics" for configuration "Debug"
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_IMPLIB_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-graphics-d.lib"
  IMPORTED_LOCATION_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-graphics-d-2.dll"
  )

# Import target "sfml-audio" for configuration "Debug"
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_IMPLIB_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-audio-d.lib"
  IMPORTED_LOCATION_DEBUG "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Debug/sfml-audio-d-2.dll"
  )

# Import target "sfml-system" for configuration "Release"
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-system.lib"
  IMPORTED_LOCATION_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-system-2.dll"
  )

# Import target "sfml-main" for configuration "Release"
set_property(TARGET sfml-main APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-main PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-main.lib"
  )

# Import target "sfml-window" for configuration "Release"
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-window.lib"
  IMPORTED_LOCATION_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-window-2.dll"
  )

# Import target "sfml-network" for configuration "Release"
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-network.lib"
  IMPORTED_LOCATION_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-network-2.dll"
  )

# Import target "sfml-graphics" for configuration "Release"
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-graphics.lib"
  IMPORTED_LOCATION_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-graphics-2.dll"
  )

# Import target "sfml-audio" for configuration "Release"
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-audio.lib"
  IMPORTED_LOCATION_RELEASE "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/Release/sfml-audio-2.dll"
  )

# Import target "sfml-system" for configuration "MinSizeRel"
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-system.lib"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-system-2.dll"
  )

# Import target "sfml-main" for configuration "MinSizeRel"
set_property(TARGET sfml-main APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(sfml-main PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "CXX"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-main.lib"
  )

# Import target "sfml-window" for configuration "MinSizeRel"
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-window.lib"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-window-2.dll"
  )

# Import target "sfml-network" for configuration "MinSizeRel"
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-network.lib"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-network-2.dll"
  )

# Import target "sfml-graphics" for configuration "MinSizeRel"
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-graphics.lib"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-graphics-2.dll"
  )

# Import target "sfml-audio" for configuration "MinSizeRel"
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-audio.lib"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/MinSizeRel/sfml-audio-2.dll"
  )

# Import target "sfml-system" for configuration "RelWithDebInfo"
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-system.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-system-2.dll"
  )

# Import target "sfml-main" for configuration "RelWithDebInfo"
set_property(TARGET sfml-main APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-main PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-main.lib"
  )

# Import target "sfml-window" for configuration "RelWithDebInfo"
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-window.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-window-2.dll"
  )

# Import target "sfml-network" for configuration "RelWithDebInfo"
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-network.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-network-2.dll"
  )

# Import target "sfml-graphics" for configuration "RelWithDebInfo"
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-graphics.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-graphics-2.dll"
  )

# Import target "sfml-audio" for configuration "RelWithDebInfo"
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-audio.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/tjong/Desktop/Cmake_SFML/Build/lib/RelWithDebInfo/sfml-audio-2.dll"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
