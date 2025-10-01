//     Problem: Draw Grid
//     Site: coj.uci.cu 
//     Code: 1149



#include <iostream>

using namespace std;

void print(int n, char car)
	{
		for(int i=0;i<n;i++)
		    {
			  cout<<car;
	    	}
	}
 void as(int n, int d, char car)
    { 
		for(int k=0;k<n;k++)
		{
			print(d,car);
	    	cout<<endl;
		}
   }

void grid(int s, int t, int n)
{
	for(int k=0;k<(2*n+1);k++)
	{
		if(k%2==0)
		  print(t,'*');
		else
	      print(s,'.');	
    }
    cout<<endl;
}

static void solve(int s,int t, int n)
{
	 int l=s*n+(n+1)*t;
	 for(int k=0;k<(2*n+1);k++)
	 {
		 if(k%2==0)
           	as(t,l, '*');	  
		 else
		 for(int i=0;i<s;i++)
		     grid(s,t,n);
	      
	 }
		  
		 
}

int main(int argc, char** argv)
{
	int s,t,n,j=1;
	 while(1)
	  {
		  cin>>s>>t>>n;
		  if(s==0&&t==0&&n==0)
		       break;
		  cout<<"Case "<<j<<":"<<endl;
		 solve(s,t,n);
		 cout<<endl;
		 j++;  
	  }	
	return 0;
}
