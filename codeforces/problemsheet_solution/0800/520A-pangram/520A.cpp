#include<iostream>
#include<cctype>
//#include<vector>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    string s;
    cin>>s;
   // vector<string>v;
    int length=s.length();
    int count=0;
    //cout<<"mm"<<endl;
for(int i=0;i<length;i++){
    int p=s[i];
    
        if(p>96){
    s[i]=toupper(s[i]);
    //cout<<s[i]<<endl;
    //cout<<p<<endl;
        }
        
    for(int j=i+1;j<length;j++){
        int q=s[j];
        if(q>96){
            s[j]=toupper(s[j]);
        }
        if(s[i]==s[j]){
            //cout<<s[i]<<endl;
            count+=1;
            break;
        }
        
    }
    
}
if((length-count)==26){
        cout<<"YES";
        //cout<<length<<" ";
        //cout<<count<<" ";
        //cout<<(length-count)<<endl;
    }
    else{
        cout<<"NO";
        //cout<<length<<" ";
        //cout<<count<<" ";
        //cout<<(length-count)<<endl;;
    }

}