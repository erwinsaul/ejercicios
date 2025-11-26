/*   Problem: Rectangle
 *   Code: 2483
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Geometria
 */



#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x,y;
	int rx=0,ry=0;
	bool flag=true;
	int p[3][2];	
	
	cin>>p[0][0];	
	cin>>p[0][1];
	cin>>p[1][0];
	cin>>p[1][1];
	cin>>p[2][0];
	cin>>p[2][1];
	
	for(int k=0;k<3;k++)
	{
		x=p[k][0];
		
		for(int j=0;j<3;j++)
		{
			if(k!=j)
			{
			 y=p[j][1];		
			 flag = false;			 
			 for(int i=0;i<3;i++)
			 {				 
				 if(x==p[i][0] && y==p[i][1])
				 {
					 flag=true;
					 break;
				 }
			 }
			 if(!flag)
		     {
				rx=x;
				ry=y;
			 }
		    }
		    
		}
		
	}
	cout<<rx<<" "<<ry<<endl;
	
	return 0;
}

