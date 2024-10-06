/*: Take a number n from the user and print all the even numbers
 between 1 and n(inclusive). Do this using while and do while loop separately.

*/
#include<iostream>
using namespace std;
int main(){
    int num;
    
    cout << ("Enter any number:");
    cin >> num;
    int i=1;
    while(  i <= num){
        int a=i%2;
        if(a==0){
            cout << i <<" ";
        }
        i++;

    }

    return 0;
}

/*Q  Find the factorial of a number n using a while loop and do a while loop.*/
#include<iostream>
using namespace std;
int main(){
    int num,a=1;
    cout << ("Enter any number:");
    cin >> num;
    int i=1;
    while(  i <= num){
         a=a*i;
        i++;

    }
    cout << a<<" ";
    return 0;
}

/*Given a number n, print all the numbers 
from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    int i = 1;
    while (i <= num) {  
        if (i % 3 != 0 || i % 5 != 0) {
           i++;  // Increment i before continuing to avoid infinite loop
            continue;
        }
        cout << i << " ";  // Print only if the number is divisible by 3 or 5
        i++;
    }

    return 0;
}

/*Given a number n, print the corresponding month of it.
 For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number,
  don’t do anything. (Use switch here)*/

  #include<iostream>
  using namespace std;
  int main (){
    int month;
    cout << "Enter any number:";
    cin >> month;
    switch(month){
        case 1:cout << "JAN";
        break;

        case 2:cout <<"FAB";
        break;

        case 3:cout <<"MAR";
        break;

        case 4:cout <<"APRIL";
        break;

        case 5:cout <<"MAY";
        break;

case 6:cout <<"JUNE";
        break;

case 7:cout <<"JULY";
        break;

case 8:cout <<"AUG";
        break;

case 9:cout <<"SEPT";
        break;

case 10:cout <<"OCT";
        break;

      case 11:cout <<"NOV";
        break;

     case 12:cout <<"DEC";
        break;
        default: cout<<"Enter Valid Month";
    }
    return 0;
  }

  /*Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.*/
  #include<iostream>
  using namespace std;
  int main(){
    char ch1='A';
    char ch2='z';
    char ch3='Z';
    char ch4='a';
    int i=ch1;
    int j=ch4;
    while(i<=ch3){
        char alph=i;
        cout <<alph<<" ";
        i++;
    }
    while(j<=ch2){
        char beta=j;
        cout << beta << " ";
        j++;
    }
    cout<<"by prathamesh";
    
    return 0;
  }