package com.company.String;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Check_If_String_Is_Rotated_by_2_places {

    public static void main(String[] args)throws Exception
    {
//        String s1="geeksforgeeks";/
//        String s2="geeksgeeksfor";

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());

        while(t-->0) {

            String s1=br.readLine();
            String s2=br.readLine();

            boolean x1 = s1.substring(2, s1.length()).equals(s2.substring(0, s2.length() - 2));
            boolean x2=s2.substring(2, s2.length()).equals(s1.substring(0, s1.length() - 2));
            if (x1 || x2) {
                System.out.println("1");
            } else {
                System.out.println("0");
            }
        }
    }

}
