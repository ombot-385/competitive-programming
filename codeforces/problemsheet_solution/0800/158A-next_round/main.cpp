#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    
    int a[n];
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        a[i]=l;
    }
    
    int m=a[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(m==0 and a[i]>m){
            count+=1;
        }
        else if(m !=0 and a[i]>=m){
            count+=1;
        }
        
    }
       
      cout<<count; 
        
    }