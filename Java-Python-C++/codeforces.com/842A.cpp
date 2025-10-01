#include<iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long int l,r,x,y,k;
    //l y r son la experiencia
    //x, y son el costo
    cin>>l>>r>>x>>y>>k;
    /*
    TLE
    for(int i=l;i<=r;i++) {
        for(int j=x;j<=y;j++) {
            if(i/j==k) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }*/
    for(int i=x;i<=y;i++) {
        if( (k*i)>=l && (k*i)<=r) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}