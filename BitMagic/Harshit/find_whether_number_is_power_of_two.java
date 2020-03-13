package bitwise;
import java.util.*;
import java.io.*;

public class find_whether_number_is_power_of_two {

	public static void main(String[] args)throws Exception {
		
//		int x=8;
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
//			int x=Integer.parseInt(br.readLine());
			double x=Double.parseDouble(br.readLine());
			if(x==0)
			{
			    		System.out.println("NO");
			}
			
			else{
	double a=Math.log(x)/Math.log(2);
	a=Math.floor(a);
	
	double y=Math.pow(2,a);
	
	double z=Double.valueOf(x);
	if(z==y)
	{
		System.out.println("YES");
	}
	else {
		System.out.println("NO");
	}

	}
		}
	}
}
