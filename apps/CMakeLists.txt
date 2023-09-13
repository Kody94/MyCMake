add_executable(MyApp main.cpp)
target_link_libraries(MyApp PRIVATE modern_library EmbeddedOs_library fmt::fmt)