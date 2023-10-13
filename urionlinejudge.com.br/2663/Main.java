import java.io.*;
import java.util.*;

public class Main{
	
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int n, k, d, r;
		n = in.nextInt();
		k = in.nextInt();		
		int v[]= new int[n];
		for(int i=0;i<n;i++)
		{
			v[i] = in.nextInt();
		}
		Arrays.sort(v);
		r = k;
		int i = n - k - 1;
		while(i>=0&& v[i]==v[n-k]){
			r++;
			i--;
		}		
		System.out.println(r);
	}
}
/*
Map <Integer, Integer> m = new HashMap<Integer, Integer>();
		for(int i=0;i<n;i++){
			d = in.nextInt();
			r = 1;
			if(m.containsKey(d)){
				r = m.get(d) + r;				
			}
			m.put(d,r);
		}
		
		ArrayList<Integer> keys = new ArrayList<Integer>(m.keySet());
		r = 0;
		for(int i=keys.size()-1; i>=0;i--){
			if(r<k){
				r = r + m.get(keys.get(i));
			}            
        }
        if(r<k)
			System.out.println(k);
		else
			System.out.println(r);*/

