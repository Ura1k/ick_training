
#include <iostream>

// i am a global variable
double test_double_variable = 10.3;  // Here i have the value 10.3

// i am a global unsigned double variable
// based on IEEEE 754-2008, most hardware does not support unsigned, therefore
// it
// is stopped
double test_unsigned_double_variable = 5.3;
;

/**
 * @brief Main funistion in CPP
 *
 * @param argc Argument count object
 * @param argv Argument vector object
 * @return int 0 on succes, else -1
 */

int main(int argc, char** argv) {
  // i am an int variable inside a function
  int test_int_variable = -1;
  unsigned int test_unsigned_int_variable;

  test_unsigned_int_variable = 5;

  double global_vars_sum = test_double_variable + test_unsigned_double_variable;

  // i am declaring multiple init_8 variables inside of a function
  int8_t test_int8_variable_1 = 127, test_int8_variable_2,
         test_int8_variable_3;

  test_int8_variable_2 = int8_t{126};
  test_int8_variable_3 = int8_t{126};

  return 0;
}