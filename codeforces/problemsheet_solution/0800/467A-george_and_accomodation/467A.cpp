#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b,c;
    int count=0;
    for(int i=0;i<a;i++){
        cin>>b>>c;
        if(c>=(b+2)){
            count+=1;
        }
        
    }
    
    cout<<count;
}