package com.java;

import java.util.Arrays;
import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
//        int[] roll;         //declaration of array.
//        roll = new int[5];     // initialization of array.
//        System.out.println(roll[1]);

//        int[] a = {5,4,3,2,1};
//        System.out.println(a[1]);

        Scanner in = new Scanner(System.in);
//        int[] arr = new int[5];
//        arr[0] = 1;
//        arr[1] = 11;
//        arr[3] = 111;
//        arr[4] = 1111;
//        System.out.println(arr[3]);
//
//
//        for(int i=0;i < arr.length; i++ ){
//            arr[i] = in.nextInt();
//
//        }
//        for(int i=0;i < arr.length; i++ ){
//            System.out.print(arr[i] + " ");
//        }f

        String[] str = new String[4];
        for (int i = 0; i < str.length; i++) {
            str[i] = in.next();
        }
        System.out.print(Arrays.toString(str));
    }
}









