find_package(GTest REQUIRED)

add_executable(my_functions_test my_functions_test.cpp)

target_link_libraries(my_functions_test
 PRIVATE
  GTest::GTest
  my_functions)

add_test(my_functions_gtests my_functions_test)
