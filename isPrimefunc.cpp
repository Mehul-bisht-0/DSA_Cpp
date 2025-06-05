#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=num;i++){
        if(num%i==0){
            return 0;
            break;
        }
    }return 1;
}
int main(){
    int a;
    cin>>a;
    if(isPrime(a)){
        cout<<"Number is prime"<<endl;
    }else{
        cout<<"Number is not prime"<<endl;
    }
}