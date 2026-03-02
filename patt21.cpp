#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.";

    cin>>n;
    for(int i=1;i<=(n/2)+1;i++){
        //space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=1){
        for(int j=2;j<2*i-1;j++){
            
            cout<<" ";

        }
        //if(i!=0){
        cout<<"*";}
        cout<<endl;
    }
    for(int i=(n/2)+1-1;i>=1;i--){
        //space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=1){
        for(int j=2;j<2*i-1;j++){
            
            cout<<" ";

        }
        //if(i!=0){
        cout<<"*";}
        cout<<endl;
    }
}