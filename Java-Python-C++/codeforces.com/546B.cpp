#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int v[3000];
    cin >> n;
    for (int i = 0; i<n;i++) {
        cin >> v[i];
    }    
    int r=0;
    sort(v, v+n);
    for(int i = 0; i <=n; i++) {        
        for(int j = i+1; j < n; j++) {
            if(v[i] == v[j]) {
                v[j] = v[j]+1;
                r = r + 1;                
            }
        }        
    }
    cout << r << endl;

    return 0;
}