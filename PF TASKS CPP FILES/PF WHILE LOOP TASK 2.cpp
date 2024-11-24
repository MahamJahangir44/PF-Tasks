#include<iostream>
using namespace std;
int main() {
    int i=0;
    int j;
    while (i<=5) {
        j=1;
        while (j<=10) {
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
