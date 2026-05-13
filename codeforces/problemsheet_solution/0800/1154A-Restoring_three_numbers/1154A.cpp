#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;  //could be solved by sorting
    
    int largest=a;
    if(b>largest){
        largest=b;
    }
    if(c>largest){
        largest=c;
    }
    if(d>largest){
        largest=d;
    }
    
    if(a==largest){
        cout<<a-b<<" "<<a-c<<" "<<a-d;
    }
    
     if(b==largest){
        cout<<b-a<<" "<<b-c<<" "<<b-d;
    }
    
    if(c==largest){
        cout<<c-a<<" "<<c-b<<" "<<c-d;
    }
    
    if(d==largest){
        cout<<d-a<<" "<<d-b<<" "<<d-c;
    }
    
    
}