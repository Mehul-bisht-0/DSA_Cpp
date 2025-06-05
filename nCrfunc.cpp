#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }return fact;
}
int nCr(int n, int r){
    int num=fact(n);
    int denom=fact(r)*fact(n-r);
    int ans=num/denom;
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int answer=nCr(a,b);
    cout<<"nCr is: "<<answer<<endl;
}