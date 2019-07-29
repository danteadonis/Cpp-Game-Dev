//A 'Guess My Number' game using the random number generator which changes in value every second.
//Enjoy!

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	srand(static_cast <unsigned int> (time(0)));	//seeds a random number every second the program runs.
	int randomNum = (rand()%100)+1;	//generates a random number between 1 and 100.
	int tries = 0;
	int guess;
	
	cout<< "\t\tWelcome to Guess My Number!\n\tGuess A Number Between 1 And 100 (inclusive).\n\n";
	
	do{
		cout<< "Your guess:\n";
		cin>> guess;
		++tries;
		
		if(guess > randomNum){
			cout<< "Too high, guess again.\n\n";
		}else if(guess < randomNum){
			cout<< "Too low, guess again.\n\n";
		}else{
			cout<< "Congratulations!!!\n";
			if(tries == 1){
				cout<< "You got it right in " <<tries<< " try! LEGEND!!\n";
			}else if(tries <= 3 && tries > 1){
				cout<< "You got it right in " <<tries<< " tries! Respect ;)\n";
			}else if(tries <= 5 && tries > 3){
				cout<< "You got it right in " <<tries<< " tries! Not bad!";
			}else if(tries <= 8 && tries > 5){
				cout<< "You got it right in " <<tries<< " tries.\nNot good at guessing are ya? XD";
			}else if(tries <= 10 && tries > 8){
				cout<< "You got it right in " <<tries<< " tries.\nAre you even trying? :(";
			}else if(tries > 10){
				cout<< "You got it right in " <<tries<< " tries.\nPfft, what a noob. XD";
			}
		}
	}while(guess != randomNum);
	
	cout<< "\n";
	system("PAUSE");	//makes user exit manually before console closes.
	return 0;
}
