// Create a pattern of a square which consists numbers in increasinf order of the row like
// if row=1 then all columns should have 1
// if roww is 2 then all columns shoul have 2 and so on.




#include<iostream>
using namespace std;

int main() {
    int n,i=1;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<i<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}