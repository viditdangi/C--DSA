 #include <iostream>
using namespace std;
int fibbo(int g){
    //base case
    if(g==0 or g==1){
        return g;
    }
    return fibbo(g-1)+fibbo(g-2);
}
int main() {
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<=n-1;i++){
      k=k+fibbo(i);
    }
    cout<<k<<" ";
    
    return 0;
}