#include<iostream>
using namespace std;
void printCounting(int a){
    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }cout<<endl;
}
int main(){
        int n;
        cin>>n;
        printCounting(n);
}