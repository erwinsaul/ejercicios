#include<iostream>
using namespace std;
int main(){
    int n, s, r;
    int v[100];
    while(cin>>n && n!=-1){
        s = 0;
        r = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s = s + v[i];
            if(s%100==0){
                r = r + 1;
                s = 0;
            }
        }
        cout<<r<<endl;
    }
}