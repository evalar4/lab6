cmake_minimum_required(VERSION 3.10)
project(lab06)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab06 src/main.cpp)

enable_testing()
add_executable(tests test/test.cpp)
add_test(NAME lab06_tests COMMAND tests)

set(CPACK_PACKAGE_NAME "lab06")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_DESCRIPTION "Lab06 package")
set(CPACK_PACKAGE_CONTACT "student@university.edu")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Student Name")
set(CPACK_RPM_PACKAGE_RELEASE "1")
set(CPACK_GENERATOR "TGZ;DEB;RPM")

include(CPack)
