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