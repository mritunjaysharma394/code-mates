package bitwise;
import java.util.*;
import java.io.*;

public class Odd_Occuring_Number {

	public static void main(String[] args)throws Exception {
		
//		int[] a= {8,9,9,10,10,10,8};
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
			
		int i=0;
		int n=Integer.parseInt(br.readLine());
		String[] s=br.readLine().split(" ");
		int[] a=new int[n];
		while(i<s.length)
		{
			a[i]=Integer.parseInt(s[i]);
			i++;
		}
		
		if(n==1)
		{
			System.out.println(a[0]);
		}
		else {
		int res=a[0]^a[1];
		
		
		
		for(i=2;i<a.length;i++)
		{
			res=res^a[i];
//			res=a[i]^a[i+1];
		}
		
		System.out.println(res);
		}
		}
		// TODO Auto-generated method stub

	}

}
