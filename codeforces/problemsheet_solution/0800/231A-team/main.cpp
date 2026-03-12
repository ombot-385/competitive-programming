#include<iostream>
using namespace std;

int main(){
    int n;
    int a,b,c;
    int countplus=0;
    
    cin>>n;
     for(int i=1;i<=n;i++){
        int count=0;

        cin>>a>>b>>c;
        if(a==1){
            count+=1;
        }
        if(b==1){
            count+=1;
        }
        if(c==1){
            count+=1;
        }
        
        if(count>=2){  //if a+b+c>2 instead of introducing new constant
            countplus+=1;
        }
        //cout<<"count"<<count<<endl;
        //cout<<"countplus"<<countplus<<endl;
        
    }


   

cout<<countplus<<endl;
     
}