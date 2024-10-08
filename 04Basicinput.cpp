#include <iostream>

using namespace std;

int main()
{
	string nickname, school, yl;
	
	cout << "Nickname\t\t:\t";
	cin >> nickname;
	cout << "Course and Year level\t:\t";
	cin >> yl;
	cout << "Your School\t\t:\t";
	cin >> school;
	cout << "Wow Congrats " << nickname << " !" << yl << " is a nice course. And you are studying in " << school << " Which is one of the center of exellence in Tertiary Education";
	
	return 0;
}
