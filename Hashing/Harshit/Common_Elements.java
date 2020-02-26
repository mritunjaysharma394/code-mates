package hashing;
import java.io.*;
import java.util.*;


public class Common_Elements {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
//			int n=Integer.parseInt(br.readLine());
			String s=br.readLine();
			String[] s1=br.readLine().split(" ");
			String[] s2=br.readLine().split(" ");
			String[] s3=br.readLine().split(" ");
			
			ArrayList<TreeSet<Integer>> tree=new ArrayList<>();
			
			for(int i=0;i<3;i++)
			{
				
				
				TreeSet<Integer> t1=new TreeSet<Integer>();
				int n=0;
				String[] x;
				if(i==0)
				{
					n=s1.length;
					x=s1;
				}
				else if(i==1)
				{
					n=s2.length;
					x=s2;
				}
				else {
					n=s3.length;
					x=s3;
				}
				
				for(int j=0;j<n;j++)
				{
					t1.add(Integer.parseInt(x[j]));
				}
				tree.add(t1);
				
//				System.out.println(t1);
			}
			
			HashMap<Integer,Integer> hm=new HashMap<>();
			
			StringBuffer sb=new StringBuffer();
			
			for(int i=0;i<3;i++)
			{
				for(int x:tree.get(i))
				{
//					int y
					
					if(hm.containsKey(x))
					{
						int y=hm.get(x)+1;
						if(y==3)
						{
							sb.append(x+" ");
						}
						hm.replace(x, y);
					}
					else {
						hm.put(x,1);
					}
					
				}
				
			}
			
			if(sb.length()==0)
			{
				System.out.println("-1");
			}
			else {
			
			System.out.println(sb);
			}
			
			
			
		}
		
		
		
		
	}

}
