#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int p;
    if(a>=b){
        p=((6-a)+1);
    }
    else if(a<b){
        p=((6-b)+1);
    }

    int q=6;
    
    for(int i=2;i<=p;i++){
        if((p%i==0) and (q%i==0)){
            p=p/i;
            q=q/i;
        }
    }
    cout<<p<<"/"<<q;
    
}