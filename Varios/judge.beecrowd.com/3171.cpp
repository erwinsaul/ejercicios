#include <iostream>
#include <cstring>
#include <map>
#include <vector>


using namespace std;

map<int, vector<int> > gr;
int vis[101];
void DFS(int n){
    if(vis[n]==1) 
        return;
    vis[n] = 1;
    for(int i=0; i<gr[n].size(); i++){
        DFS( gr[n][i] );
    }
    return;
}

int main(){
    int n, l, r;
    int a, b;
    memset(vis, 0, sizeof(vis));
    cin >> n >> l;
    for(int i=0;i<l;i++){        
        cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    DFS(1);    
    r = 1;
    for(int i=1;i<=n;i++){        
        r = r * vis[i];
    }
    
    if(r==1){
        cout << "COMPLETO" << endl;
    }
    else{
        cout << "INCOMPLETO" << endl;
    }
    return 0;
}
