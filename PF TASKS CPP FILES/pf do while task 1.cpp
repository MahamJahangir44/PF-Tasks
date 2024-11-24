#include<iostream>
using namespace std;
int main() {
    int num=2;
    int difference=3;
    int n=7;
    for (int i=0; i<n; i++) {
        cout<<num<<" ";
        num=num+difference;
    }
    return 0;
}