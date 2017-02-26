#include <iostream>

using namespace std;

class Student{
public:
    long long int roll;
    char Name[40];
    double marks;
    void GetData();
    void Display();

};
void:: Student::GetData(){
    cout<<"Enter Roll : ";
    cin>>roll;
    //cin.ignore();
    cout<<"Enter Name : ";
    cin.ignore();
    cin.getline(Name,40);
    cout<<"Enter Marks : ";
    cin>>marks;
}
void Student::Display(){
GetData();
cout<<"Roll is : "<<roll<<endl;
cout<<"Name is : "<<Name<<endl;
cout<<"Marks is : "<<marks<<endl;
if(marks<0){
    cout<<"Invalids Marks"<<endl;
}
}
int main(){
Student S;
S.Display();
}

