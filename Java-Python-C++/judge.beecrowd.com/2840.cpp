#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    double r, l, pi=3.1415, v;
    cin>>r>>l;
    v = (4.0/3.0)*pi*r*r*r;
    cout<<floor(l/v)<<endl;
    return 0;
}