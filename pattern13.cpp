#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n+1-i;
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}