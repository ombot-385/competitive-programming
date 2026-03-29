#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    //string s;
    vector<string>t(a);
     //int length=s.length();
     for(int i=0;i<a;i++){
         string s;
         cin>>s;
         t[i]=s;
     }
     
     string u="Tetrahedron";
     string v="Cube";
     string w="Octahedron";
     string x="Dodecahedron";
     string y="Icosahedron";
     
     int count=0;
     for(int i=0;i<a;i++){
         if(t[i]==u){
             count=count+4;
         }
         else if(t[i]==v){
             count=count+6;
         }
         else if(t[i]==w){
             count=count+8;
         }
         else if(t[i]==x){
             count=count+12;
         }
         else if(t[i]==y){
             count=count+20;
         }
     }
     
     cout<<count;
     
}