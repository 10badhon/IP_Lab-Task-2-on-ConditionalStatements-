#include<iostream>
using namespace std;
int main(){

//Find the Absolute value.

float num;
cout<<"Enter any number: ";
cin>>num;


cout<<"Absolute value is: ";
if(num<0){
    num = num*-1;
    cout<<num;
}

else{
    cout<<num;
}


    return 0;
}

