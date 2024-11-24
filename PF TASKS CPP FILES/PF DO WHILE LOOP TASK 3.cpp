#include<iostream>
using namespace std;
int main() {
    int i=9;
    int j=9;
    int k=0;
    do {
        int n=0;
        do {
            cout<<"*";
            n++;
        } while (n<=j);
        cout<<endl;
        k++;
    } while (k<=i);
    return 0;
}