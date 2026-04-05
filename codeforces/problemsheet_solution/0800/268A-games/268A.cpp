#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    vector<int>v1(a);
    vector<int>v2(a);
    
    int count=0;
    
    for(int i=0;i<a;i++){
        cin>>v1[i];
        cin>>v2[i];
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(v1[i]==v2[j]){
                count++
            }
        }
    }
    cout<<endl;
    
     
    
    
}