#include<iostream>
using namespace std;
int main() {
    int i=9;
    int j=9;
    int k=0;
    while (k<=i) {
        int n=0;
        while (n<=j) {
            cout<<"*";
            n++;
        }
        cout<<endl;
        k++;
    }
    return 0;
}