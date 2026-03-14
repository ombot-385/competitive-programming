#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    string s;
    
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            //s.push_back("i hate that "); cant add more with pushback
            s+="I hate that ";
        }
        else{
            //s.push_back("i love that ");
            s+="I love that ";
        }
    }
    int length=s.length();
    s.erase(length-5,5);
    s+="it";
    cout<<s;
}