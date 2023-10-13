/*  Problem:Simple Base Conversion
 *  Code: 1199
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int is_hex(char str[100])
{
	if(str[1]=='x')
	  return 1;
	return 0;
}

int main(int argc, char **argv)
{
	long number;
	char str[100];
	while(1)
	{
		cin>>str;
		if(strcmp(str,"-1")==0)
		   break;
		  
		if(is_hex(str))
		{
		 number = strtol (str,NULL,16);
         printf ("%ld\n",number);
		}  
		else
		{
			number = atol(str);
			printf("0x%X\n",(unsigned int)number);
		}
	}
	return 0;
}

