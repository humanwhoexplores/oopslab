/*
*
*	This program finds number of vowels in a given character array using pointer arithmetic
*
*
*/
#include <iostream>
#include <cstring>
using namespace std;

int count_vowels(char *array, int size)
{
	int ans = 0;
	for(int i = 0; i < size; i++)
	{
		if( array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' || 
			array[i] == 'A' || array[i] == 'E' || array[i] == 'O' || array[i] == 'U' || array[i] == 'V' )
				ans++;	 
	}
	return ans;
}

int main()
{
	char opt = 'y';
	char array[30];
	while(opt == 'y' || opt == 'Y')
	{
		cout<<"Enter the string  "<<endl;
		cin>>array;
		cout<<"number of vowels in given array == "<<count_vowels(array, sizeof(array))<<endl;
		cout<<"wanna enter more y/n  ";
		cin>>opt;
	}

	return 0;
}
