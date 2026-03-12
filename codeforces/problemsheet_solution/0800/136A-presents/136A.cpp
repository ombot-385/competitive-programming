#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    
    for(int j=0;j<a;j++){
        for(int k=0;k<a;k++){
            if(v[k]==j+1){
                cout<<(k+1)<<" ";
                k=a;
            }
        }
    }
}