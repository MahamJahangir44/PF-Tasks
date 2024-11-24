#include<iostream>
using namespace std;
int main() {
    int N;
    int sumofsquares=0;
    cout<<"Enter a natural number: ";
    cin>>N;
    if (N<0) {
        cout<<"Please enter a natural number: ";
    }
    int i=1;
    do {
        sumofsquares+=i*i;
        i++;
    } while (i<=N);
    cout<<"The sum of squares of the first "<<N<<" natural numbers is "<<sumofsquares<<".";
    return 0;
}