#include <iostream>
#include <queue>
#include <cstring>

using namespace std;
int gr[100][100];
int vis[100][100];
int n, m;
//Resolveremos usando un BFS con una cola de prioridad
//al momento de buscar el siguiente nodo debe estar en orden
//al momento de introducir otro nodo debe ser mayor al nodo donde estoy
//ademas tendremos dx y dy como en DFS para recorrer toda la matriz
//tambien necesito almacenar las posiciones de los nodos, fila columna
//para saber hacia donde ire.
//se debe hacer el BFS para cada valor de fila y columna

int solve(){
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {-1, 0, 1, 0};
  int ans = 0;
  int dato, x, y, r, px, py;
  priority_queue< pair<int, pair<int, int> > > pq;
  pair< int, pair<int, int> > aux;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      memset(vis, 0 , sizeof(vis)); //inicializar para cada valor
      aux = make_pair(gr[i][j], make_pair(i, j));
      vis[i][j] = 1;
      r = 1;
      pq.push(aux);
      while(!pq.empty()){
          aux = pq.top();
          pq.pop();
          dato = aux.first;          
          y = aux.second.first;
          x = aux.second.second;
          for(int k=0; k<4;k++){
              px = x+dx[k];
              py = y+dy[k];
              if( (px>=0 && px<m) && (py>=0 && py<n) && (gr[py][px]>dato) && (vis[py][px]==0) ){
                  aux = make_pair(gr[py][px], make_pair(py, px));
                  pq.push(aux);          
                  vis[py][px]=1;
                  r = r + 1;
              }  
          }          
         
      }
      ans = max(ans, r);
    }
  }  
  return ans;
}

int main(){
  
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>gr[i][j];
    }    
  }
  cout<<solve()<<endl;
  return 0;
}
