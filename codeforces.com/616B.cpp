#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(int argc, char *argv[]) {
    int n, m, r, mf;
    int v[100][100];
    cin>>n>>m;
    for (int i = 0; i < n; i++) {        
        for (int j = 0; j < m; j++) {
            cin>>v[i][j];
        }
    }
    r = -1;
    for (int i = 0; i < n; i++) {        
        mf = INT_MAX;
        for (int j = 0; j < m; j++) {
            mf = min(mf, v[i][j]);
        }
        r = max(r, mf);
    }
    
    cout<<r<<endl;
}