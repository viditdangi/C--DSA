#include<iostream>
using namespace std;
void  reverseArr(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
     }
    
    }
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   reverseArr(arr,size);
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}