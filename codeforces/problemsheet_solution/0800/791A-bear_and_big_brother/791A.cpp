#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    int count=0;
    while(a<=b){
        a=(3*a);
        b=(2*b);
        count+=1;
        //cout<<a<<" ";
        //cout<<b<<" ";
        //cout<<count<<endl;
    }
    
    cout<<count;
    
}