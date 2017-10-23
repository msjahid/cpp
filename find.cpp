#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string sentence = "bob saw a big blue boat";
    int b = 0, x, a;
    x = count(sentence.begin(),sentence.end(),'b');
    for(int i = 0;i < x;i++){
        a = 0 + b;
        b = sentence.find('b',a);
        cout<< b <<endl;
        b +=1;
    }
    return 0;
}
