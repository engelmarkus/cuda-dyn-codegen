project(program_options)

set(program_options_SOURCES
    src/cmdline.cpp
    src/config_file.cpp
    src/convert.cpp
    src/options_description.cpp
    src/parsers.cpp
    src/positional_options.cpp
    src/split.cpp
    src/utf8_codecvt_facet.cpp
    src/value_semantic.cpp
    src/variables_map.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

cuda_add_library(program_options STATIC ${program_options_SOURCES})
