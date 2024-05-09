#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int primos[100000];

void criba(){
    memset(primos, 0, sizeof(primos));
    for(int i=2; i<70000; i++){
        if(primos[i]==0){            
            for(int j=2*i; j<70000; j = j + i){
                primos[j]=1;
            }
        }
    }
}

int main(){
    long long d = 60000000;
    criba();
    int peso;
    cin>>peso;
    int r = 0;
    long s = 0;   
    while(r<10){
        if(primos[peso]==0){
            r = r + 1;            
            s = s + peso;
        }
        peso = peso + 1;
    }    
    long long t = d / s;
    cout<<s<<" km/h"<<endl;
    long long di = t /24;
    cout<<t<<" h / "<<di<<" d"<<endl;
    return 0;
}