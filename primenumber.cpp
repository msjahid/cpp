#include<iostream>
using namespace std;
void checkprime(int num);
int main()
{
    int a;
    cin>>a;
    checkprime(a);
    return 0;
}
void checkprime(int num){
     int i,Count = 0;
     for(i=2;i<=num/2;i++){
        if(num%i==0){
            Count++;
            break;
        }
     }
     if(Count==0 && num!=1){
        cout<< num << " is a prime number" <<endl;
     }
     else{
        cout<< num << " is not a prime number" <<endl;
     }
     }
