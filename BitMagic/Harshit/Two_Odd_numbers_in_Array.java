package bitwise;

public class Two_Odd_numbers_in_Array {

	public static void main(String[] args) {
	
		int[] a= {1,2,3,3,2,6};
		
		int xor=0,r1=0,r2=0;
		
		for(int i=0;i<a.length;i++)
		{
			xor=xor^a[i];
		}
		
		int y=xor&(xor-1);
		
		for(int i=0;i<a.length;i++)
		{
			int val=a[i];
			if((val&y)!=0)
			{
				r1=r1^val;
			}
			else {
				
				r2=r2^val;
				
			}
			
			
		}
		System.out.println(r1+" "+r2);
		
		
		

	}

}
