#include <iostream>

using namespace std;
int main(){
    int n, pivote;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> pivote;
    for(int i = 0; i < n; i++){
        if(v[i] < pivote){
            cout << v[i] << " ";
        }     
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        if(v[i] > pivote){
            cout << v[i] << " ";
        }     
    }
    return 0;
}