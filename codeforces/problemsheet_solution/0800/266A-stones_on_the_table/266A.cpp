#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    string s;
    cin>>a;
    cin>>s;
    //int count=(a-1);
    int count=0;
    int length=s.length();
    for(int i=0;i<(length-1);i++){
        if(s[i]==s[i+1]){
            //count-=1;
            count+=1;
        }
    }
    
    cout<<count;
}