//counting using constructors and destructors
#include <iostream>
using namespace std;

class C
{
	static int  count;
public:

	C()
	{
		count++;
	}
	~C()
	{
		count--;
	}

	void getCount()
	{
		cout<<"count of objects == "<<count<<"\n";
	}
};
int main()
{
	C a,b;
	a.getCount();
	{
		C c;
		a.getCount();
	}
	a.getCount();
	return 0;
}