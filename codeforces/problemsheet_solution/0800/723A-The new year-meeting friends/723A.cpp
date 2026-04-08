#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v{a,b,c};
    //cout<<v[0];
    
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
          if(v[i]>v[j]){
              swap(v[i],v[j]);
          }
    }
    }
    
  cout<<((v[1]-v[0])+(v[2]-v[1]));
    
   
}