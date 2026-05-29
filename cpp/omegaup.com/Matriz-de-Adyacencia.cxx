#include <iostream>

using namespace std;

int main(){
    int n, m, origen, destino;
    cin >> n >> m;
    int gr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            gr[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++){
        cin>>origen>>destino;
        gr[origen][destino] = 1;
        gr[destino][origen] = 1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<gr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}