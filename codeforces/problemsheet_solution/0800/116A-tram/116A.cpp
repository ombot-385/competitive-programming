#include<iostream>
using namespace std;
int main(){
    int stop;
    cin>>stop;
    int total=0;
    int ans=0;
    
    int a[stop*2];
    for(int i=0;i<(stop*2);i=i+2){
        cin>>a[i]>>a[i+1];
        total=(total)-a[i]+a[i+1];
        if(total>ans){
            ans=total;
        }
    }
    cout<<ans;
}