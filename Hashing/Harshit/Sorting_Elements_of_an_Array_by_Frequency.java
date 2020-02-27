package hashing;
import java.util.*;
import java.io.*;

public class Sorting_Elements_of_an_Array_by_Frequency {

	public static void main(String[] args)throws Exception {
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
		
			int n=Integer.parseInt(br.readLine());
			HashMap<Integer,Integer> hm=new HashMap<>();
			String[] s=br.readLine().split(" ");
			for(String x:s)
			{
				int v=Integer.parseInt(x);
				if(hm.containsKey(v))
				{
					hm.replace(v, hm.get(v)+1);
				}
				else {
					hm.put(v, 1);
				}
				
			}
		
		ArrayList<MyMap> al=new ArrayList<>();
		
//		TreeSet<Integer> ts=new TreeSet<>();
		
//		for(int x:hm.keySet())
//		{
//			ts.add(x);
//		}
		for(int x:hm.keySet())
		{
			int v=hm.get(x);
			
			al.add(new MyMap(x,v));
		}
		Collections.sort(al,new Rol());
		
		StringBuffer sb=new StringBuffer();
		for(int i=al.size()-1;i>=0;i--)
		{
			for(int j=0;j<al.get(i).v;j++)
			{
			sb.append(al.get(i).k+" ");
			}
		}
		
		System.out.println(sb);
		// TODO Auto-generated method stub
		
		}

		
	}

	
}
class MyMap{
	int k,v;
	
	public MyMap(int k,int v)
	{
		this.k=k;
		this.v=v;
	}

	@Override
	public String toString() {
		return "MyMap [k=" + k + ", v=" + v + "]";
	}
	
	
	
}

// Implemented Comparator


class Rol implements  Comparator<MyMap>
{
	public int compare(MyMap m1,MyMap m2) 
    {
		if(m1.v-m2.v==0)
		{
			return m2.k-m1.k;
		}
		
		return m1.v-m2.v;
		
//		if()
//        return a.name.compareTo(b.name); 
    } 
}
