#include<iostream>
using namespace std;
int main()
{
    int temp,n1,n2;
    cout<<"Enter Two nonnegative number: ";
    cin>>n1>>n2;
    while(n2==0){
    temp = n1%n2;
    n1=n2;
    n2=temp;
    }
    cout<<n1<<endl;
    return 0;
}
