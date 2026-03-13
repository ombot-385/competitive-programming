#include<bits/stdc++.h>//
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    

    long long e=(a/c);
    if(a%c!=0){
        e+=1;
    }
    
   
    long long f=(b/c);
    if(b%c!=0){
        f+=1;
    }
    cout<<(e*f)<<endl;
}
