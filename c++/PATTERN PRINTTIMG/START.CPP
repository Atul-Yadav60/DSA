/*Q1,  First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout << "4" <<" ";
        }
        cout << endl;
    }
    return 0;
}

/* Q2.Second Pattern:
   
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            
             int first=(j+1)*(j+1);
             if(first >25) break;
             cout << first << " ";
          
        }
        cout << endl;
    }
    return 0;
}

/*Third Pattern:
  
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216

*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            
            int first=(j+1)*(j+1)*(j+1);
            cout << first <<" ";
            
        }
        cout<<endl;
    }
    return 0;
}

/*Fourth Pattern:

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
          
          int a=70;
          char ch=a+j;
          cout<< ch << " ";
          
        }
        cout << endl;
    }
    return 0;
}

/*Q First Pattern:
       
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
     1 2 3 4 5 6
       
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++){
          if(j>6)
          break;
          cout << j;
        }
        cout << endl;
    }
    return 0;
}

/*Second Pattern:
   
    A
    A B
    A B C
    A B C D
    A B C D E
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            int a=65+j;
            char ch=a;
            cout << ch<<" ";
        }
        cout << endl;
    }
    return 0;
}
/*Q. Third Pattern:
     
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15

*/
#include<iostream>
using namespace std;
int main(){
    for(int i=10;i<16;i++){
        for(int j=10;j<=i;j++){
            cout<< j <<" ";
        }
        cout << endl;
    }
    return 0;
}

/*Q.Fourth Pattern:

      A B C D
      A B C
      A B
      A

*/
#include<iostream>
using namespace std;
int main(){
    for(int i=4;i>0;--i){
        for(int j=0;j<i;j++){
            
            char ch='A'+j;
            cout << ch <<" ";
        }
        cout << endl;
    }
    return 0;
}
/*Q. 
     1
     2 1
     3 2 1
     4 3 2 1
     5 4 3 2 1
     */

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            cout << i-j <<" ";
        }
        cout << endl;
    }
    return 0;
}

/*
First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1          

*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n;++i){
        for (int k =0; k<(n-i);++k) {
            cout << " ";
        }
        for (int j = i; j > 0; --j) {
            cout << j << " ";
        }
        cout << endl; 
    }
    return 0;
}
#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int space = 0; space < (n - i); ++space) {
            cout << "  ";  
        }
        for (int num = i; num > 0; --num) {
            cout << num << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) {
        printPattern(n);
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    return 0;
}

/*Q  Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
            B B
          C C C
        D D D D
      E E E E E
*/
#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < (n - i); ++space) {
            cout << "  ";  
        }
        for (int num = i; num > 0; --num) {
            char ch='A'+i;
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) {
        printPattern(n);
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    return 0;
}

/*First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            *
           *  *
         *  *  *
       *  *  *  *
     *  *  *  *  *         
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of rows:";
    cin >> row;
    for(int i=0;i<row;i++){
        for(int j=0;j<(row-i);j++){
            cout << " ";
        }
        for(int k=0;k<=i;k++){
            cout <<"*"<<" ";
        }
        cout << endl;
    }
    return 0;
}
/* do it again                          





















*/
/*Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              1
            1 2 3
          1 2 3 4 5
        1 2 3 4 5 6 7
      1 2 3 4 5 6 7 8 9

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    for (int i = 0; i <=n; i++) {
        for (int space = 0; space < (n - i); ++space) {
            cout << "  ";  
        }
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }
        for(int num2=3;num2>0;num2++){
            cout << num2<<" ";
        }
        cout << endl;
    }
}

/*Q Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
            A B A
          A B C B A
        A B C D C B A
      A B C D E D C B A

*/

/*Q Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

                               *
                             *   *
                           *   *   *
                         *   *   *   *
                      *    *   *   *   *
                         *   *   *   *
                           *   *   *
                             *   *
                               *   
*/
