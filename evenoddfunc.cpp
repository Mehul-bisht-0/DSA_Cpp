#include<iostream>
using namespace std;
bool isEven(int num){
    if(num&1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int a;
    cin>>a;
    if (isEven(a)){
        cout<<"No. is even"<<endl;
    }else{
        cout<<"No. is odd"<<endl;
    }
}