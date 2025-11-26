/*  Problem: Grenais
 *  Code: 1131
 *  Site: www.urionlinejudge.com.br
 *  Status: pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int sw=0;
	int a,b,t=0;
	int inter=0,gremio=0,empates=0;
	while(true)
	{
		if(sw==0)
		{
			t++;
			cin>>a>>b;
			if(a==b)
			  empates++;
			else if(a>b)
			  inter++;
			else
			  gremio++;
		   sw=1;	  
		}
		if(sw==1)
		{
		 puts("Novo grenal (1-sim 2-nao)");
		 cin>>a;
		 if(a==1)
		 {
			 sw=0;			 
		 }
		 if(a==2)
		 {
			 cout<<t<<" grenais"<<endl;
			 cout<<"Inter:"<<inter<<endl;
			 cout<<"Gremio:"<<gremio<<endl;
			 cout<<"Empates:"<<empates<<endl;
			 if(inter>gremio)
			   cout<<"Inter venceu mais"<<endl;
			 else if(inter==gremio)
			   cout<<"Nao houve vencedor"<<endl;
			 else if(inter<gremio)
			   cout<<"Gremio venceu mais"<<endl;
			 break;
		 } 
 		}
		
	}
	return 0;
}

