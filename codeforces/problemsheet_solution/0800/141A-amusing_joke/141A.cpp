#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    /*string s="abc";
    string s2="bgt";
    string s3=s+s2;
    cout<<s3;*/
    //vector<string>s1;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    int count=0;
    string s4=s1+s2;
    int length=s4.length();
    int length2=s3.length();
    for(int i=0;i<length;i++){
        if(length2!=length){
            //cout<<"NO";
            //cout<<endl;
            break;
        }
        else{
            for(int j=0;j<length;j++){
                if(s4[i]==s3[j]){
                    count+=1;
                    s3[j]='&';
                    break;
                }
            }
        }
    }
    
    if(count==length){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}

