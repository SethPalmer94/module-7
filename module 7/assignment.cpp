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
	Counter(int c) : count(c)
	{};

	unsigned int getCount()// returns count
	{
		return count;
	}
	// the operator keyword is used to overload the operator 
	Counter operator ++()
	{
		
		++count;
		return Counter(count);

	}

};
int main()
{
	Counter c1, c2, c3;
	cout << "c1 = " << c1.getCount() << endl;
	cout << "c2 = " << c2.getCount() << endl;
	++c1;
	++c2;
	++c2;
	++c2;
	++c2;
	cout << "c2 = " << c2.getCount() << endl;
	c3 = ++c2;
	cout << "c3 = " << c3.getCount() << endl;





	cout << "press any key to close" << endl;
	_getch();
	return 0;
}