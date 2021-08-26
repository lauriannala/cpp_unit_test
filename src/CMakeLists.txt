if (${GTEST})
    project(unit_tests)

    set(HEADER_FILES test_class.h)

    set(SOURCE_FILES test_class.cpp)

    add_library(lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
else()
    set(SOURCE_FILES test_class.cpp)

    set(COMPONENT_SRCS "${SOURCE_FILES}")
    set(COMPONENT_ADD_INCLUDEDIRS "test_class")
    register_component()
endif()