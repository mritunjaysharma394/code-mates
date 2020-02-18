import java.io.*;
import java.util.*;

public class X {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	
//		int[][] a= {{1,2,3},{4,5,6}};
		
		int t1=Integer.parseInt(br.readLine());
		while(t1-->0)
		{
			String[] s=br.readLine().split(" ");
			int m=Integer.parseInt(s[1]);
			int n=Integer.parseInt(s[0]);
			
		int[][] a=new int[n][m];
		
		int[] t=new int[n+m-1];
		
		X x1=new X();
		
		x1.count_paths(a, m, n, 0, 0, 0,t);
		
		System.out.println(x1.count);
		
		}
		
	}
	
	int count=0;
	
	public  void count_paths(int[][] a,int m,int n,int i,int j,int idx,int[] path)
	{
		path[idx]=a[i][j];
		int max=m+n-1;
		int c=0;
			
//		StringBuffer sb=new StringBuffer();
		if(i==n-1)
		{
			for(int k=j+1;k<m;k++)
			{
			path[idx++]=a[i][k];
			}
			int c1=idx-1;
			
					
//			while(c<max)
//			{
//				sb.append(path[c1--]);
//				c++;
//			}
			
//			System.out.println(sb);
			count++;
			return;
			
		}
		if(j==m-1)
		{
			for(int k=i+1;k<n;k++)
			{
			path[idx++]=a[k][j];
			}
			
			int c2=idx-1;
//			while(c<max)
//			{
//				sb.append(path[c2--]);
//				c++;
//			}
//			
//			System.out.println(sb);
			count++;
			return;
			
		}
		
//		count_paths
		count_paths(a, m, n, i+1, j, idx+1,path);
		count_paths(a, m, n, i, j+1, idx+1,path);
		
		
		
		
		
		
	}
	
	public static int cnt(int m,int n,int i,int j)
	{
	    if(i==n-1||j==m-1)
	    {
	        return 1;
	    }
	    return(cnt(m,n,i+1,j)+cnt(m,n,i,j+1));
	    
	    
	}
	
	

}
