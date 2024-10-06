#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a octal number: ";
    cin >> num;
   long int rem,ans=0,mul=1;
   //octal==>decimal==>binary
   //octal to decimal
   for(int i=0;num>0;i++){
    rem=num%10;
    num/=10;
    ans+=rem*mul;
    mul*=8;
   } 
   num=ans;
   ans=0;
   mul=1;
   for(int j=0;num>0;j++){
       rem=num%2;
       num/=2;
       ans+=rem*mul;
       mul*=10;
   }
    cout << ans;
    return 0 ;
}
 