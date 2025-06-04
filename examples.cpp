#include<iostream>
using namespace std;
int main(){
    /**int a=1,b=2;
    if(++a)
        cout<<b<<endl;
    else
        cout<<++b<<endl;

    if(a-- > 0 || b++>2){
        cout<<"Stage 1: Inside if"<<endl;
    }else{
        cout<<"Stage 2: Inside else"<<endl;
    }
    cout<<a<<" "<<b<<endl;

    int x=1;
    int y=x++;
    int z=++x;
    cout<<y;
    cout<<z;**/
    for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
   
}