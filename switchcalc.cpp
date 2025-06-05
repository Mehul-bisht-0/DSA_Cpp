#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    char o;
    cout<<"Enter operation: ";
    cin>>o;
    switch(o){
        case '+':cout<<x+y<<endl;
                break;
        case '-':cout<<x-y<<endl;
                break;
        case '/':cout<<x/y<<endl;
                break;
        case '*':cout<<x*y<<endl;
                break;
        default:cout<<"Enter a valid operation"<<endl;
    }
}