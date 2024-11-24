#include<iostream>
using namespace std;
int main() {
    int i=0;
    int j;
    do {
        j=1;
        do {
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
            j++;
        } while(j<=10);
        cout<<endl;
        i++;
    } while(i<=5);
    return 0;
}