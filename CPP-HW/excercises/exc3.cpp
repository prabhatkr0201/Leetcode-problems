// Convert Farenheit to Celsius.




#include<iostream>
using namespace std;

int main() {
    float f,c;
    cout<<"Enter Temperacture in F: ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"Temperature in Celcius: "<<c<<endl;
    return 0;
}