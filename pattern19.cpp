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
        }int k=1;
        while(k<i){
            cout<<"*";
            k++;
        }
        int x=1;
        while(x<i){
            cout<<"*";
            x++;
        }
        int y=n-i+1;
        while(y>=1){
            cout<<y;
            y--;
        }
        cout<<endl;
        i++;
    }
}
