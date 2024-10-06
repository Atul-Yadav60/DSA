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