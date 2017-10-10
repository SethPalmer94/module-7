#include <conio.h>
#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
private:
	Distance() :feet(0), inches(0.0)
	{

	}
	Distance(int f, float i)
	{
		feet = f;
		inches = i;

	}
	void getDist()
	{
		cout << " \nEnter feet: " << endl;
		cin >> feet;
		cout << "\nEnter inches:" << endl;
		cin >> inches; 
	}
	void showDist()
	{
		cout << "feet: " << feet << " inches: " << inches << endl;
	}
};
int main(){





cout << "press any key to close" << endl;
_getch();
return 0;
}