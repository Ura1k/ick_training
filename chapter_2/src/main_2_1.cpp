/**
 * @file main_2_1.cpp
 * @author Uranik Kallaba(uranik_kallaba@Outlook.com)
 * @brief Lesson on FUnctions 
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

/**
 * @brief The function returns the summary of 2 numbers. "numri1" First Number
 * "numri2" Second Number
 * 
 * @param numri1 
 * @param numri2 
 * @return double 
 */
double mbledh(double numri1, double numri2);
/**
 * @brief The function returns the Substraction of 2 numbers. "numri1" First Number
 * "numri2" Second Number
 * @param numri1 
 * @param numri2 
 * @return double 
 */
double zbrit(double numri1, double numri2);
/**
 * @brief The function returns the Multiplication of 2 numbers. "numri1" First Number
 * "numri2" Second Number 
 * @param numri1 
 * @param numri2 
 * @return double 
 */
double shumezo(double numri1, double numri2);
/**
 * @brief The function returns the Division of 2 numbers. "numri1" First Number
 * "numri2" Second Number 
 * @param numri1 
 * @param numri2 
 * @return double 
 */
double pjesto(double numri1, double numri2);

int main(int argc, char** argv) {
  std::cout << "mbledhja:" << mbledh(60, 9) << std::endl;
  std::cout << "zbritja:" << zbrit(70, 1) << std::endl;
  std::cout << "shumezimi:" << shumezo(3, 23) << std::endl;
  std::cout << "pjestimi:" << pjesto(138, 2) << std::endl;
  return 0;
}

double mbledh(double numri1, double numri2) 
{
   return numri1 + numri2; 
}

double zbrit(double numri1, double numri2) 
{
   return numri1 - numri2; 
}

double shumezo(double numri1, double numri2) 
{
   return numri1 * numri2; 
}

double pjesto(double numri1, double numri2) 
{
   return numri1 / numri2; 
}