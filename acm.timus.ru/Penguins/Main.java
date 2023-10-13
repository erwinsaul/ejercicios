/* Problem:Penguins
 * Site: acm.timus.ru
 * Code: 1585
 *
 */

import java.util.*;
import java.io.*;

public class Main
{
   private static Map sortByComparator(Map unsortMap) {
 
        List list = new LinkedList(unsortMap.entrySet());
 
        //sort list based on comparator
        Collections.sort(list, new Comparator() {
             public int compare(Object o1, Object o2) {
	           return ((Comparable) ((Map.Entry) (o1)).getValue())
	           .compareTo(((Map.Entry) (o2)).getValue());
             }
	});
 
        //put sorted list into map again
	Map sortedMap = new LinkedHashMap();
	for (Iterator it = list.iterator(); it.hasNext();) {
	     Map.Entry entry = (Map.Entry)it.next();
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
		  String b=in.next();
	     

        // Initialize frequency table from command line
           
            Integer freq = m.get(a);
            m.put(a, (freq == null) ? 1 : freq + 1);
      }	
	   
	   Map<String,String> sortedMap =  sortByComparator(m);
	   Iterator it1 = sortedMap.keySet().iterator();
       String aux="";
       while (it1.hasNext())
       {
         aux=(String)it1.next();
       }
       
       System.out.println(aux+" "+"Penguin");
       	
	}
}
