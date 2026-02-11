#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
int og=n;
int temp=n;
int sum=0;
//digit calculate 
int l=0;
while (temp!=0){
    temp=temp/10;
    l++;
}
// power calculate
while(n!=0){
    int k=n%10;
    sum=sum+pow(k,l);
    n=n/10;
}
//compare
if (og==sum){
    cout<<"armstrong"<<endl;
}
else{
   cout<<" not armstrong"<<endl;
}
return 0;
}