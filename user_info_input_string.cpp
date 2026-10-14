#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string name;
    cout << "enter your name: " ;
    getline(cin , name);
    // we use getline (cin) for string we can not directly use cin like int and char
    cout << "your name is " << name ;
    return 0;  

}