#include<iostream>
#include<string>
using namespace std;

int main(){
    
int a,b;
cin>>a>>b;
//string s;
//int t;

//s=to_string(a);
//int length=s.length();
//cout<<s[length-1];
for(int i=0;i<b;i++){
    //int t=s[length-1];
    if(a%10==0){
        a=(a/10);
        //cout<<a<<endl;
    }
    else{
        a=(a-1);
        cout<<a<<endl;
    }
    //cout<<t;
    
}


cout<<a;

}