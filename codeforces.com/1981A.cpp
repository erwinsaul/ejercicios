#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int v[100000001];

int criba(int l, int r){
    v[0] = 1;
    v[1] = 1;
    int re = 0;
    for(int i = l; i <=r; i++){
        if(v[i] == 0){
            for(int j = i; j <=r; j += i){
                v[j] = v[j]+1;                
                re = max(re, v[j]);
            }            
        }
    }
    return re;
}

int main(int argc, char *argv[]) {
    memset(v, 0, sizeof(v));    
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<criba(a,b)<<endl;
    }
    return 0;
}
