/*
* 
this program overload ++ and -- operators
*
*/

#include <iostream>
using namespace std;

class Company
{
	int count;
public:
	
	Company()
	{
		count = 0;
	}
	
	void getCount()
	{
		cout<<"the count is "<<count;
	}
	void operator ++ (int)
	{
		count+= 1;;
	}	
	void operator --(int)
	{
		count -= 1;
	}

};

int main()
{
	Company obj1;
	obj1++;
	obj1++;
	obj1++;
	obj1.getCount();
	obj1--;
	obj1.getCount();
	return 0;
}