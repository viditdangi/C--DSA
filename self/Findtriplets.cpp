#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
int K;
cin>>K;

   
for(int i=0;i<size;i++){
            for (int j=i+1;j<size;j++){
				for(int k=j+1;k<size;k++){
            if(arr[i]+ arr[j]+arr[k]==K){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                
            }
            }
            }
        
        
}
}