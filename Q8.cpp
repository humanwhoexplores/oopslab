/*
* 
this program overload + and - operators to add 2 objects
*
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
	
	void getDetails()
	{
		cout<<"x == "<<x<<endl;
		cout<<"y == "<<y<<endl;
	}
	
	Company operator + (Company ob)
	{
		Company temp(0,0);
		temp.x = x + ob.x;
		temp.y = y + ob.y;
		return temp;
	}	
	

};

int main()
{
	Company obj1(3,5), obj2(9,10),obj3(0,0);
	obj3  = obj1 + obj2;
	obj3.getDetails();
	return 0;
}