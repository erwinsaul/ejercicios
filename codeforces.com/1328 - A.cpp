#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int t, r, resp;
    long double a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        r = ceil(a/b);
        resp = (r*b)-a; 
        cout<<resp<<endl;
    }
    return 0;
}