/*Q1. Print “India will win the World Cup 2023”, 20 times.*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        cout << i <<" INDIA will win the world cup\n";
    }
    return 0;
}

/*Q2.	Print all Odd numbers from 1 to n,
 take n as an input from the user.*/
 #include<iostream>
 using namespace std;
 int main(){
    int a;
    cout << "plese enter the upper limit: ";
    cin >> a;
    for(int i=0;i<=a;i++){
        int b=2*i+1;
        if(b<=a){
            cout << b <<" ";
        }
        else break;
    }
    return 0;
 }
 /*Q3.	Print all numbers from 1 to n, which is divisible by 4.
  Take n as an input from the user.*/
#include<iostream>
using namespace std;
int main(){
    int upper_limit;
    cout<<"plese enter upper-limit: ";
    cin >> upper_limit;
    for(int i=1;i<=upper_limit;i++){
        if(i%4==0)
            cout << i<<" ";
        
    }
    return 0;
}