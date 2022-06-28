// Guessing Game I learned while taking my C++ Class
//https://www.youtube.com/watch?v=uhFpPlMsLzY&t=12660s
//This is a simple game just for fun...

#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()

{
    int number;
    int response;
    int score = 0;

    srand(time(NULL));

    number = rand() % 10 + 1;

    do {
        cout << "Enter your guess (1-10): ";
        cin >> response;

        if (response > number) {
            cout << "That was too high!" << endl;
        }
        else if (response < number) {
            cout << "That was too low!" << endl;
        }
        else {
            cout << "That was correct!" << endl;
        }
        score++;
        
    } while (number != response);
    cout << "Number is: " << number << endl;
    cout << "guesses: " << score << endl;



    cout << endl;

    return 0;

}