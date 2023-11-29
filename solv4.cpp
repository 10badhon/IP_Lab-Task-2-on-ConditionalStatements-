#include<iostream>
using namespace std;

//Take in 3 int num
//Find the smallest one
//And also find smallest one is odd/even?

int main(){

int num1,num2,num3;
cout<<"Enter 3 int number: ";
cin>>num1>>num2>>num3;

int num;

if(num1<=num2 && num1<=num3){
    cout<<"Num1 is smallest."<<endl;
    num=num1;
}

else if(num2<=num1 && num2 <= num3){
    cout<<"Num2 is smallest."<<endl;
    num = num2;
}

else{
    cout<<"Num3 is the smallest."<<endl;
    num=num3;
}


if(num%2==0){
    cout<<"Even.";
}

else{
    cout<<"Odd";
}







    return 0;
}
