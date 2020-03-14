package recursion;

public class IsPalindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		String s="abcd".substring(1,3);
		
		String s="malayalam";
//		System.out.println(s.substring(1,3));
		
		System.out.println(ispal(s,0,s.length()-1));
	}

	static boolean ispal(String str,int s,int e)
	{
		if(e<=s)
		{
			return true;
		}
		if(str.charAt(s)==str.charAt(e))
		{
		return ispal(str,s+1,e-1);			
		}
		return false;
		
		
		
//		return false;
		
	}
	
}
