package lc;
import java.util.*;
import java.io.*;

public class Comb_Sub_part {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
//		int[] a= {8,1,8,6,8};
			
		int n=Integer.parseInt(br.readLine());
		int[] a=new int[n];
		int i=0;
		String[] s1=br.readLine().split(" ");
		int sum=Integer.parseInt(br.readLine());
		for(String x:s1)
		{
			a[i]=Integer.parseInt(x);
			i++;
		}

		Arrays.sort(a);

		Comb_Sub_part c1=new Comb_Sub_part();
		c1.hm=new HashMap<>();
		c1.res_sb=new StringBuffer();
		c1.method(a,0,new ArrayList<Integer>(),0,sum);

		if(c1.flag==false)
		{
			System.out.println("Empty");
		}
		else {
		
		System.out.println(c1.res_sb);
		}
		}
	}
	StringBuffer res_sb=null;
	
	HashMap<String,ArrayList<Integer>> hm;
	boolean flag=false;
	
	public void method(int[] a,int index,ArrayList<Integer> al,int sum,int f)
	{
		if(sum==f)
		{
			StringBuffer sb=new StringBuffer();
			
			for(int i=0;i<al.size();i++)
			{
				if(i==0  && i==al.size()-1)
				{
					sb.append("("+al.get(i));
				}
				else if(i==0)
				{
					sb.append("("+al.get(i)+" ");
				}
				else if(i==al.size()-1) {
				sb.append(al.get(i));
			}
				else {
					sb.append(al.get(i)+" ");	
				}
				
			}
			sb.append(")");
			String s1=sb.toString();
//			if(res_sb)
			
			if(!this.hm.containsKey(s1))
			{
				if(res_sb==null)
				{
					res_sb=new StringBuffer();
				}
				flag=true;
				
				this.hm.put(s1,al);
				res_sb.append(s1);
			}
			

		}
		if(index>=a.length)
		{
			return;
		}
		
		for(int i=index;i<a.length;i++)
		{
			int s2=sum;
			
			int remain=f-s2;
			
			if(a[i]<=remain)
			{
				s2+=a[i];
				al.add(a[i]);
				method(a,i+1,al,s2,f);
				al.remove(new Integer(a[i]));	
			}
			
			
		}
		
		
		
		
	}
	
	
}
