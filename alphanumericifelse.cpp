#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase"<< endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase"<< endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Number"<<endl;
    }
}