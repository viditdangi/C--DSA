#include<iostream>
#include<vector>
using namespace std;

bool ispalindrome( char name[],int n ){
    int s=0;
    n=name.size();
    int e=n-1;
    while(s<e){
        if(name[s]==name[e]){
            return true;
        }
        else{
            s++;
            e--;
        }
    }
}

int main(){
    
  char name[100];
  int n;
 
 
    cout<<ispalindrome(name,n);
   
    
    
}