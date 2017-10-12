#include <conio.h>
#include <iostream>
using namespace std;

class Distance
{
private:
	 float MTF; // meters to feet 
	int feet;
	float inches;
public:
	Distance() :feet(0), inches(0.0), MTF(3.280833F)
	{

	}
	Distance(int meters): MTF(3.280833F)
	{
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12*(fltfeet-feet);

	}
	Distance(int f, float i):MTF(3.280833f)
	{
		inches = i; 
		feet = f;
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
	Distance operator + (Distance) const;
	void operator += (Distance);
	operator float() const // convert to inches 
	{
		float fFeet = inches / 12;
		fFeet += static_cast<float>(feet);
		return fFeet / MTF;

	}

};
Distance Distance::operator+(Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	while (i > 12)
	{
		f++;
		i - 12;
	}
	return Distance(f, i);
}
void Distance::operator+=(Distance d2)
{
	feet = feet + d2.feet;
	inches = inches + d2.inches;
	while (inches > 12)
	{
		feet++;
		inches - 12;
	}
	//return Distance(feet, inches);

}
int main()
{
	Distance d1;//1st constructor
	Distance d2(11);//second construtor
	Distance d3(22, 2.1);//third
	cout << "Distance " << endl;
	d1.showDist();
	d1 = d1 + d2;
	cout << "Distance " << endl;
	d1.showDist();
	d2 += d3;
	cout << "Distance " << endl;
	d2.showDist();







	cout << "press any key to close" << endl;
	_getch();
	return 0;
}