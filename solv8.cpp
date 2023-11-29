#include<iostream>
using namespace std;
int main(){

//find the cgpa
float num;
float point=0;
float sub1,sub2,sub3,sub4,sub5;

cout<<"Enter number of 5 subjects: ";
cin>>sub1>>sub2>>sub3>>sub4>>sub5;

int credit=3;

//for sub1:

if(sub1>=90){
   point += 4.00;
}

else if(sub1>=85){
    point += 3.75;
}

else if(sub1>=80){
    point += 3.50;
}

else if(sub1>=75){
    point += 3.25;
}

else if(sub1>=70){
    point += 3.00;
}

else if(sub1>=65){
    point += 2.75;
}

else if(sub1>=60){
    point += 2.50;
}

else if(sub1>=50){
    point += 2.25;
}

else{
    point += 0.00;
}


//For sub2

if(sub2>=90){
   point += 4.00;
}

else if(sub2>=85){
    point += 3.75;
}

else if(sub2>=80){
    point += 3.50;
}

else if(sub2>=75){
    point += 3.25;
}

else if(sub2>=70){
    point += 3.00;
}

else if(sub2>=65){
    point += 2.75;
}

else if(sub2>=60){
    point += 2.50;
}

else if(sub2>=50){
    point += 2.25;
}

else{
    point += 0.00;
}

//for sub3

if(sub3>=90){
   point += 4.00;
}

else if(sub3>=85){
    point += 3.75;
}

else if(sub3>=80){
    point += 3.50;
}

else if(sub3>=75){
    point += 3.25;
}

else if(sub3>=70){
    point += 3.00;
}

else if(sub3>=65){
    point += 2.75;
}

else if(sub3>=60){
    point += 2.50;
}

else if(sub3>=50){
    point += 2.25;
}

else{
    point += 0.00;
}


//for sub4
if(sub4>=90){
   point += 4.00;
}

else if(sub4>=85){
    point += 3.75;
}

else if(sub4>=80){
    point += 3.50;
}

else if(sub4>=75){
    point += 3.25;
}

else if(sub4>=70){
    point += 3.00;
}

else if(sub4>=65){
    point += 2.75;
}

else if(sub4>=60){
    point += 2.50;
}

else if(sub4>=50){
    point += 2.25;
}

else{
    point += 0.00;
}

//For sub5

if(sub5>=90){
   point += 4.00;
}

else if(sub5>=85){
    point += 3.75;
}

else if(sub5>=80){
    point += 3.50;
}

else if(sub5>=75){
    point += 3.25;
}

else if(sub5>=70){
    point += 3.00;
}

else if(sub5>=65){
    point += 2.75;
}

else if(sub5>=60){
    point += 2.50;
}

else if(sub5>=50){
    point += 2.25;
}

else{
    point += 0.00;
}


cout<<"Total point is: "<<point<<endl;

float total_credit = 15;
float cgpa = (point * credit)/ total_credit;

cout<<"CGPA: "<<cgpa;


    return 0;
}

