 #include<iostream>
 #include<algorithm>
 using namespace std;
 int main(){
    int size;
    cout<<"Enter the size of character arrey: ";
    cin >> size;
    char arr[size];
    cout << "Enter the Characters : ";
    for(int i=0;i<size;i++)
    cin >> arr[i];

    for(int i = 0 ; i < size-1 ; i++){
        int index=i;
        for(int j=i+1; j < size; j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
     cout << "Character arrey in Ascending order: ";
    for(int i=0;i<size;i++){
        cout <<  arr[i]<<" ";
    }


    return 0;
 }