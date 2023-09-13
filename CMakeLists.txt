cmake_minimum_required(VERSION 3.14...3.27)

project(MyProject)
include(FetchContent)
find_package(Boost REQUIRED)
FetchContent_Declare(
  fmtlib
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 5.3.0)
FetchContent_MakeAvailable(fmtlib)

add_subdirectory("extern/modern-cmake/examples/extended-project")
add_subdirectory("extern/EmbeddedOs")

add_subdirectory("apps")