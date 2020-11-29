# Enable CMake Modules
include(FetchContent)

# lib configuration

# Grab dependencies
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 7.1.0
    )

FetchContent_MakeAvailable(fmt)
# Compile program
add_executable(${PROJECT_NAME} main.cpp)

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(${PROJECT_NAME} 
                           PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Link the dependencies with our binary
target_link_libraries(${PROJECT_NAME}
                      PRIVATE project_options
                      PRIVATE project_warnings
                      PRIVATE fmt::fmt)
