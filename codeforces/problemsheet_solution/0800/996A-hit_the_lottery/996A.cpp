#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    int count=0;
    int mod;
    
    count=a/100;
    mod=a%100;
    
    count+=mod/20;
    mod=mod%20;
    
    count+=mod/10;
    mod=mod%10;
    
     count+=mod/5;
    mod=mod%5;
    
     count+=mod/1;
    mod=mod%1;
    
    
    cout<<count;
}