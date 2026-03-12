#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count1=0;
    int count2=0;
    //int length=s.length();
    
    for(int i=0;i<n;i++){
        if(s[i]=='A'){   //A is char so single quote
            count1+=1;
            
        }
        else if(s[i]=='D'){
            count2+=1;
        }
    }
    
    if(count1==count2){
        cout<<"Friendship";
    }
    else if(count1>count2){
        cout<<"Anton";
    }
    else if(count1<count2){
        cout<<"Danik";
    }
    
}