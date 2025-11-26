/*  Problem: Selection Test 1
 *  Code: 1035
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b>c)
	{
		
		if(d>a)
		{
			if((c+d)>(a+b))
			{
				if(c>0 && d>0)
				{
				  if(a%2==0)
				  {
					  cout<<"Valores aceitos"<<endl;
				  }
				  else
	              { 
	   	              cout<<"Valores nao aceitos"<<endl;
     	          }				  	
				}
				else
	            {
	   	           cout<<"Valores nao aceitos"<<endl;
     	        }				
			}
			else
	        {
	   	      cout<<"Valores nao aceitos"<<endl;
     	    }
		}
		else
	    {
	   	  cout<<"Valores nao aceitos"<<endl;
     	}		
	}
	else
	{
		cout<<"Valores nao aceitos"<<endl;
	}
	return 0;
}

