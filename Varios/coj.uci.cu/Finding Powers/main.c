//   Problem: Finding Powers 
//   Code: 1654
//   Site: coj.uci.cu
//   Status: Pending
//      


#include <stdio.h>
#include <stdlib.h>
long m,n,x,y,iCount;

/*long bigmod(long iBase, long iExp, long iMod)
{
	long iTemp;
	if(iExp==0) return (1);
	if(iExp==1) return (iBase%iMod);
	if((iExp%2)==0) return (bigmod(iBase,iExp-1,iMod)*(iBase%iMod)%iMod);
	iTemp = bigmod(iBase,iExp/2,iMod);
	return (iTemp*iTemp % iMod);
}*/
int odd(long iX)
{
	return ((iX & 0x0001)!=0);
}
long bigmod(long iBase, long iExp, long iMod)
{
	long iResult=1;
	while(iExp>0)
	{
		if(odd(iExp))
			iResult=(iResult*iBase)%iMod;
		iBase=(iBase*iBase) % iMod;
		iExp >>= 1;
	}
	return (iResult);
}
int main(int argc, char** argv)
{ 
	int ant=0;
	while(1)
	{
		ant=0;
		scanf("%ld %ld %ld", &n,&m,&y);
		if(n==0&&m==0&&y==0)
		    break;
		    
		for(x=1,iCount=0;x<m;x++)
		{
			//printf("%ld %ld \n",bigmod(x,n,m),x);
			
			if(y==bigmod(x,n,m))
			{
				if(ant>0)
			      printf(" ");
				iCount++;
				printf("%ld",x);
				ant++;
			}
			
		} 
		if(!iCount)
		  printf("-1");
		printf("\n");
	}
	return 0;
}
