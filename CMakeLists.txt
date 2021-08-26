cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 23)

if(${GTEST})
    set(TEST_FILES src/test_class_test.cpp)

    set(TEST_LIBS lib)

    include_directories(src)

    add_subdirectory(src)
endif()

if(${GTEST})
    project(unit-tests)
    message(running GTEST)
    add_subdirectory(lib/googletest)

    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
    include_directories(${gtest_SOURCE_DIR}/include ${gmock_SOURCE_DIR})

    add_executable(Google_Tests_run ${TEST_FILES})

    target_link_libraries(Google_Tests_run ${TEST_LIBS} gtest gmock gtest_main)
else()
    project(main)

    add_executable(main main.cpp src/test_class.h src/test_class.cpp)
endif()