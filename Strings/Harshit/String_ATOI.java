package String;


//{ Driver Code Starts
import java.util.Scanner;

public class String_ATOI
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String str = sc.nextLine();
			
			GfG g = new GfG();
			System.out.println(g.atoi(str));
		t--;
		}
	}
}// } Driver Code Ends
/*You are required to complete this method */
class GfG
{
 int atoi(String str)
 {
     try{
         
         int x=Integer.parseInt(str);
         return x;
     }
     catch(Exception e)
     {
         return -1;
     }
     
     
     
	// Your code here
 }
}
