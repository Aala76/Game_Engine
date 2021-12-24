add_executable(my_game main.cpp MyGameApp.h MyGameApp.cpp Unit.h Unit.cpp)

target_link_libraries(my_game manifest_lib)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/.. PROPERTY VS_STARTUP_PROJECT my_game)

include_directories(../Manifest)

file(COPY Assets DESTINATION ../MyGame )
file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Debug)
file(COPY Assets DESTINATION ${PROJECT_BINARY_DIR}/Release)