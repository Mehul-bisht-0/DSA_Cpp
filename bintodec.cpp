#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0,ans=0;
    int n;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        if (digit==1){
            ans=ans+pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<ans<<endl;
}