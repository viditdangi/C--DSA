#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.";

    cin>>n;
    for(int i=1;i<=(n/2)+1;i++){
        //space 
        for (int j=1;j<=(n/2+1)-i;j++){
            cout<<"* ";
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        
        
        for (int j=(n/2+1)-i;j>=1;j--){
            cout<<"* ";
        }
        
    
        cout<<endl;
    }
    
    for(int i=(n/2);i>=1;i--){
        //space 
        for (int j=1;j<=(n/2+1)-i;j++){
            cout<<"* ";
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        
        
        for (int j=(n/2+1)-i;j>=1;j--){
            cout<<"* ";
        }
        
    
        cout<<endl;
    }
       return 0;
 }