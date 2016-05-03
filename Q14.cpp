/*
given program overloads >> and << operators
*/

#include <iostream>
using namespace std;

class Company
{
	int x, y;
public:

	Company(int a, int b)
	{
		x = a;
		y = b;
	}
	friend ostream& operator <<(ostream& os, Company& c )
	{
		os << c.x<<"\n"<<c.y<<"\n";
	}
};

int main()
{

	Company obj1(10, 20);
	cout<<obj1;

	return 0;
}