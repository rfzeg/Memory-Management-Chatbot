cmake_minimum_required(VERSION 3.11.3)

set(CMAKE_CXX_STANDARD 17)

project(chatbot_project)

find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

# Add dirs from external packages
include_directories(
    include
)
link_directories(${Example_LIBRARY_DIRS})
add_definitions(${Example_DEFINITIONS})

# Find all executables
file(GLOB SOURCES src/*.cpp)

# Add project executable
add_executable(chatbot_project ${SOURCES})
target_link_libraries(chatbot_project ${Example_LIBRARIES})
target_link_libraries(chatbot_project ${wxWidgets_LIBRARIES})
target_include_directories(chatbot_project PRIVATE ${wxWidgets_INCLUDE_DIRS})
