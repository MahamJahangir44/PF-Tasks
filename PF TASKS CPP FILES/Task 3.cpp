#include<iostream>
using namespace std;
int main() {
    double num1,num2;
    int choice;
    cout<<"Calculator Program"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;
    while (true) {
        cout<<"Enter your choice (1-5):";
        cin>>choice;
        if (choice==5) {
            break;
        }
        cout<<"Enter first number:";
        cin>>num1;
        cout<<"Enter second number:";
        cin>>num2;
        switch (choice) {
            case 1:
            cout<<"Result:"<<num1+num2<<endl;
            break;
            case 2:
            cout<<"Result:"<<num1-num2<<endl;
            break;
            case 3:
            cout<<"Result:"<<num1*num2<<endl;
            break;
            case 4:
            if (num2!=0) {
                cout<<"Result:"<<num1/num2<<endl;
            } else {
                cout<<"Error!Division by zero"<<endl;
            }
            break;
            default:
            cout<<"Invalid choice.Please choose again."<<endl;
        }
    }
    return 0;
}
