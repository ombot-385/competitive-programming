#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    
    vector<int>v(d+1);
    
    //int t=k;
    int count=0;
    for(int i=k;i<=d;i+=k){
        int x=i;
        v[i]=x;
        count++;
        
    }
    
    
    for(int i=l;i<=d;i+=l){
        int x=i;
        if(v[i]==x){
            count-=1;
        }
        v[i]=x;
        count++;
    }
    
    
    for(int i=m;i<=d;i+=m){
        int x=i;
        if(v[i]==x){
            count-=1;
        }
        v[i]=x;
        count++;
        
    }
    
    
    for(int i=n;i<=d;i+=n){
        int x=i;
        if(v[i]==x){
            count-=1;
        }
        v[i]=x;
        count++;
        
    }
    
    cout<<count;
    
    
}