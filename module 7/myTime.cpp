#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
class time12
{
private:
	bool pm;
	int hrs;
	int mins;
public:
	time12() : pm(true), hrs(0), mins(0)
	{}
	time12(bool ap, int h, int m)
	{
		pm = ap;
		hrs = h;
		mins = m;
	}
	void display() const
	{
		if (hrs < 10)
			cout << "0";
		cout << hrs << ":";
		if (mins < 10)
			cout << '0';
		cout << mins << ' ';
		// if pm == true then am_pm = pm
		string am_pm = pm ? "p.m." : "a.m";
		cout << am_pm << endl;
	}

};
class time24
{
private:
	int hours, minutes, seconds;
public:
	time24() :hours(0), minutes(0), seconds(0) {}
	time24(int h, int m, int s) 
	{
		hours = h;
		minutes = m; 
		seconds = s; 
	}
	void display()const// format 23:32:14 hh:mm:s
	{
		if (hours < 10)
			cout << "0";

			cout << hours << ":";
		if (minutes < 10)
			cout << "0";
		cout << minutes << ":";
		if (seconds < 10)
			cout << "0";
		cout << seconds << endl;;


	}
	operator time12() const;

};
time24::operator time12() const
{
	int hrs24 = hours;

	
	bool pm = hours < 12 ? false : true;
	int roundMins = seconds < 30 ? minutes : minutes + 1;
	if (roundMins == 60)
	{
		roundMins = 0; 
		++hrs24;
		if (hrs24 == 12 || hrs24 == 24)
			pm = (pm == true) ? false : true;
	}
	int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
	if (hrs12 == 0)
	{
		hrs12 = 12;
		pm = false;
	}
	return time12(pm, hrs12, roundMins);

}
int main()
{
	
	time12 t3, t4(0, 12, 32);
	time24 t1, t2(18, 3, 54);
	t1.display();
	t2.display();
	t3.display();
	t4.display();
	time12 t12 = t2;
	t12.display();
	cout << "press any key to close" << endl;


	_getch();
	return 0;
}