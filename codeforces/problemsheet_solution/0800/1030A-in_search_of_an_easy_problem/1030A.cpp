#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    int count=0;
    for(int i=0;i<a;i++){
        cin>>b[i];
        if(b[i]==1){
            count=count+1;
        }
        
    }
    
    if(count>0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}