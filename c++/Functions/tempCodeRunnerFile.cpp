#include<iostream>
#include<cmath>
using namespace std;
int counting(int n1){
    int coutno=0;
    while(n1){
        coutno++;
        n1/=10;
    }
    return coutno ;
}
bool armstrong(int n){
    int count=counting(n),rem, ans=0,num1=n;
    while(num1){
        rem=num1%10;
        num1/=10;
        ans+=pow(rem,count);
    }
    if(n==ans)
    return 1;
    else
     return 0;
}
void main(){
    int num;

    cout <<"Enter any number:";
    cin >> num;
    cout << armstrong(num);
    
}