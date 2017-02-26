#include <iostream>

using namespace std;

int performAddition(int a,int b){
     int result = a + b;
     return result;
}
int performSubtraction(int a, int b){
    int result = a - b;
    return result;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int c = performAddition(x,y);
    int d = performSubtraction(x,y);
    cout<<"Addition is: "<<c<<endl<<"Subtraction is : " <<d<<endl;
}
