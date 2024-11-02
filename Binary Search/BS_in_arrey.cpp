#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int mid, start=0;
    int end=size-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
        break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return mid;
}
int main(){
    int size;
    cout << "Enter the size Of arrey: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the arrey:";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
     int key;
    cout <<"Enter the key: ";
    cin >> key;

    cout <<"Hurrey we got the Number,Its Index is "<<BinarySearch(arr,size,key); 

    return 0;
}