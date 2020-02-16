package com.company.String;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.HashSet;

public class Remove_duplicates {


    public static void main(String[] args)throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
//        String s="geeks for geeks";
//        HashSet<Character> hs=new HashSet<>();
        while(t-->0) {

            String s=br.readLine();

            int[] a=new int[256];
            StringBuffer sb=new StringBuffer();
            for(int i=0;i<s.length();i++)
            {
                char x=s.charAt(i);
                if(a[(int)x]==0)
                {
                    sb.append(x);
                    a[(int)x]=1;
                }
            }
            System.out.println(sb.toString());


        }

    }


//    Another Approach but Space Complecity is O(n)
//    HashMap<Character, Boolean> hm = new HashMap<>();
//    StringBuffer sb = new StringBuffer();
//
//            for (int i = 0; i < s.length(); i++) {
//        char c1 = s.charAt(i);
//        if (!hm.containsKey(c1)) {
//            hm.put(c1, true);
//            sb.append(c1);
//        }
//
////            hs.add(s.charAt(i));
//    }
////        for(char x:hm.keySet())
////        {
////            System.out.print(x);
////        }
//            System.out.println(sb.toString());
}
