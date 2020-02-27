package hashing;
import java.io.*;
import java.util.*;

public class Largest_Sub_Array_With_Sum_0 {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub

//		int[] a= {15 ,-2 ,2 ,-8, 1 ,7 ,10, 23};
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
			int n=Integer.parseInt(br.readLine());
			String[] s=br.readLine().split(" ");
			int[] a=new int[n];
			int i=0;
			for(String x:s)
			{
				a[i]=Integer.parseInt(x);
				i++;
			}
			System.out.println(method(a));
			
		}
	
//		int n=a.length;
		
		
//		System.out.println(method(a));
	
	}
	public static int method(int[] a)
	{
		int n=a.length;
//	for(int k=n;k>=1;k--)
//	{
//		int sum=0;
//		for(int i=0;i<k;i++)
//		{
//			sum+=a[i];
//		}
//		if(sum==0)
//		{
//			return k;
//		}
//		
//		for(int i=k;i<n;i++)
//		{
//			sum-=a[i-k];
//			sum+=a[k];
//			if(sum==0)
//			{
//				return k;
//			}
//			
//			
//		}
//		
//		
//		
//		
//	}
//	return 0;
		
		int max=0;
		
		HashMap<Integer,Integer> hm=new HashMap<>();
		int sum=0;
		hm.put(0, -1);
		
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(hm.containsKey(sum))
			{
				int y=i-hm.get(sum);
				if(max<y)
				{
					max=y;
				}
			}
			else {
				hm.put(sum, i);
			}
		}
		if(sum==0)
		{
		 max=n;   
		}
		
		
		return max;
		
		
		
		
		
	}
	

}
