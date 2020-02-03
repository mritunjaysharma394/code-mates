package com.company.Array_GFG;

import java.util.HashMap;

public class Anagrams {

    public static void main(String[] args)
    {

        String s1="harshit";
        String s2="harshit";

        System.out.println(is_anagram(s1,s2));

    }
    public static boolean is_anagram(String s1,String s2)
    {

        HashMap<Character,Integer> hm=new HashMap<>();


        for(int i=0;i<s1.length();i++)
        {

            char c=s1.charAt(i);
            if(hm.containsKey(c))
            {
                hm.replace(c,hm.get(c)+1);
            }
            else{
                hm.put(c,1);
            }
        }

        for(int i=0;i<s2.length();i++)
        {
            char c=s2.charAt(i);
            if(hm.containsKey(c))
            {
                hm.replace(c,hm.get(c)-1);
            }
            else{
                return false;
            }

        }

        for(char c:hm.keySet())
        {

            if(hm.get(c)!=0)
            {
                return false;
            }

        }
        return true;







    }



}
