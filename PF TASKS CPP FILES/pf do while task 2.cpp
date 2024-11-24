#include<iostream>
using namespace std;
int main() {
    //password entered by the user
    string password;
    //correct password
    const string correctpassword="123789";
    int attempts=0;
    const int maxattempts=5;
    do {
        cout<<"Enter the password: ";
        cin>>password;
        if (password==correctpassword) {
            cout<<"Access granted!"<<endl;
        } else {
            attempts++;
            cout<<"Incorrect password.You have "<<(maxattempts-attempts)<<" attempts left."<<endl;
        }
        
    } while (attempts<maxattempts);
    cout<<"Too many failed attempts.Exiting program."<<endl;
    return 0;
    
}