#include<iostream>
using namespace std;
int  reverseArr(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s>=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<reverseArr(arr,size);

}