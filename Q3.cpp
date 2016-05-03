// inline functions for arithmetic
#include <iostream>
using namespace std;

inline int add(int a, int b)
{
	return a + b;
}

inline int sub(int a, int b)
{
	return a - b;
}


int main()
{
	int c = add(10, 20);
	int d = sub(12, 13);
	cout<<c<<"\n"<<d<<"\n";

}