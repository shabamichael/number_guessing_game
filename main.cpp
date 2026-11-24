#include <iostream>
#include <random>


int main(){

	std::random_device rd;
	std::mt19937 gen(rd()); 
	std::uniform_int_distribution<int> dis(1,100);
	
	int secret_number = dis(gen);
	int guess = 0;
	int attempts = 0;

	std::cout << "=== Number Guessing Game ===" <<std::endl;
	std::cout << "I have picked a number between 1 and 100." << std::endl;

	while(guess !=secret_number){

	std::cout << "Enter your guess: ";
	std::cin >> guess;
	attempts++;
	

	if(guess > secret_number){
		std::cout << "Too high! Try again." << std::endl;
	}
	else if (guess < secret_number){
		std::cout << "Too low! Try again." <<std::endl;
	}
	else{
		std::cout << "Correct! You guessed it in " << attempts << " attempts."<<std::endl;

	}
	

	}

return 0;
}
