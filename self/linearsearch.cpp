#include<iostream>
using namespace std;
bool linearsearch( int arr[], int size,int target){

  
  for(int i=0;i<size;i++){
        if(target==arr[i]){
return true;
        }
    }
    return false;
}
int main(){
    int size;
    cin>>size;
   

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target";
    cin>>target;
    bool found=linearsearch(arr,size,target);
    if(found){
        cout<<"found";
    }
    else{
cout<<"not found";
    }

}