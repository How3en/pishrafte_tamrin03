#include<iostream>
#include<time.h>
using namespace std;
#define SIZE 10
int main()
{
    srand(time(NULL));
	int RANDOM[SIZE];
	int i = 0,j,temp;

	while (i!=SIZE){

    lable:
    temp = (rand() % 100);

        for (j = 0; j<i; j++){

         if (RANDOM[j] == temp){
         goto lable;}

        }

    RANDOM[i] = temp;
    i++;}

    cout <<" { ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << RANDOM[i] <<" , ";
	}
    cout <<" } ";

	return 0;
}
