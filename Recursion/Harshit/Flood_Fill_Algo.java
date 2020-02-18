package lc;
import java.util.*;
import java.io.*;

public class Flood_Fill_Algo {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		
		while(t-->0)
		{
		String[] s1=br.readLine().split(" ");
		String[] s2=br.readLine().split(" ");
		String[] s3=br.readLine().split(" ");
		int m=Integer.parseInt(s1[1]);
		int n=Integer.parseInt(s1[0]);
		
		int l=0;
		
		int[][] a= new int[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				a[i][j]=Integer.parseInt(s2[l]);
				l++;
//				System.out.print(a[i][j]+" ");
			}
		}
		
//		int i1=
		int i1=Integer.parseInt(s3[0]);
		int j1=Integer.parseInt(s3[1]);
		int k=Integer.parseInt(s3[2]);
		
		
		flood(a,m,n,i1,j1,a[i1][j1],k);
		
		StringBuffer sb=new StringBuffer();
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				sb.append(a[i][j]+" ");
			}
		}
		System.out.println(sb.toString());
		}
		
//		System.out.append("hh");
		
	}
	
	public static void flood(int[][] a,int m,int n,int i,int j,int val,int v2)
	{
		if(i<0 || i >=n || j<0 || j>=m)
		{
			return;
		}
		if(a[i][j]!=val)
		{
			return;
		}
		
		a[i][j]=v2;
		flood(a,m,n,i+1,j,val,v2);
		flood(a,m,n,i-1,j,val,v2);
		flood(a,m,n,i,j+1,val,v2);
		flood(a,m,n,i,j-1,val,v2);
		
	}

}
