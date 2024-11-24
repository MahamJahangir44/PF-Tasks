#include<iostream>
using namespace std;
int main() {
    int secretnum=57;
    int userguess;
    int attempts=0;
    do {
        cout<<"Guess the secret number between 1 and 100: ";
        cin>>userguess;
        attempts++;
        if (userguess<secretnum) {
            cout<<"Too low! Try again.";
        } else if (userguess>secretnum) {
            cout<<"Too high! Try again.";
        } else {
            cout<<"Congratulations! You have guesses the number in "<<attempts<<" attempts.";
        }
    } while (userguess!=secretnum);
    return 0;
}