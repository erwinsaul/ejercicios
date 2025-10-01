/*  Problem: List of Conquest
 *  Code: 10420
 *  Site: uva.onlinejudge.org
 *  Type: Ad-Hoc / String / map
 *  Status: Accepted
 */

import java.util.*;

public class Main
{
	
	public static void main (String args[])
	{
	  Scanner in=new Scanner(System.in);
	  int t=in.nextInt();
	  Map<String,Integer> hm = new HashMap<String,Integer>();
	  for(int k=0;k<(t+1);k++)
	  {
		String s=in.nextLine();
		if(s.length()>0)
		{
		 String[] v=s.split(" ");
		 if(hm.containsKey(v[0]))
		 {
		 	int a=hm.get(v[0]);
		 	a++;
		 	hm.put(v[0],a);
		 }
		 else
		   hm.put(v[0],1);
	   }
	  }	
	  
	  List sortedKeys=new ArrayList(hm.keySet());
      Collections.sort(sortedKeys);
      Iterator iter = sortedKeys.iterator();
      while (iter.hasNext())
      { 
		 String key=iter.next().toString();
        System.out.println(key+" "+hm.get(key));
        
      }
	 }
	 
	
}

