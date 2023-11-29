#include<iostream>
using namespace std;
int main(){

//take in total class held and total class attend
//if attendence is less than 80% say no allow for exam.


int cls1,atd1;
cout<<"Enter number of class held: ";
cin>>cls1;
cout<<endl;
cout<<"Enter number of class attended: ";
cin>>atd1;

float cls=cls1;
float atd=atd1;




float result= (atd/cls)*100;
cout<<"Percentage: "<<result<<endl;

if(result<80){
    cout<<"Not allowed.";
}

else{
    cout<<"Allowed.";
}




    return 0;
}

