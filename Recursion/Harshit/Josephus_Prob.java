package lc;

public class Josephus_Prob {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.print(joseph(3,2));
		
	}
	
	public static int joseph(int n,int k)
	{
		if(n==1)
		{
			return 1;
		}
		int y=(joseph(n-1,k)+k-1)%n+1;
		return y;
	}

}
