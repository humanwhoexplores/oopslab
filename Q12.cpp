// solution of Q12

#include <iostream>
using namespace std;

template <class T>

void mymin(T a, T b)
{
	if(a<=b)
		cout<<"min is "<<a<<endl;
	else
		cout<<"min is "<<b<<endl;
}

int main()
{
	mymin(1,2);
	mymin('q','a');	
	return 0;
}