 #include<iostream>
  using namespace std;
  int main(){
    char ch1='A';
    char ch2='z';
    char ch3='Z';
    char ch4='a';
    int i=ch1;
    int j=ch4;
    while(i<=ch3){
        char alph=i;
        cout <<alph<<" ";
        i++;
    }
    while(j<=ch2){
        char beta=j;
        cout << beta << " ";
        j++;
    }
    return 0;
  }