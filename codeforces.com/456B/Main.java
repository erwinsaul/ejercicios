import java.io.*;
import java.util.*;
import java.math.BigInteger;


public class Main {
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger n = in.nextBigInteger();
		BigInteger cero = new BigInteger("0");
		BigInteger uno = new BigInteger("1");
		BigInteger dos = new BigInteger("2");
		BigInteger tres = new BigInteger("3");
		BigInteger cuatro = new BigInteger("4");
		BigInteger r;
		int res=0;
		if(n.compareTo(cero) == 0){
			System.out.println(4);
		}
		else{
			r = n.mod(cuatro);			
			if(r.compareTo(uno) == 0){
				res = (1+2+3+4)%5;
			}
			if(r.compareTo(dos) == 0){
				res = (1+4+4+1)%5;
			}
			if(r.compareTo(tres) == 0){
				res = (1+3+2+4)%5;
			}
			if(r.compareTo(cero) == 0){
				res = (1+1+1+1)%5;
			}
			System.out.println(res);
		}
	}
}

