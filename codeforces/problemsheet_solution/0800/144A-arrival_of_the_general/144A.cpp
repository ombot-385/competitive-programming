#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    vector<int>v(a);
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    
    int smallest=100;
    int largest=0;
    int largesti=0;
    int smallesti=0;
    for(int i=0;i<a;i++){
        if(v[i]>largest){
            largest=v[i];
            largesti=i;
           
        }
        if (v[i]<=smallest){ //here equal to because we want smallest on right side while we want largest close to right side
            smallest=v[i];
             smallesti=i;
        }
    }
    
    int count=0;
    if(smallesti>largesti){
        count=(largesti+((a-1)-(smallesti)));
        cout<<count;
    }
    else if(smallesti<largesti){
         count=((largesti+((a-1)-(smallesti)))-1);
         cout<<count;
    }
    
    
}