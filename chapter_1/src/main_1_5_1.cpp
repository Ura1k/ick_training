
#include <iostream>

/**
 * @brief Main function in CPP
 *
 * @param argc Argument count object
 * @param argv Ardument vector object
 * @return int 0 on success, else -1
 */

int main(int argc, char **argv) {
  // Printing local variables
  std::cout << "Printing local variable value" << std::endl;

  // I am an int variable inside a function
  int test_int_variable{0};
  std::cout << "test_int_variable: input = ";
  std::cin >> test_int_variable;
  std::cout << "test_unsigned_int_variable = " << test_int_variable
            << std::endl;

  unsigned int test_unsigned_int_variable{0};
  std::cout << "enter value for test_usigned_int_variable: ";
  std::cin >> test_unsigned_int_variable;
  std::cout << "test_unsigned_int_variable = " << test_unsigned_int_variable
            << std::endl;

  // I am declaring multiple init_8 variables inside of a function
  int8_t test_int8_variable_1{0}, test_int8_variable_2{0},
      test_int8_variable_3{0};

  std::cout << "test_int8_variable_1 = ";
  std::cin >> test_int8_variable_1;
  std::cout << "test_int8_variable_2 = ";
  std::cin >> test_int8_variable_2;
  std::cout << "test_int8_variable_3 = ";
  std::cin >> test_int8_variable_3;

  std::cout << "test_int8_variable_1: "
            << static_cast<unsigned>(test_int8_variable_1) << std::endl;
  // Printing int8_t value as number
  std::cout << "test_int8_variable_2: "
            << static_cast<unsigned>(test_int8_variable_2) << std::endl;
  // Printing int8_t value as number
  std::cout << "test_int8_variable_3: "
            << static_cast<unsigned>(test_int8_variable_3) << std::endl;
  // Printing int8_t value as number

  return 0;
}