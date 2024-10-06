#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal number: ";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%2;
         num/=2;
         ans+=rem*mul;
         mul=mul*10;
         
    }
    cout<<ans<<" ";
    return 0;
}


/*binary to decimal*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a binary number: ";
    cin>>num;
    int ans=0,rem,mul=1;
     while(num>0){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
     }
     cout << ans;
    return 0;
}

/*Decimal to octaform=={0,1,2,3,4,5,6,7}*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%8;
        num/=8;
        ans+=rem*mul;
        mul*=10;
    }
    cout << ans;
    return 0;
}

/*octaform to decimal */
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a octa number: ";
    cin >> num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=8;
    }
    cout << ans;
    return 0;
}


/*●	Write a program to convert binary
 numbers to decimal numbers using a for loop.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int rem,mul=1;
    long int ans=0;
    for(int i=0;num>0;i++){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    cout << ans;
    return 0;
}

/*●	Write a program to convert binary to Octal numbers*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    // binary ==> decimal ==> octal
    // binary to decimal
    long int ans=0,rem,mul=1;
    for(int i=0;num>0;i++){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    num=ans;
    ans=0;
    mul=1;
    // now convert decimal to octal
    for(int j=0; num>0;j++){
        rem=num%8;
        num/=8;
        ans+=rem*mul;
        mul*=10;

    }
    cout << ans;
    return 0;
}

/*●	Write a program to convert Octal numbers to binary numbers*/
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
 