#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c;
    
    if(a>1 and b>1){
         if (a%2==0 and b%2==0){
      
            c=((a*b)/2);
    }
    
         if (a%2!=0 and b%2!=0){
                if (a>=b){
                      c=((a*(b/2))+(a/2));
        }
                 else{
                       c=((b*(a/2))+(b/2));
        }
        
    }
    
           if ((a%2==0 and b%2!=0) or (a%2!=0 and b%2==0)){
                  if (a%2==0){
                     c=((a/2)*b);
        }
        
                   else{
                     c=((b/2)*a);
        }
    }
    
    }
    
    
    else{
        if (a%2!=0 and b%2!=0){
            if(a>b){
                c=(a/2);
            }
            
            else if(b>a){
                c=(b/2);
            }
            
            else{
                c=0;
            }
        }
        
        
        if ((a%2==0 and b%2!=0) or (a%2!=0 and b%2==0)){
            if(a%2==0){
                c=(a/2);
            }
            
            else{
                c=(b/2);
            }
        
    }
    

    
    }
    
    cout<<c;
   
    }
