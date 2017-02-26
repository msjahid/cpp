#include<iostream>
using namespace std;
int factorial(int x){
if(x<=1){
return x*factorial(x-1);
}
//return x*factorial(x-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of " << n << " is " << factorial(n) <<endl;
    return 0;
}
