#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    int n,h,c,l;
    double hip, t, r;
    while(cin>>n){
        cin>>h>>c>>l;
        hip = sqrt(h*h+c*c);
        t = hip*l;
        r = (t*n)/10000.0;
        cout<<fixed<<setprecision(4)<<r<<endl;
    }
    return 0;
}