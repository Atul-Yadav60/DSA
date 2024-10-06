#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of an arrey: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of an arrey : ";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    for(int i=size-2;i>=0;i--){
        bool swaping=0;
          for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swaping=1;
          }
          if(swaping==0)
          break;
    }
     cout << "Arrey ofter sorting in assending order : ";
    for(int i=0;i<size;i++){
          cout << arr[i]<<" ";
    }
    return 0;
}