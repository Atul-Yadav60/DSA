/*Temperature Range: Write a program that checks if a given temperature
 is suitable for swimming. If the temperature is between 70 
and 90 (Excluded) degrees Fahrenheit print yes, else NO. */
#include<iostream>
using namespace std;
int main(){
    double temp;
    cout << "Enter the temperature: ";
    cin >> temp;
    if(temp > 70 && temp < 90){
          cout << "Give temperature is sutabale for swimming: ";
            }
     else {
        cout << "Give temperature is not sutabale for swimming: ";
     }       
    return 0;
}
/*Even and Positive Number:
 Write a program that prints “YES” if a given number
  is both even and positive, otherwise it will print “NO”.*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter any number";
    cin >> num;
    if( num %2==0 && num >=0){
        cout << "YES.";
    }
    else{
        cout<< "NOOOOO.";
    }
    return 0;
}  

/*: Age Check: Implement a program that checks if a person is a teenager.
 A teenager is someone whose age is between 13 and 19 (inclusive).*/
 #include<iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age:";
    cin >> age;
    if( age>= 13 && age<=19){
        cout << "tenagerr";
    }
    else{
        cout<< "NOt a teenager";
    }
    return 0;
}  
/*: Take three numbers a,b,c from the user
, print yes if a is either greater than b 
or c. Otherwise print NO.*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter any three different number:";
    cin >> a >> b >> c;
    if (a>b && a>c){
        cout << a <<" is greatest ";
    }
    else {
        if(b>c && b>a){
            cout <<b<<" greatest number.";
        }
        else{
            cout <<c<<"  is greatest";
            
        }
       // cout <<c<<" c is greatest";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    double  age = 14-8+92>>2+7 ;
    
    cout << age;
    return 0;
}  