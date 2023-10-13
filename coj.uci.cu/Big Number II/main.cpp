//    Problem:  Big Number II
//    Site: coj.uci.cu
//    Code: 1395

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	int t;
	
	long   l, index;
	     double sum;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%ld",&l);
		 

        if (l > 0)
        {
            /* log(1) + ... + log(N-1) + log(N) */
            for (sum = 0, index = 1; index <= l; index++)
                sum += log10((double) index);

            /* CEILING[(log(1) + ... + log(N-1) + log(N))] */
            sum = ceil(sum);

            printf("%.0f\n",sum);
        }
       // else printf("\"%s\" is not a valid value\n",l);
	

	}	
	return 0;
}
