#include<iostream>
#include<vector>
using namespace std;


int main(){
    int a;
    cin>>a;
    vector<int>v(a);
    
    int count1=0;
    int count2=0;
    for(int i=0;i<a;i++){
        cin>>v[i];
        if(v[i]==-1){
             count2++;
            if(count1>0){
                count2=count2-1;
                count1--;
            }
           
        }
        else{
            count1=count1+v[i];
        }
        
       
        
    }
     cout<<count2;
    
    
    
    
}