#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0;i<a;i++){
        int p,q,r;
        cin>>p>>q>>r;
        sum1+=p;
        sum2+=q;
        sum3+=r;
    }
    
    if(sum1==0 and sum2==0 and sum3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}