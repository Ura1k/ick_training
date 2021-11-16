/**
 * @file main_1_3.cpp
 * @author Uranik Kallaba(uranik_kallaba@Outlook.com)
 * @brief Lesson on decalring variables
 * @version 0.1
 * @date 2021-11-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

// i am a global variable
double test_double_variable;

//i am a global unsigned double variable
//based on IEEEE 754-2008, most hardware does not support unsigned, therefore it
// is stopped
double test_usigned_double_variable;

/**
 * @brief Main funistion in CPP
 * 
 * @param argc Argument count object 
 * @param argv Argument vector object
 * @return int 0 on succes, else -1
 */

int main(int argc, char**argv){ 
//i am an int variable inside a function
int test_int_variable;
unsigned int test_unsigned_int_variable;


//i am declaring multiple init_8 variables inside of a function
int8_t test_int8_variable_1,
test_int8_variable_2, test_int8_variable_3;

return 0;
}