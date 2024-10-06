#include<iostream>
 using namespace std ;
 int main(){
    int age;
    cout << " please enter your age: ";
    cin >> age;
    if (age >= 18){
        cout << " his/her is an ADULT";
    }
    else
        cout << "his/her is an TEENAGER";

    return 0;
 }