// guess_number.cpp
// Author: AlexLunaP
// GitHub: https://github.com/AlexLunaP
// Description: This program is a simple game where the user has to guess a number (between 0 and 999).

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	std::srand(time(0)); //setting the seed for the random number
	int secret= rand()%1000; //generating the random secret number
	int attempt;
	do {
		cout<<"Introduce a number "<<endl;
		cin >> attempt;
		if (attempt<secret) {
			cout<<"Introduced number is lower than the secret number"<<endl;
		}
		if (attempt>secret) {
			cout<<"Introduced number is higher than the secret number"<<endl;
		}
	}while (attempt != secret);
	cout<<"Congratulations, you won!"<<endl; //if the program leaves the "do-while" part, means that the player has found out the number.

cin.ignore();
cin.get();
} 