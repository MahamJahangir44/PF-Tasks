#include<iostream>
using namespace std;
int main () {
    int entryFee=100;
    int snackCost=50;
    int numOfStudents;
    const int maxStudents=15;
    string nameOfStudent[maxStudents];
    cout<<"How many students will attend the game night?(Maximum 15)"<<endl;
    cin>>numOfStudents;
    if (numOfStudents>maxStudents) {
        cout<<"Error: Not more students allowed."<<endl;
        return 0;
    }
    int totalCost=0;
    for (int i=0; i<numOfStudents; i++) {
        cout<<"Enter name for student "<<i+1<<": ";
        cin>>nameOfStudent[i];
        totalCost=entryFee+snackCost;
    }
    cout<<"User names for the event:"<<endl;
    for (int i=0; i<numOfStudents; i++) {
        cout<<"User "<<i+1<<": ["<<nameOfStudent[i]<<"]"<<endl;
        cout<<"Total cost for each student: "<<totalCost<<endl;
    }
    cout<<"Total cost for all students: "<<totalCost*numOfStudents;
    return 0;
}