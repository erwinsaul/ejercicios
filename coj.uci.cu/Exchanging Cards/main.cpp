/*    Problem: Exchanging Cards
 *    Site: coj.uci.cu / uva.onlinejudge.org
 *    Code: 1061
 *    Status: Accepted / Accepted
 */	


#include <iostream>
#include <set>       // set
#include <algorithm> // set_union
#include <iterator>  // inserter
using namespace std;


int main(int argc, char** argv)
{
    int a,b,k,aux;
    
    while(1)
    {
		
		cin>>a>>b;
		if(a==0&&b==0)
		   break;
			   
		set<int> va;
		set<int> vb;
		set<int> C,D,E;
		
		set<int>::iterator it;
		set<int>::iterator it1;
		
		for(k=0;k<a;k++) //almacenar datos sin repeticion en vector a
		{
			 cin>>aux;
			 va.insert(aux);
			
		}
		
		for(k=0;k<b;k++) //almacenar datos sin repeticion en vector b
		{
			cin>>aux;
			vb.insert(aux);
		}
		
		
		set_intersection(va.begin(), va.end(), vb.begin(), vb.end(), inserter(C, C.begin())); //hallar la interesccion de los conjuntos c=a inter b
		
		set_difference(va.begin(), va.end(), C.begin(), C.end(), inserter(D, D.begin())); //hallar la diferencia d=a-c
		set_difference(vb.begin(), vb.end(), C.begin(), C.end(), inserter(E, E.begin())); //hallar la diferencia d=b-c
		
		a=D.size();
       b=E.size();
       if(a<b)
          cout<<a<<endl;
       else
          cout<<b<<endl;
       
       va.clear();
       vb.clear();
       C.clear();
		
	}	
	return 0;
}
