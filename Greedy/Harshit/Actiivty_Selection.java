package greedy;
import java.util.*;
import java.io.*;


import java.util.Comparator;

public class Activity_Selection {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
	
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
			int n=Integer.parseInt(br.readLine());
			String[] s1=br.readLine().split(" ");
			String[] s2=br.readLine().split(" ");
		
			ArrayList<MyPair> al=new ArrayList<>();
			
			for(int i=0;i<n;i++)
			{
				int x=Integer.parseInt(s1[i]);
				int y=Integer.parseInt(s2[i]);
				al.add(new MyPair(x,y));
			}
			
		
//		al.add(new MyPair(1,2));
//		al.add(new MyPair(3,4));
//		al.add(new MyPair(2,6));
//		al.add(new MyPair(5,7));
//		al.add(new MyPair(8,9));
//		al.add(new MyPair(5,9));
		
		Collections.sort(al,new Rol());
		
		int last=0;
		int count=0;
		for(MyPair obj:al)
		{
			if(obj.x>=last)
			{
				count++;
				last=obj.y;
			}
			
			
		}
		
		
		System.out.println(count);
		
		}
	}
	
	

}

class MyPair{
	
	int x,y;
	
	public MyPair(int x,int y)
	{
		this.x=x;
		this.y=y;
	}

	@Override
	public String toString() {
		return "MyPair [x=" + x + ", y=" + y + "]";
	}
	
}

class Rol implements Comparator<MyPair>
{

	@Override
	public int compare(MyPair m1, MyPair m2) {
		
		return m1.y-m2.y;
		
		// TODO Auto-generated method stub
//		return 0;
	}
	
}
