// This program calculates the user's pay.

#include <iostream>

int main()
{
  double candy, dollars, pay;

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> candy;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold ";
  std::cin >> dollars;

  // Calculate the pay.
  pay = candy * dollars;

  // Display the pay.
  std::cout << "You have earned $" << pay << std::endl;

  return 0;
}
