#include<iostream>
using namespace std;
int main() {
    int n=7;
    int i=1;
    do {
        int j=1;
        do {
            cout<<"*";
            j++;
        } while (j<=i);
        cout<<endl;
        i++;
    } while (i<=n);
    return 0;
    }