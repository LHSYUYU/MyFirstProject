#include <iostream>
void format_time(int hours, int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
int main()
{
	int hours, minutes;
	std::cout << "Enter the number of hour: ";//std::cout<<"Enter the number of hours and minutes: /n";
	std::cin >> hours;                        //std::cin>>hours>>minutes;����������
	std::cout << "Enter ther of minutes: ";   //std::cout<<hours<<":"<<minutes<<std::endl;����������
	std::cin >> minutes;
	

	format_time(hours, minutes);
	return 0;
}