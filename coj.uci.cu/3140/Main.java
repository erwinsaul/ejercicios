import java.util.*;
import java.io.*;
public class Main{
	
		static int partition(int arr[], int left, int right)
		{
			  int i = left, j = right;
			  int tmp;
			  int pivot = arr[(left + right) / 2];
			  while (i <= j) {
					while (arr[i] < pivot)
						  i++;
					while (arr[j] > pivot)
						  j--;
					if (i <= j) {
						  tmp = arr[i];
						  arr[i] = arr[j];
						  arr[j] = tmp;
						  i++;
						  j--;
					}
			  };			 

			  return i;
		}

 		static void quickSort(int arr[], int left, int right) {
			  int index = partition(arr, left, right);
			  if (left < index - 1)
					quickSort(arr, left, index - 1);
			  if (index < right)
					quickSort(arr, index, right);
		}
	
	public static void main (String[] args)
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int[] v = new int[t];
		for(int k=0;k<t;k++)
		{
			v[k] = in.nextInt();
		}
		quickSort(v, 0, t-1);
		for(int k=0;k<t;k++)
		{
			System.out.println(v[k]);
		}
	}
}

