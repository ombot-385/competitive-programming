#include<iostream>
#include<string>
using namespace std;
int main(){
    long long a;//used long long becuase for longer input if showed garbage
    cin>>a;
    string s;
    int count=0;
    s=to_string(a);
    int length=s.length();//here 0047 will get length 2 not 4
                           //as it ignores leading zeroes
    //cout<<length<<endl;
    for(int i=0;i<length;i++){
        int t=(s[i]);
        //cout<<t<<endl;
        if(t==55){
            count+=1;
            //cout<<"count"<<count<<t<<i<<endl;
        }
        
        if(t==52){
            count+=1;
            //cout<<"count"<<count<<t<<i<<endl;
        }
       
        
    }
    //cout<<length;
    //cout<<count;
    //int p=s[0];
    //cout<<p<<endl;
        
    if(count==4){ //here we can use (count==4 or count==7)
        cout<<"YES";
    }
    
    else if(count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}