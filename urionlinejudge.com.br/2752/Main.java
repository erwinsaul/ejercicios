/*
Problem:2752 
 */
import java.io.IOException;
import java.util.*;
public class Main{
	
	public static void main (String[] args) throws IOException{
		String s = "AMO FAZER EXERCICIO NO URI";		
		System.out.printf("<%s>\n",s);
		System.out.printf("<%30s>\n",s);
		System.out.printf("<%.20s>\n",s);
		System.out.printf("<%-20s>\n",s);
		System.out.printf("<%-30s>\n",s);
		System.out.printf("<%.30s>\n",s);
		System.out.printf("<%30.20s>\n",s);
		System.out.printf("<%-30.20s>\n",s);
	}
}
