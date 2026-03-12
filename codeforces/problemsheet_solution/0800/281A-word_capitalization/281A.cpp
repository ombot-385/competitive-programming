#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="";
    cin>>s1;
    if(s1[0]>95){
        s1[0]=(s1[0]-32);
    }
    
    cout<<s1;
}