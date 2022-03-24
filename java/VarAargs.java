package com.java;

import java.util.Arrays;

public class VarAargs {
    public static void main(String[] args) {
        fun(1,5,5,6,8,4,6,8,4,6,4,5,8,4);
        fun();
        Multiple(18,28,"Dhiraj","Bruce","Tony");
    }
    static void Multiple(int a,int b, String...v){
        System.out.println(Arrays.toString(v));
    }
    static void fun(int ...v){
        System.out.println(Arrays.toString(v));
    }
}