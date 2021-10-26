#include <iostream>
using namespace std;
#define MAX 20

int main()
{

    int ARRAY[MAX];
	int SIZE,TEMP,i,j;
    bool TRUE;

	    cout << "Enter the number of numbers you want (maximum " <<MAX<<"): ";
	    cin >> SIZE;

	for (i = 0; i < SIZE; i++){
		cout << "Enter number " << i + 1 << ": ";
		cin >> ARRAY[i];}

   for (i = 0; i < SIZE; i++){
    for (j = i + 1; j < SIZE; j++){
    if (ARRAY[i] >= ARRAY[j]){TRUE = 0;}
    else {TRUE = 1;}}}

    if (TRUE == 1){
        cout << "it's sorted!"<<endl;
        cout << "{ ";
	for (i = 0; i < SIZE; i++){
        cout << ARRAY[i]<<" , ";}
	    cout << "}";}
    if (TRUE == 0){
        cout << "it's not sorted!";
    for (i = 0; i < SIZE; i++){
    for (j = i + 1; j < SIZE; j++){
    TEMP = ARRAY[i];
    ARRAY[i] = ARRAY[j];
    ARRAY[j] = TEMP;}}
	    cout << ",This is your sorted array :" << endl;
	    cout << "{ ";
	for (i = 0; i < SIZE; i++){
        cout << ARRAY[i]<<" , ";}
	    cout << "}";}

	return 0;
    }
