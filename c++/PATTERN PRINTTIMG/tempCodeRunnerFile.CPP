#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i <=n; i++) {
        for (int space = 0; space < (n - i); ++space) {
            cout << "  ";  
        }
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }
        for(int num2=3;i>0;num2++){
            cout << num2<<" ";
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