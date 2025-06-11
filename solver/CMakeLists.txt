cmake_minimum_required(VERSION 3.10)
project(solver)

# Настройка CPack
set(CPACK_PACKAGE_NAME "solver")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_DESCRIPTION "Quadratic equation solver")
set(CPACK_PACKAGE_CONTACT "student@university.edu")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Student Name")
set(CPACK_RPM_PACKAGE_RELEASE "1")
set(CPACK_GENERATOR "TGZ;DEB;RPM;ZIP")
include(CPack)

# Основной исполняемый файл
add_executable(solver src/solver.cpp)

# Тесты
enable_testing()
add_executable(tests test/test.cpp)
target_link_libraries(tests solver)
add_test(NAME solver_tests COMMAND tests)
