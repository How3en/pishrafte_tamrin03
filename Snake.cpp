#include<iostream>
using namespace std;
int main()
{
	int SIZE;
	cout << "Enter the size of your snake: " ;
	cin >> SIZE;
	for(;0<SIZE;SIZE--)
	{
		if (SIZE % 2 == 0)
			cout << "#";
		else
			cout << "*";

	}
	return 0;
}
