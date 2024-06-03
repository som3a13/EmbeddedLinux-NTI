# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AirController_autogen"
  "CMakeFiles/AirController_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/AirController_autogen.dir/ParseCache.txt"
  )
endif()
