package recursion;

public class Rod_Cutting {

	public static void main(String[] args) {
		
		System.out.println(call(23,12,9,11,0));
		
		
		// TODO Auto-generated method stub

	}
	
	static int call(int n,int a,int b,int c,int count)
	{
		if(n==0)
		{
			return count;
		}
		if(n<0)
		{
			return -1;
		}
		int x=0,y=0,z=0;
		
		x=call(n-a,a,b,c,count+1);
		
		y=call(n-b,a,b,c,count+1);
		
		z=call(n-c,a,b,c,count+1);

		int res=0;
				
		res=Math.max(x, Math.max(y, z));
		
		return res;
	}

}
