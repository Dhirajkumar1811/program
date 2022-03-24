package com.java;

import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
//        Scanner in = new Scanner(System.in);
//        System.out.print("Enter any 3 digit no: ");
//        int n = in.nextInt();
//        System.out.println(isArmstong(n));
        for(int i= 100;i < 1000; i++) {
            if(isArmstong(i)){
                System.out.println(i);
            }
        }
    }
    //print all the 3 digit armstrong no.s
    static boolean isArmstong(int n){
        int original = n;
        int sum = 0;

        while(n > 0){
            int rem = n % 10;
            n = n / 10;
            sum = sum + rem*rem*rem;
        }
        if (sum == original) {
            return true;
        }
        return false;
    }

}
