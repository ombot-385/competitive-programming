#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

string s;
cin>>s;

int t=(s.length()-1);
int countu=0;
int countl=0;


for(int i=0;i<=t;i++){
    char c= s[i];
    if(isupper(c)){
        countu+=1;
    }
    else{
        countl+=1;
    }
}
//cout<<countl<<endl;
//cout<<countu<<endl;
   
    
if (countu>(t+1)/2){
    //string c=toupper(s);  toupper works only for character not string
    for(int i=0;i<=t;i++){
        s[i]=toupper(s[i]);
    }
    
}
else{
    for(int i=0;i<=t;i++){
        s[i]=tolower(s[i]);
    }
    
}

cout<<s<<endl;



}

