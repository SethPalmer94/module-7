#include <conio.h>
#include <iostream>

using namespace std;
class Counter 
{
private:
	unsigned int count;//count 
public:
	Counter() :count(0)//constructer
	{};

	unsigned int getCount()// returns count
	{
		return count;
	}
	// the operator keyword is used to overload the operator 
	void operator ++()
	{
		++count;
	}
};
int main()
{
	Counter c1, c2;
	cout << "c1=" << c1.getCount() << endl;
	cout << "c2=" << c2.getCount() << endl;
	++c1;
	++c2;
	cout << "c1=" << c1.getCount() << endl;
	cout << "c2=" << c2.getCount() << endl;

	cout << "enter any key to close " << endl;
	_getch();
	return 0;
}
