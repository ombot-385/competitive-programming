#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<string>v;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        if(b>=1900){
            v.push_back("Division 1");
        }
        else if((b>=1600) and (b<=1899)){
            v.push_back("Division 2");
        }
        else if((b>=1400) and (b<=1599)){
            v.push_back("Division 3");
        }
        else{
            v.push_back("Division 4");
        }
    }
    
    for(int i=0;i<a;i++){
        cout<<v[i]<<endl;
    }
}