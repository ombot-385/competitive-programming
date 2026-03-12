#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    double a;
    cin>>a;
    
    double result;
    
    vector<int>v(a);
    double temp=0;
    for(int i=0;i<a;i++){
        cin>>v[i];
        temp=temp+v[i];  //if you use int temp here so c++ allows same varible name declare many times so this temp will end once the loop gets over as temp is already declared outside        
        //cout<<temp;
    }
    
    result=(((temp)/(a*100))*100);
    //cout<<result;
    cout<<fixed<<setprecision(6)<<result;
}