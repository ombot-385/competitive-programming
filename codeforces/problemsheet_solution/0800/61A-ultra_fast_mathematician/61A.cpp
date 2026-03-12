#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string a,b,s; 
    cin>>a>>b; //string because with integer leading zeroes will be lost
    int length=a.length();
    
    for(int i=0;i<length;i++){
        if(a[i]==b[i]){
            //s[i]='0'; dont do this as size not declared ans we are using s[i]
            s.push_back('0');
        }
        else{
           // s[i]='1';
           s.push_back('1');
        }
    }
    cout<<s;
     
}