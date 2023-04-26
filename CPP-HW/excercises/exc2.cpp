// Find sum of n even numbers.





#include<iostream>
using namespace std;

int main() {
    int n,i=1;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n) {
        if(i%2==0) {
            sum=sum+i;
        }
        i++;
    }
    cout<<"\nSum : "<<sum<<endl;
}