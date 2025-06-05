#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int h,f,tw,te,o;
    switch(1){
        case 1: h=amount/100;
                amount=amount%100;
                cout<<"No of hundreds: "<<h<<endl;
        case 2: f=amount/50;
                amount=amount%50;
                cout<<"No of fifties: "<<f<<endl;
        case 3: tw=amount/20;
                amount=amount%20;
                cout<<"No of twenties: "<<tw<<endl;
        case 4: te=amount/10;
                amount=amount%10;
                cout<<"No of tens: "<<te<<endl;
        case 5: o=amount/1;
                amount=amount%1;
                cout<<"No of ones: "<<o<<endl;
    }
}