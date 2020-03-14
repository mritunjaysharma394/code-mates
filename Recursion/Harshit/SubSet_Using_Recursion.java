package recursion;

public class SubSet_Using_Recursion {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		call("ab",0,"");

	}
	
	
	public static void call(String str,int i,String ch)
	{
		if(i==str.length())
		{
			System.out.print(ch+" ");
			
			return;
		}
		
//		System.out.println(ch.toString());
		
//		StringBuffer s=ch;
		
		call(str,i+1,ch);
		
//		s.append(str.charAt(i));

//		System.out.println(ch.toString());
		call(str,i+1,ch+str.charAt(i));
		
		
	}
	

}
