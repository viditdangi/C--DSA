#include<iostream>
using namespace std;
void  swapalternate(int arr[],int size){
    
    for(int s=0;s<size;s+=2){
        if(s+1<size){swap(arr[s],arr[s+1]);
        
        
     }
    }
    }
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   swapalternate(arr,size);
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}