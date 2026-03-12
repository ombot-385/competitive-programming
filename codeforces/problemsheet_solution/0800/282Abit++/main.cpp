#include<iostream>
#include<string>
using namespace std;

int main(){
    int X=0;
    int a;
    cin>>a;
    string b;
    string c="++X";
    string d="X++";
    for(int i=1;i<=a;i++){
        cin>>b;
        if(b==c){
             X+=1;
    }
        else if (b==d){
            X+=1;
        }
        else{
              X-=1;
    }
    //cout<<x<<endl;
        
}
    cout<<X;
}