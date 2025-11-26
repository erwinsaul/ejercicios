/*   Problem: 1016 - Freckles
 *   Code: 1016
 *   Site: coj.uci.cu
 *   Status: Pending
 *   type: Accepted
 */


#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#include <cmath>

using namespace std;

typedef pair<double, double> ii;
typedef vector<double> vi;
typedef vector<ii> vii;


struct Point
{
    double x, y;

    Point(){}

    Point(double a, double b) { x = a; y = b; }   

};


double dist(const Point &A, const Point &B)
{ 
	return hypot(A.x - B.x, A.y - B.y);
}


// Union-Find Disjoint Sets Library
// PS: This library code does not include the `union by rank' heuristic yet
// 1000 is just a rough number, adjustable by user
vi pset(1000), setSize(1000); int _numDisjointSets;
void initSet(int N) { setSize.assign(N, 1); _numDisjointSets = N; 
pset.assign(N, 0); for (int i = 0; i < N; i++) pset[i] = i; }
int findSet(int i) { return (pset[i] == i) ? i : (pset[i] = findSet(pset[i])); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) { 
 if (!isSameSet(i, j)) { 
   _numDisjointSets--; 
   setSize[findSet(j)] += setSize[findSet(i)]; 
   pset[findSet(i)] = findSet(j); } }
int numDisjointSets() { return _numDisjointSets; }
int sizeOfSet(int i) { return setSize[findSet(i)]; }

vector<vii> AdjList;
vi taken;                                  // global boolean flag to avoid cycle
priority_queue<ii> pq;            // priority queue to help choose shorter edges

void process(int vtx)
{
  taken[vtx] = 1;
  for (int j = 0; j < (int)AdjList[vtx].size(); j++)
  {
   ii v = AdjList[vtx][j];
   if (!taken[v.first]) pq.push(ii(-v.second, -v.first));
  }
}  // sort by (inc) weight then by (inc) id by using -ve sign to reverse order 



double kruskal() //E->numero de aristas, V->numero de vertices
{
	int V,E;
	cin>>V;
	Point puntos[100];
	for(int k=0; k<V; k++)
	{
		cin>>puntos[k].x;
		cin>>puntos[k].y;
	}
	
	E=(V*(V-1))/2;
	
	double u, v, w;
	// scanf("%d %d", &V, &E);

 // Kruskal's algorithm merged with Prim's algorithm
    AdjList.assign(V, vii());
    vector< pair<double, ii> > EdgeList;  // format: weight, two vertices of the edge
    
    for(int j=0;j< V;j++)
    {
		u=j;
      for (int i = j+1; i < V; i++)
      {
		v=i;
		w=dist(puntos[j],puntos[i]);                 // read the triple: (a, b, w)
        EdgeList.push_back(make_pair(w, ii(u, v)));    // but store it as: (w, a, b)
        AdjList[u].push_back(ii(v, w));
        AdjList[v].push_back(ii(u, w));
      }
    }
    sort(EdgeList.begin(), EdgeList.end());   // sort by edge weight in O(E log E)

   double mst_cost = 0.0; initSet(V);             // all V are disjoint sets initially
   for (int i = 0; i < E; i++)
   {                           // for each edge, O(E)
     pair<double, ii> front = EdgeList[i];
     if (!isSameSet(front.second.first, front.second.second))
     {    // if no cycle
      mst_cost += front.first;                     // add the weight of e to MST
      unionSet(front.second.first, front.second.second);       // link endpoints
     }
   }                            // note: the runtime cost of UFDS is very light
 // note: the number of disjoint sets must eventually be one for a valid MST
 return mst_cost;
}   

int main(int argc, char **argv)
{
	printf("%.2f\n",kruskal());	
	return 0;
}

