#include <iostream>
void format_time(int hours, int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
int main()
{
	int hours, minutes;
	std::cout << "Enter the number of hour: ";//std::cout<<"Enter the number of hours and minutes: /n";
	std::cin >> hours;                        //std::cin>>hours>>minutes;输入多个数据
	std::cout << "Enter ther of minutes: ";   //std::cout<<hours<<":"<<minutes<<std::endl;输出多个数据
	std::cin >> minutes;
	

	format_time(hours, minutes);
	return 0;
}