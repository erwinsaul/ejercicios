#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    bool sw = true;
    for(int i=1; i<n && sw; i++){
        if(m[i-1][i-1]!=m[i][i]){
            sw = false;    
            //break;        
        }
    }

    cout<<(sw ? "SI" : "NO");
    /*
    if(sw){
        cout<<"SI";
    }
    else{
        cout<<"NO";
    }

    /*bool sw = true;

    for(int i=1;i<n;i++){
        sw = sw && (m[i-1][i-1]==m[i][i]); 
    }
    cout<<(sw ? "SI" : "NO");
    */
    return 0;
}