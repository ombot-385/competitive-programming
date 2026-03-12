#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    string b;
    cin>>a>>b;
    int t=(a.length());
    int count=0;
    
    for(char c=0;c<t;c++){
        int ascii=a[c];
        int ascii2=b[c];
        if (ascii>96){
           a[c]=(ascii-32);
        }
        
        if(ascii2>96){
            b[c]=(ascii2-32);
        }
        
        
        if(a[c]>b[c]){
            count=1;
            //cout<<ascii<<"  "<<ascii2<<"  "<<count<<endl;
            break;
        }
        
        else if(a[c]<b[c]){
            count=-1;
            //cout<<ascii<<"  "<<ascii2<<"  "<<count<<endl;
            break;

        }
        
        else{
            count+=0;
            //cout<<ascii<<"  "<<ascii2<<"  "<<count<<endl;

        }
    }
    
    
    cout<<count;
}