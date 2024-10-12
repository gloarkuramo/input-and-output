#include <iostream>
using namespace std;

int main(){
    long long int v,t;
    cin>>v>>t;
    if(v*t==0 || (v*t)%109==0){
        cout<<0;
    }
    else if(v*t>0){
        cout<<(v*t)%109;
    }
    else{
        cout<<109+(v*t)%109;
    }
    
}