#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int length=s.length();
    vector<int>v;
    int count=0;
    //cout<<length;
    
    for(int i=0;i<length;i++){
        if(s[i]=='.'){
            v.push_back(0);
            count++;
        }
        
        else if(s[i]=='-' && i+1<length && s[i+1]=='.'){
                v.push_back(1);
                i++;
                count++;
            
        }
        
        else if(s[i]=='-' and i+1<length && s[i+1]=='-'){
            
                v.push_back(2);
                i++;
                count++;
            
        }
    }
    //cout<<v[0];
    //cout<<v[2];
    
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
     
}