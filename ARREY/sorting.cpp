#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter thee size of an arrey: ";
    cin >> n;
    int arr[n];
    cout <<"Enter the elements of an arrey:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // now selection shorting stsart from here 
    for(int i=0;i<n-1;i++){
        int index =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
    cout << "Sorted arrey is : ";
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}


/*Selection Sort Algorithm to sort the array of integers in decreasing order.*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of an arrey: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of an arrey: ";
    for(int i=0;i<size;i++)
    cin >> arr[i];

    // now sorting the allgo
    // here are two  ways of sorting first one is sort in assending order and the print it
    // in revers. second one is to sort it in dedecding order and print it.
    // we are going to use sconde methods here 

    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
     cout <<"Descendig order of the given arrey is : ";
    for(int i=size-1;i>=0;i--){
        cout << arr[i]<<" ";
    }
    return 0;
}

/*  
3: Selection Sort Algorithm to sort the array of char in ascending order.
*/
 #include<iostream>
 using namespace std;
 int main(){
    int size;
    cout<<"Enter the size of character arrey: ";
    cin >> size;
    cout << "Enter the Characters";
    char arr[size];
    for(int i=0;i<size;i++)
    cin >> arr[i];

    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i+1;j<size;i++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
      //char arr1[size];
      //for(int i=0;i<size;i++){
        //arr1[i]=arr[i];
      //}

     cout << "Character arrey in Ascending order: ";
    for(int i=0;i<size;i++){
        cout <<  arr[i]<<" ";
    }


    return 0;
 }