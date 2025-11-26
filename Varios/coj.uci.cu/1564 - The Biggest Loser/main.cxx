/*   Problem: The Biggest Loser
 *   Code: 1564
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */


#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	    string m,c,nombref="",nombrem="";
		double ant, actual;
		int n;		
		double maym,mayf,p;
		while(cin>>n && n)
		{
			maym=-99999;
			mayf=-99999;			
			for(int k=0;k<n;k++)
			{
				cin>>m;
			    cin>>c;
			    cin>>ant;
			    cin>>actual;
			    p=100.0-((actual*100.0)/ant);			    
			    if(c.compare("F")==0)
			    {				
				  if(p>mayf)
				  {
					  mayf=p;
					  nombref=m;					  
				  }
				}
				else
				{
				  if(p>maym)
				  {
					  maym=p;
					  nombrem=m;					  
				  }
				}				
			}
			printf("%s %.2f%% %s %.2f%%\n",anombrem.c_str(),maym,nombref.c_str(),mayf);		
		}
	return 0;
}

