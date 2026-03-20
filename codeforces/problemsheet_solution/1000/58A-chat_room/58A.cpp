#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    string s2="hello";
    for(int i=0;i<s.length();i++){
        if(s[i]==s2[count]){
            count++;
        }
    }
    if(count==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}