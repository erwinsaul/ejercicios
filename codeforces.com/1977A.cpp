#include <iostream>

using namespace std;

int main(){
    int a, b, t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>=b and (a-b)%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }        
    }
    return 0;
}