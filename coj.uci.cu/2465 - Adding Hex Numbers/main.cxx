/*   Problem:Adding Hex Numbers
 *   Code: 2465
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>

using namespace std;

int numero(char c)
{
	int t=0;
	if(c=='A')
	    t=10;
	else if(c=='B')
	    t=11;
	else if(c=='C')
	    t=12;
	else if(c=='D')
	    t=13;
	else if(c=='E')
	    t=14;    
	else if(c=='F')
	    t=15;
	else
	    t=c-48;
	return t;	    
}

int main(int argc, char **argv)
{
	int t,c,r,sum;
	int t1,t2;
	cin>>t;
	string a,b;
	while(t--)
	{
		r=0;
		cin>>a>>b;
		t1=a.length();
		t2=b.length();
		c=0;
		while( t1>0 && t2>0)
		{
			t1--;
			t2--;
			sum=numero(a.at(t1))+numero(b.at(t2))+c;			
			if(sum>15)
			{
				c=sum/16;
				r++;
			}
			else
			  c = 0;			
		}
		
		if(t1>0)
		{
			while(t1>0)
			{
				t1--;
				sum=numero(a.at(t1))+c;
			    if(sum>15) 
			    {
				  c=sum/16;
				  r++;
			    }
			    else
			     c=0;	
		    }
		}
		if(t2>0)
		{
			while(t2>0)
			{
				t2--;
				sum=numero(b.at(t2))+c;
			    if(sum>15) 
			    {
				  c=sum/16;
				  r++;
			    }
			    else
			     c=0;	
		    }
		}
		cout<<r<<endl;
		
	}
	return 0;
}

