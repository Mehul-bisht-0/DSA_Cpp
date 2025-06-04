#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;

        }
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k++;
        }
        int y=1;
        while(y<=i-1){
            cout<<"*";
            y++;
        }
        int x=n-i+1;
        while(x>=1){
            cout<<x;
            x--;
        }
        cout<<endl;
        i++;
    }
}