#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    string t;
    
    cin>>s;
    cin>>t;
    int length=s.length();
    int length2=t.length();
    int temp=length;
    int count=0;
    //vector<string>v;
    //v.resize(length);
    for(int i=0;i<length;i++){
        
        if(t[temp-1]==s[i]){
            count=count+1;
        }
        
       
        temp=temp-1;
    }
    
  if(count==length and count==length2){ // both length2 needed becaause ig both up and down inputs length would be different but same words might 
                                       //just equal to count
      cout<<"YES";
  }
  else{
            cout<<"NO";
        }
  
    
  
}