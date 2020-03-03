package greedy;
import java.util.*;
import java.io.*;

public class N_meeting_ {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub

//		HashMap<Integer,Integer> hm=new HashMap<>();
		
//		hm.put(2,3);
		
//		int[] s= {1,3,0,5,8,5};
//		int[] c= {2,4,6,7,9,9};
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
		int n=Integer.parseInt(br.readLine());
		String[] s1=br.readLine().split(" ");
		String[] s2=br.readLine().split(" ");
		
		int[] s=new int[n];
		int[] c=new int[n];
			
		int i=0;
		for(String x:s1)
		{
			s[i]=Integer.parseInt(x);
			i++;
		}
		i=0;
		for(String x:s2)
		{
			c[i]=Integer.parseInt(x);
			i++;
		}	
		ArrayList<Integer> al=new ArrayList<>();
		for(int x:c)
		{
			al.add(x);
		}
//		ArrayList<Integer> res=new ArrayList<>();
		StringBuffer sb=new StringBuffer();
		Arrays.sort(c);
		
		int l_time=0;
		
		for(int x:c)
		{
			int in=al.indexOf(x);
			int y=s[in];
			if(y>=l_time) {
				l_time=x;
				sb.append((in+1)+" ");
			}
		}
		
		System.out.println(sb);
		
		
		
		}
		
		
		
//		hm.in
 	}

}
