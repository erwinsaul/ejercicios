/*
 * sin título.cxx
 * 
 * Copyright 2012 Erwin <erwin@darkstar>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;
int gcd(int x, int y){return y?gcd(y,x%y):abs(x);}
int main(int argc, char **argv)
{
	int a,b,c;
	cin>>a>>b>>c;
	int k=2;
	bool flag=true;
	int n=1,m=1,o=1;
	k=1;	
	while(flag && k<=a)
	{
		if(a%k==0)
		{
			n=k;
			if(b%n==0)
			{
				m=b/n;
				if(c%m==0)
				{
					o=c/m;
					if(n*o==a)
						flag=false;
				}
				
			}
			else if(c%n==0)
			{
				m=c/n;
				if(b%m==0)
				{
					o=b/m;
					if(n*o==a)
					flag=false;
				}
			}
		}
		k++;
	}
	cout<<4*(n+m+o)<<endl;
	return 0;
}

