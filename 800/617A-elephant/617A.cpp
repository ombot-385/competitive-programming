#include<iostream>
using namespace std;

int main(){
    int x;
    int mod;
    cin>>x;
    mod=x/5;
    
    if (x%5==0){
        cout<<mod;
    }
    else{
    cout<<mod+1;
    
    }
    
}