#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter no.: ";
    cin>>i;
    int n=2;
    while(n<i){
        if(i%n==0){
            cout<<"not prime for "<<n<<endl;
        }
        else{
            cout<<"Prime for "<<n<<endl;
        }
        n+=1;
    }
}