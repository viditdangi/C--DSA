#include<iostream>
using namespace std;
int  duplicateElemet(int arr[],int size){
    int duplicate=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            duplicate=arr[i];
        }
    }
    return duplicate;
}
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<duplicateElemet(arr,size);

}