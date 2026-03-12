#include<iostream>
#include<string>
//#include<vector>
using namespace std;

int main(){
    string s1="";// string s='a' is wrong we should write string s="a"
                // 3+'0'=3+48 result='3'; "3"+"0" result="30";'3'+'0' result=51+48=99='c'
                //int n=3;
                //char c=n+'0'
                //result char c=3+48
                //char c=51;
                //c=='3'//ascii vale of 0 is 48 and 9 is 57
                
                
                
    string s2="";  //keep in mind
    int num[100]={0};
    cin>>s1;
    int t1=(s1.length());
    
    int idx=0;
    for(int i=0;i<t1;i+=2){
        num[idx]=s1[i]-'0';// convert char to int
        idx++;
        }
        
    
    
    //int length=size(num);
    
    for(int count=1;count<=idx;count++){
        for(int j=0;j<(idx-1);j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }
    
    for(int k=0;k<idx;k++){
        //int t5=num[k]-'0';
        //s2+=char(t5+'0');
        //s2+='+';
        //string t6='t5'
        s2.push_back(num[k]+'0');
        s2.push_back('+');
        
    }
    
     s2.pop_back();     
    cout<<s2;
}