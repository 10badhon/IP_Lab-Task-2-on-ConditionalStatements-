#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"write any character ";
    cin>>ch;
    if((ch>='A' && ch<='Z' ) || (ch>='a'&& ch<='z') ){
        cout<<"its a character ";
        if( ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<" its vowel";
        }
        else{
            cout<<"consonant";
        }
    }
    else{
            cout<<"not a character";
    }


return 0;
}
