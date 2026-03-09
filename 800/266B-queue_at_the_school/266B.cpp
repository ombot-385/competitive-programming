#include<iostream>
#include<string>
#include<algorithm> //its included so we can use swap
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int length=s.length();
    
    for(int i=1;i<=b;i++){
        for(int j=0;j<length;j++){
            //cout<<j;
            if(s[j]=='G' and j!=0){
                swap(s[j-1],s[j]);
                j=j+1;
                //cout<<j<<endl;
            }
        }
    }
    cout<<s;
}