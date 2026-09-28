#include <iostream>

using namespace std;

int binarySearch(int v[], int n, int value){
    int ini = 0;
    int fin = n-1;
    
    while(ini <= fin){
        int mid = (ini+fin)/2;
        if(v[mid] == value){
            return mid+1;
        }
        else if(v[mid] > value){
            fin = mid-1;
        }
        else{
            ini = mid+1;
        }
    }
    return 0;
}

int main(){
    int n, m, p[100000], ll[100000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>ll[i];
    }
    for(int i=0; i<m; i++){
        cout<<binarySearch(p, n, ll[i])<<" ";
    }
    return 0;
}