#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int t=s.length();
    
    int count1=0;
    int count2=0;
    for(int i=0;i<t;i++){
        if(s[i]=='0'){
            if(i!=0 and s[i-1]=='0'){
                count1++;
                if(count1==7){
                    cout<<"YES";
                    i=(s.length());
                    
                }
        }
            else if(i==0){
                count1++;
                
            }
            
            else{
                count1=1;
            }
                
            } //bada if
        
        else if(s[i]=='1'){
            if(i!=0 and s[i-1]=='1'){
                count2++;
                if(count2==7){
                    cout<<"YES";
                    i=(s.length());
                }
            }
            else if(i==0){
                count2++;
            }
            
            else{
                count2=1;
                
            }
        }
            
        
    }//for
    
    if((count1!=7) and (count2!=7)){
        cout<<"NO";
    }
        
        
        
        
    
}