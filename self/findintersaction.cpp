#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size1;
    cin>>size1;

    int arr1[100];
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
int size2;
    cin>>size2;

    int arr2[100];
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    vector<int>ans;
    for(int i=0;i<size1;i++){
        int element=arr1[i];
        for(int j=0;j<size2;j++){
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
}
}