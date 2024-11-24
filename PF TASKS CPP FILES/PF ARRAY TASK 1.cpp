#include<iostream>
using namespace std;
int main() {
    int ticketPrice=100;
    int popcornPrice=50;
    int numOfStudents;
    const int maxStudents=10;
    string nameOfUser[numOfStudents];
    cout<<"How many users attend the event?(Maximum 10)"<<endl;
    cin>>numOfStudents;
    if (numOfStudents>maxStudents) {
        cout<<"Error: Not more users allowed."<<endl;
    }
    for (int i=0; i<numOfStudents; i++) {
        cout<<"Enter name for user "<<i+1<<":";
        cin>>nameOfUser[i];
    }
    cout<<"User names for the event:"<<endl;
    int totalcost=0;
    for (int i=0; i<numOfStudents; i++) {
        cout<<"User "<<i+1<<": ["<<nameOfUser[i]<<"]"<<endl;
        totalcost=ticketPrice+popcornPrice;
        cout<<"Total cost for each user: "<<totalcost<<endl;
    }
    cout<<"Total cost for all users: "<<totalcost*numOfStudents;
return 0;
}
        
        
        
        
        
        
        
