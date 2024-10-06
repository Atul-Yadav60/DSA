#include<iostream>
using namespace std;
/*1: Find the cube of a number using Function. */
int cube(int n){
    n=n*n*n;
    return n;
}
int main(){
    int num;
    cout << "Enter any number:";
    cin >> num;
    cout << cube(num);
    return 0;
}


/*Reverse a number n using Function, Constraints: -5000<=n<=5000 */
#include<iostream>
using namespace std;
int reverse(int n) {
    int rem, sum = 0;
    int sign = (n < 0) ? -1 : 1;  // Preserve the sign of the number
    n = abs(n);  // Work with the absolute value

    while (n != 0) {
        rem = n % 10;  
        n /= 10;       
        sum = sum * 10 + rem;  
    }
    return sum * sign;  
}

int main() {
    int num;
    cout << "Enter a number b/n -5000 and 5000: ";
    cin >> num;
    if (num < -5000 || num > 5000) {
        cout << "Number out of range!" << endl;
        return 1;
    }
    cout << "Reversed number: " << reverse(num) << endl;
    return 0;
}


/*: There are three numbers a,b,c. Put the value of a into b,
 put value of b into c and put value of c into a. Do it using Function.*/
 #include<iostream>
using namespace std;
int swap(int a, int b, int c){
    int tmp=a;
    a=b;
    b=c;
    c = tmp;
    return a,b,c;
}
int main(){
    int p,q,r;
    cout << "Enter three numbers: ";
    cin >> p >> q >> r;/// thoda wrong hai


    cout << swap(p,q,r) ;
    return 0;
}

/*Swap 2 numbers a, b without using extra variables. Range of 
-10000<=a,b<=100000. 

*/
#include<iostream>
using namespace std;
int swap( int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    return a,b;
}
int main(){
    int p,q;
    cout << "Enter two numbers: ";
    cin >> p >> q;
    if(p<-10000 || p>10000 || q<-10000 || q>10000){
        cout << "Number out of range!";
        return 1;
    }
    cout << swap(p,q);
    return 0;
}