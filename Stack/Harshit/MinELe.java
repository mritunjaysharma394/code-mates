package com.company.Array_GFG.Stack;

import java.util.Stack;

public class MinELe {

    public static void main(String[] args)
    {

        MyStack m=new MyStack();
        m.push(2);
        m.push(3);
        m.push(-5);
//        m.pop();
        System.out.println(m.pop());
//        m.push(1);
//        m.pop();
        System.out.println(m.pop());

    }

}

class MyStack
{
    int min;

    Stack<Integer> st=new Stack<>();

    void push(int x)
    {
        if(st.isEmpty()){
            min=x;
        }
        else if(x<min)
        {
            min=x;
            x=2*x-min;

        }
        st.push(x);
    }

    int pop()
    {
        if(st.isEmpty())
        {
            return -1;
        }

        int y=st.pop();
        if(y<=min)
        {
            min=2*min-y;
        }
        return y;
    }

    int getMin()
    {
        if(st.isEmpty())
        {
            return -1;
        }

        return min;
    }
}
