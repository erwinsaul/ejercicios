#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    int a,b,c, n, r, re;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        r = a+b;
        re = min(r, c);
        r = r - c;
        if (r%2!=0){
            cout<<"-1"<<endl;
        }
        else{
            if(r>0){
                re = re + r/2;    
            }            
            cout<<re<<endl;
        }

    }   
    return 0;
}