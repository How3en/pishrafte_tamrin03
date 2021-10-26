#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	string words[] = { "computer","console","desktop" };
	string word;
	char user_letter,user_input[8] = {'-'};
	int random,i;
	srand(time(NULL));
	random = rand()%3;
	word = words[random];

	for (i = 0; i < word.size(); i++){
    user_input[i] = { '-' };}

    for(int i = 0; i < word.size(); i++){
        cout << "_\t";}
        cout <<endl;
        cout <<endl;
        cout <<"you have "<<word.size()+2<<" chances to guess\n";

	for(int j = 0; j < word.size()+2; j++){
        cout <<"\n Enter a letter: ";
        cin >> user_letter;

      if (isupper(user_letter)){
	       user_letter = user_letter + 32;}

      for (i = 0 ; i < word.size();i++){

           if (user_letter == word [i]){
			user_input[i] = user_letter;}}

      for ( i = 0; i < word.size(); i++)
           {cout << user_input[i];}

      if (word == user_input){
            break;}
    }

	if (word == user_input) {
    cout << "\nYou survived!" << endl;}

	else cout <<"\n"<<word <<"\nYou DEAD!" << endl;

	return 0;

}