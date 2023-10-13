/*   Problem: Grey Codes II
 *   Code: 1605
 *   Site: coj.uci.cu
 *   Status: Accepted
 */
/*************************************…
* Compilation: javac GrayCode.java
* Execution: java GrayCode N
*
* Print the N-bit binary reflected Gray code using recursion.
*
* % java GrayCode 3
* 000
* 001
* 011
* 010
* 110
* 111
* 101
* 100
*
****************************************/
import java.util.*;

public class Main{

// append reverse of order n gray code to prefix string, and print
static void yarg(String prefix, int n) {
if (n == 0) System.out.print(prefix);
else {
gray(prefix + "1", n - 1);
yarg(prefix + "0", n - 1);
}
}

// append order n gray code to end of prefix string, and print
static void gray(String prefix, int n) {
if (n == 0) System.out.print(prefix);
else {
gray(prefix + "0", n - 1);
yarg(prefix + "1", n - 1);
}
}



public static void main(String[] args)
{
	Scanner in=new Scanner(System.in);
	while(true)
	{
     int N = in.nextInt();
     if(N==0)
        break;
     gray("", N);
     System.out.println();
     }
}

}
