package com.company.Array_GFG.Stack;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class Parenthesis_Checker {

    public static void main(String[] args)throws Exception
    {
//        String s="([]";

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());

        while(t-->0)
        {
            String s1=br.readLine();
            if(check(s1))
            {
                System.out.println("balanced");
            }
            else{
                System.out.println("not balanced");
            }
        }

//        System.out.println(check(s));


    }
    static boolean check_open_parenthesis(char c)
    {
        if(c=='('||c=='{'||c=='[')
        {
            return true;
        }
        else{
            return false;
        }

    }

    public static boolean is_match(char c1,char c2)
    {
        if(c1=='('&&c2==')' || c1=='{'&&c2=='}' || c1=='[' &&c2==']')
        {
            return true;
        }
        return false;
    }




    public static boolean check(String s)
    {
        Stack<Character> st=new Stack<>() ;
        for(int i=0;i<s.length();i++)
        {
            char c1=s.charAt(i);

            boolean is_open = check_open_parenthesis(c1);

            if(st.isEmpty())
            {
                if(is_open) {
                    st.push(c1);
                }
                else{
                    return false;
                }
//               } st.push(x)
            }
            else{
                if(is_open)
                {
                    st.push(c1);
                }
                else{

                    if(st.isEmpty())
                    {
                        return false;
                    }
                    char c2=st.pop();

                    if(!is_match(c2,c1))
                    {
                        return false;
                    }


                }


            }






        }
        if(!st.isEmpty())
        {
            return false;
        }
        return true;





    }


}
