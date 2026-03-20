#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    if(a==1 and b==1 and c==1){
        sum=a+b+c;
    }
    else if ((a==1 and b==1)){
        sum=(a+b)*c;
    }
    else if((b==a and c==1)){
        sum=a*(b+c);
    }
    else if( (a==1 and c==1)){
        sum=a+b+c;
    }
    else if(a==1){
       sum=(a+b)*c; 
    }
    
    else if(b==1){
        if(a>c){
            sum=a*(b+c);
        }
        else{
            sum=(a+b)*c;
        }
    }
    else if(c==1){
        sum=a*(b+c);
    }
    
    else{
        //int greatest=max(a,max(b,c));
        sum=(a*b)*c;
        
    }
    
    cout<<sum<<endl;
}