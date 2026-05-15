#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    
    int c;
    int d;
    if(a>=b){
        c=b;
        d=(a-b);
    }
    else{
        c=a;
        d=(b-a);
    }
    
    int e=d/2;
    cout<<c<<" "<<e;
}