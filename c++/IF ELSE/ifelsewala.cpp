/*Q1.	Two numbers are given, print the bigger number,
 It is given that both numbers can’t be the same*/
 #include<iostream>
 using namespace std;
 int main(){
    int a,b;
    cout << "enter any two different numbers: ";
    cin >> a >> b;
    if(a>b){
        cout << a <<" is greater than "<< b;
    }
    else{
        if(a==b){
            cout << "both the given numbers are equal.";
        }
        else
        cout << b << " is greater than " <<a;
    }
    return 0;
 }
/*Q2.	Age of a person is given, print
 Adult if his/her age is greater than 18, otherwise print Teenager*/
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
 /*3.	Take a number in input (ex n) and print
  the corresponding month to it. Ex: for n=1, print
   january, n=2, print feburary like this you need to give output.
    It is given that n will be greater than 0 and less than 13.*/
