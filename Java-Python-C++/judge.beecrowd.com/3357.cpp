#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
    string v[100];
    int n;
    float l, q, r, resp;
    cin>>n>>l>>q;
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    r = ceil(l/q);
    int ind = (int)r%n;
    if(ind == 0){
        ind = n;
    }
    resp = l - (q*(r-1));
    if(resp == 0){
        resp = q;
    } 
    cout<<v[ind]<<" "<<fixed << setprecision(1)<<resp<<endl;
    return 0;
}
