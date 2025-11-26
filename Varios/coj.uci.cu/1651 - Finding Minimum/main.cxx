/*  Problem: 1651 - Finding Minimum
 *  Site: coj.uci.cu
 *  Status: TLE
 *  Type: RMQ - Segment Tree
 */

#include <bits/stdc++.h>

using namespace std;

 typedef struct intervalTree *ptrIntervalTree;
struct intervalTree
{
  int L, R, D;
  ptrIntervalTree izq, der;
  
  // Constructores
  intervalTree(){}
  intervalTree(int L, int R):L(L),R(R)
  {
    izq = der = NULL;
    if ( L == R ) scanf("%d",&D);
    else {
      int mid = (L+R)>>1;
      izq = new intervalTree( L, mid );
      der = new intervalTree( mid+1, R );
      D = min( izq->D, der->D );
    }
  }
  // Funcion para las consultas
  int query(int a, int b)
  {
    if ( R<a || b<L ) return INT_MAX;
    if ( a<=L && R<=b ) return D;
    return min( izq->query( a, b ), der->query( a, b ) );
  }
  // Destructor
  ~intervalTree()
  {
    delete izq;
    delete der;
  }
};
int main(int argc, char **argv)
{
	int n,q,a,b;
	scanf("%d",&n);
	intervalTree tree( 1, n );	
    scanf("%d",&q);
    for(int k=0;k<q;k++)
    {
		cin>>a>>b;
		if(a>b)
		  swap(a,b);
		printf("%d\n",tree.query(a,b));
	}
	return 0;
}

