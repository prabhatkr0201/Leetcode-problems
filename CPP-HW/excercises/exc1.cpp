// Check the given input is lowercase,uppercase or a numeric value.






#include<iostream>
using namespace std;

int main() {
    char n;
    cout<<"Enter a char value: ";
    cin>>n;
    // int temp=(int)n;
    if(n>='a' && n<='z') {
        cout<<"\n This is a Lowercase input: "<<n<<endl;
    }
    else if(n>='A' && n<='Z') {
        cout<<"\n This is a Uppercase input: "<<n<<endl;
    }
    else if(n>='0' && n<='9') {
        cout<<"\n This is Numeric input: "<<n<<endl;
    }
    else {
        cout<<"Enter correct input"<<endl;
    }
    
}