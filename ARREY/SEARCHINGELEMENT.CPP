/*WRITE ANY ARREY IN REVERSE DONT CREATE AN EXTRA ARREY*/
#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int i=0,j=5;
    cout << "Enter the ellements of an arrey:";
    for(int a=0;a<6;a++){
        cin >> arr[a];
    }

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int b=0;b<6;b++){
        cout << arr[b];
    }
    return 0;
}

/*PRINT FIBBONACI SERIES */
#include<iostream>
using namespace std;
int main(){
    int size,a=0,b=1,c;
    cout <<"Enter the size of fibbo series:";
    cin >> size;
    cout << "the fibo series is for given size is" << a<<" "<< b <<" ";
    // fibo series first ellement is 0 and second element is 1
    for(int i=3;i<=size;i++){
         c=a+b;
         cout << " " << c;
         a=b;
         b=c;
    }
    return 0;
}

/*find the element index in fibo series */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the index of fibbo series:";
    cin >> n;

    int arr[10000];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout << arr[n];
    return 0;

}