#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f1=0,f2=1;
    int f3;
    for(int i=1;i<=n;i++){
        cout<<f1<<endl;
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}