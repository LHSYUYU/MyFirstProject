#include <iostream>
int main()
{
	int age = 0;
	int sts = 12;//一年的月数

	std::cout << " Enter your age : " << std::endl;
	std::cin >> age;
	
	int months = age * sts;
	std::cout << " Your age is :" << months << std::endl;

	return 0;
}