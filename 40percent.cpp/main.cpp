#include<iostream>
using namespace std;
int main()
{
    int credit,per_credit=2800,extra=3000;
    cout<<"when press 0 then program close"<<endl;
    double fee,forty_percent;
    while(1){
    cout<<"Enter Your Credit : ";
    cin>>credit;
    if(credit==0){
        break;
    }
    fee = (credit * per_credit) + extra;
    forty_percent = int(fee * 0.4);
    cout<< "Your 40% amount is " << forty_percent << endl;
    }
    return 0;
}
