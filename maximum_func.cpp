#include<iostream>
using namespace std;
int max(int a,int b)
{
    int maximum = (a>=b) ? a:b;
    return maximum;
}
int main()
{
    int x,y,result;
    cin>>x>>y;
    result = max(x,y);
    cout<<"Max is " << result<<endl;
}
