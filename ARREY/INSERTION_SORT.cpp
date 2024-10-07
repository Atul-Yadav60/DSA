/*1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.*/
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cout << "Enter the size of an arrey:";
    cin >> size;
    cout << "Enter the elements of arrey: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    // now starting  INSERTION SHORTING
    for(int i=1;i<size;i++){
        for(int j=i;j>0;j--){
             if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
             }
             else {
                break;
             }
        }
    } 
    // Now printing shorted arrey
    cout << "The Shorted Arrey is :";
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}

/*2: Insertion Sort Algorithm to sort the array of integers in increasing order
 if we start from the last element of the array. Question was explained in the class.*/
 #include <iostream>
 using namespace std;
 int main(){
    int size;
    cout << "Enter the size of an arrey : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the arrey: ";
    for(int i =0; i<size;i++){
        cin >> arr[i];
    }
    // Now start Shorting from last element
    for(int i=size-1;i>0;i--){
        for(int j=size-2;j>=i;j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else
            break;

        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
 }