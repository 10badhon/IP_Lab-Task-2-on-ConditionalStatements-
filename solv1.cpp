#include<iostream>
using namespace std;
int main(){
     int num;
     cout<<"enter any integer ";
     cin>>num;
     if (num>=0){
            cout<<num<<" is positive"<<endl;
            if(num%2==0){
                cout<<num <<" is even"<<endl;
            }
            else{
                cout<<num <<" is odd"<<endl;
            }

     }
     else{
         cout<<num<<" is negative";
     }



     return 0;


}
