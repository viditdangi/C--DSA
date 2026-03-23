#include<iostream>
using namespace std;
int  duplicateElemet(int arr[],int size){
    int ans=0;
    sort(nums.begin(), nums.end());
    for(int i=1;i<nums.size();i++){
         if(nums[i]==nums[i-1]){
        ans=nums[i];
        }
        
    }
    return ans;
    }

int main(){
    int size;
    cin>>size;

    int nums[100];
    for(int i=0;i<size;i++){
        cin>>numa[i];
    }
    cout<<duplicateElemet(numa,size);

}