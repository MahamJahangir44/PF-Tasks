#include<iostream>
using namespace std;
int main() {
    double num;
    cout<<"Enter a number:";
    cin>>num;
    if (num>0) {
        if (num>100) {
            cout<<"The number is large."<<endl;
        } else {
            cout<<"The number is small."<<endl;
        }
    } else if (num<0) {
        if (num<-100) {
            cout<<"The number is very small."<<endl;
        } else {
            cout<<"The number is small and negative."<<endl;
        }
    } else {
        cout<<"The number is zero."<<endl;
    }
    return 0;
}