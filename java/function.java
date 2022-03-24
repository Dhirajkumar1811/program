package com.java;

import java.util.Scanner;

public class function {
    public static void main(String[] args) {
        //System.out.println("The sum is : "+ function());
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the 1st no: ");
        int A = sc.nextInt();
        System.out.print("Enter the 2st no: ");
        int B = sc.nextInt();
        System.out.println("The sum is : "+ function1(A,B));
       // System.out.println("The sum is : "+ function1(20,30));
    }

    static int function1(int a , int b){
        return a + b;
    }

    static int function() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter 1st number: ");
        int num1 = in.nextInt();
        System.out.print("Enter 1st number: ");
        int num2 = in.nextInt();
        return num1 + num2;
    }
}
