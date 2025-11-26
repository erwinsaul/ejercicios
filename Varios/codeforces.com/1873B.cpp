#include<iostream>
#include<algorithm>

using namespace std;

long int mul(long int v[], int n){
    int r = 1;
    for(int i=0;i<n;i++){
        r = r * v[i];
    }
    return r;
}

int main(int argc, char *argv[]) {
    int n,t;
    long int r;
    long int v[10];
    cin>>t;
    while(t--){
        cin>>n;
        r = 1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        r = mul(v,n);
        for(int i=0;i<n;i++){
            v[i] = v[i] + 1;
            r = max(r, mul(v,n));
            v[i] = v[i] - 1;
        }
        cout<<r<<endl;
    }
    return 0;
}