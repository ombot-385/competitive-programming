#include<iostream>
using namespace std;

int main(){
    int k;
    int n;
    int w;
    int total_cost;
    cin>>k>>n>>w;
    
    total_cost=(k*(w*(w+1)/2));
    int needed_cost= total_cost-n;
    
    if(n>=total_cost){
        cout<<0;
    }
    else{
        cout<<needed_cost;
    }
    
    
    
    
    
    
}