#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter no. ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        if(i*j== 6|| i*j==12){
            cout<<"  ";
        }
        else{
            cout<<"* ";
        }
       cout<<endl;

    }

}
