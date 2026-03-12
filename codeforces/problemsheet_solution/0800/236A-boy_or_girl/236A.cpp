#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    //string p;
    cin>>s;
    int count=0;
    //int count2;
    int t=s.length();
    
    for(int i=0;i<(t-1);i++){
        //p.push_back(s[i])
        //int r=p.length
        for(int j=i+1;j<t;j++){
             if(s[i]==s[j]){
               count+=1;
               break;
              
        }
       
        }
        //cout<<(t-count);
            
        
    }
    
    int m=(t-count);
    //cout<<m;
    if(m%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}

 
