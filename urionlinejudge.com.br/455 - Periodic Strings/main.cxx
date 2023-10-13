/*  Problem: 455 - Periodic Strings
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

void naiveMatching() {
  for (int i = 0; i < n; i++) { // try all potential starting indices
    bool found = true;
    for (int j = 0; j < m && found; j++) // use boolean flag `found'
      if (i + j >= n || P[j] != T[i + j]) // if mismatch found
        found = false; // abort this, shift starting index i by +1
    if (found) // if P[0 .. m - 1] == T[i .. i + m - 1]
      printf("P is found at index %d in T\n", i);
} }


int main(int argc, char **argv)
{
	
	return 0;
}

