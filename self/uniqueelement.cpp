#include<iostream>
using namespace std;
int  uniqueelement(int arr[],int size){
    int ans=0;
    for(int s=0;s<size;s++){
        
        ans=ans^arr[s];
        
     }
     return ans;
    }
    
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  cout<< uniqueelement(arr,size);
}