#include<iostream>
using namespace std;
int main()
{
    // we use string to store alphabates 
    // we use int to store whole number 
    string characterName = "kartik";
    //characterName will insert the value store in it like we have inserted john
    int characterAge = 20;
    string characterSurname = "patidar";
    //no need of "" in int function 
    cout << "mens " << characterAge << " age is very low " << endl;
    //if we want to get age in between we use "" in between and the write << characterAge
    //we can declare the name or any object in string or int and then use characterName or age to use it every where
    cout << "his surname is " << characterSurname << endl;
    cout << "his name is " << characterName << endl;
    //if i want to change the name or value half way we can do this 
    characterName = "goutam";
    cout << "he liked the name" << characterName << endl;
    return 0;
} // by using string and int i dint have change characternName and Age one by one i can chnage it directly from the string or int function 
