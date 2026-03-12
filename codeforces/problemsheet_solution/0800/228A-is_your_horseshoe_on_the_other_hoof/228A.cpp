#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    
    int result=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(v[i]==v[j]){
                result+=1;
                break;
            }
        }
    }
    cout<<result;
}