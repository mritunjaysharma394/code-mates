package bitwise;

public class Example {
	
	
	public static void main(String[] args)
	{
		int x=1;
	
		int cnt=1;
		
		int k=1;
		

		
		
		int y=2;
		
		y=y<<31-k;
		
		
		x=Math.abs(x<<31);
//		int y=x;
		
		int z=x&y;
		if(z==x)
		{
			System.out.println(true);
		}



	}
	
	
//	 while(t-->0)
//	    {
//	    int x=Integer.parseInt(br.readLine());
//	    int k=Integer.parseInt(br.readLine());
//	        
//	        x=x>>k;
//
////		System.out.println(x);
//		
//		if(x%2!=0)
//		{
//			System.out.println("Yes");
//		}
//		
//		else {
//			System.out.println("No");
//		}
//	        
//	    }
//	   
	

}
