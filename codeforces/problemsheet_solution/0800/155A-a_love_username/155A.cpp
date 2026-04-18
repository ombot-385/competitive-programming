#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v(a);
    
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    
    int smallest=v[0];
    int largest=v[0];
    int count=0;
    
    for(int i=1;i<a;i++){
        if(v[i]>largest){
            largest=v[i];
            count++;
        }
        else if(v[i]<smallest){
            smallest=v[i];
            count++;
        }
       
    }
    
    cout<<count;
}