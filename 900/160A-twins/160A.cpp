#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v(a);
     for(int i=0;i<a;i++){
         cin>>v[i];
     }
     
     for(int i=0;i<a;i++){
         for(int j=i+1;j<a;j++){
             if(v[i]>v[j]){
                 swap(v[i],v[j]);
             }
         }
     }
    \
    int sum=0;
    for(int i=0;i<a;i++){
        sum=sum+v[i];
    }
    
    double sum2=0;
    sum2=(sum)/2;
    
    
    int sum3=0;
    int count=0;
    
    for(int i=(a-1);i>=0;i--){
        sum3=sum3+v[i];
        count++;
        if(sum3>sum2){
            break;
        }
    }
    
    
    cout<<count;
    
}
