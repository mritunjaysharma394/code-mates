package bitwise;

import java.util.ArrayList;

public class powerset_bitwise {

	public static void main(String[] args) {
	
		String s="abcd";
		int n=s.length();
		ArrayList<String> al=new ArrayList<>();
		
		for(int i=0;i<=Math.pow(2,n)-1;i++)
		{
			int c=i;
			StringBuffer sb=new StringBuffer();
			for(int j=0;j<n;j++)
			{
				if(c%2!=0)
				{
					sb.append(s.charAt(j));
				}
				c=c>>1;
			}
			al.add(sb.toString());
			
		}
		
		System.out.println(al);
		
		
		
		

	}

}
