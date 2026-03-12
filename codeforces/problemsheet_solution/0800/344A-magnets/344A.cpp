#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    
     vector <string> s(a); //if declared a size then we can use s[i] else we need to use pushback
    int count=0;
    
    for(int i=0;i<a;i++){
        cin>>s[i];
        if(i!=0 and s[i]!=s[i-1]){
            count+=1;
            //cout<<i<<endl;
        }
    }
    cout<<count+1;
}