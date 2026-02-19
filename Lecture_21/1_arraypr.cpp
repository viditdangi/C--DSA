#include<iostream>
using namespace std;
int main(){
  int  smallest=INT_MAX;
int n;
cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }}
        cout<<"smallest = " << smallest <<endl;
    
    return 0;
}
