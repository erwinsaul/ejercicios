//   Problem:  Cipher Grille
//   Site:  acm.timus.ru  
//   Code: 1712  

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	char g[4][4];
	char aux[4][4];
	char p[4][4];
	int k,i;
	//llenar patron
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
	    {
		   cin>>g[k][i];
		   aux[k][i]=g[k][i];
     	}
	}
	
	//llenar datos
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
	    {
		   cin>>p[k][i];
     	}
	}
	
	
	//imprimir patron, rotando

	
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
	    {
		   //cout<<g[k][i]<<" ";
		   if(g[k][i]=='X')
		     printf("%c",p[k][i]);
     	}
     	
	}
	
	//1er rote
	
	int a=0;
	for(k=0;k<4;k++)
	{
		a=0;
		for(i=3;i>=0;i--)
	    {
		 aux[k][a++]=g[i][k];	
		   //cout<<g[i][k]<<" ";
		   	
     	}
     	
	}
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
	    {
		   //cout<<g[k][i]<<" ";
		   if(aux[k][i]=='X')
		     printf("%c",p[k][i]);
     	}
     	
	}
	//2do rote
	int b=0;
	a=0;
	for(k=3;k>=0;k--)
	{
		b=0;
		for(i=3;i>=0;i--)
	    {
			aux[a][b++]=g[k][i];
		   //cout<<g[k][i]<<" ";
		   
     	}
     a++;	
	}
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
	    {
		   //cout<<g[k][i]<<" ";
		   if(aux[k][i]=='X')
		     printf("%c",p[k][i]);
     	}
     	
	}
	
	//3er rote
	
	a=0;b=0;
	for(k=3;k>=0;k--)
	{
		b=0;
		for(i=0;i<4;i++)
	    {
			aux[a][b++]=g[i][k];
		   //cout<<g[i][k]<<" ";
				
     	}
     	a++;
	}
	
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
	    {
		   //cout<<g[k][i]<<" ";
		   if(aux[k][i]=='X')
		     printf("%c",p[k][i]);
     	}
     	
	}
	
	printf("\n");
	return 0;
}
