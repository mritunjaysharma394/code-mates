package bitwise;

import java.io.BufferedReader;
import java.io.InputStreamReader;


public class Find_missing_number {

	public static void main(String[] args) throws Exception {
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
		
		int res=a[0]^a[1];
		System.out.println(res);
		for(i=2;i<n;i++)
		{
			res=~(res^a[i]);	
			System.out.println(res);
		}
		
		System.out.println(res);
		// TODO Auto-generated method stub

	}
		}

}
