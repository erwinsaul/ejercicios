#include <iostream>
#include <algorithm>
#include <vec

using namespace std;

int main(){
    int n, k;
    int v[1000];
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int *res = find(v, v+n, k);
    /*
    for(int i = 0; i < n; i++){
        if(v[i] == k){
            res = i;
            break;
        }
    }*/
    if(res == v+n){
        cout << "Poyo :(";
    }
    else{
        cout << distance(v, res);
    }
    return 0;
}