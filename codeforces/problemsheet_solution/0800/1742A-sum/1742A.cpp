#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v1(a);
    vector<int>v2(a);
    vector<int>v3(a);
   
    for(int i=0;i<a;i++){
        cin>>v1[i];
        cin>>v2[i];
        cin>>v3[i];       
    }
    
    for(int i=0;i<a;i++){
         if(v1[i]==v2[i]+v3[i]){
            cout<<"YES"<<endl;
        }
        else if(v2[i]==v1[i]+v3[i]){
            cout<<"YES"<<endl;
        }
        else if(v3[i]==v2[i]+v1[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    
    
}