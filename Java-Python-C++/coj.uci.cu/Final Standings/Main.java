/*   Problem: Final Standings
 *   Code: 1285
 *   Site: coj.uci.cu / acm.timus.ru
 *   Status: Pending
 */

import java.io.*;
import java.util.*;



public class Main
{
private static Map sortByComparator(Map unsortMap) {
 
        List list = new LinkedList(unsortMap.entrySet());
 
        //sort list based on comparator
        Collections.sort(list, new Comparator() {
             public int compare(Object o1, Object o2)
              {
	           return ((Comparable) ((Map.Entry) (o1)).getValue())
	           .compareTo(((Map.Entry) (o2)).getValue());
             }
	});
 
        //put sorted list into map again
	Map sortedMap = new LinkedHashMap();
	for (ListIterator iterator = list.listIterator(list.size()); iterator.hasPrevious();) {
	     Map.Entry entry = (Map.Entry)iterator.previous();
	     sortedMap.put(entry.getKey(), entry.getValue());
	}
	return sortedMap;
   }	
	public static void main (String args[])
	{		
	  Scanner in=new Scanner(System.in);
	  Map<String, Integer> m = new HashMap<String, Integer>();
	  int t=in.nextInt();
	  for(int k=0;k<t;k++)
	  {
		  String a=in.next();
		  int b=in.nextInt();
	      m.put(a, b);
      }
      	   
	   Map<String,String> sortedMap =  sortByComparator(m);
	   Iterator it1 = sortedMap.entrySet().iterator();
      
      
       while (it1.hasNext())
       {
        Map.Entry e = (Map.Entry)it1.next();
	    System.out.println(e.getKey()+" "+e.getValue());
	    
       }
       
      
		  
	  
	}
}
