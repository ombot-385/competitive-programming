#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c[a];
    
    int count=0;
    for(int i=0;i<a;i++){
        cin>>c[i];  //here was doing a[i] see it carefully
        if(c[i]>b){
            count+=2;
        }
        else{
            count+=1;
        }
    }
    
     
    cout<<count;
    }
   
    
