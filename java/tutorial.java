package com.company;

import java.util.Scanner;

public class tutorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter 3 no.s");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
//        if(a>b && a>c ){
//            System.out.println("A is greatest no.");
//        }
//        else if (b>a && b>c) {
//            System.out.println("B is greatest");
//        }
//        else{
//            System.out.println("c is greater");
//        }
        int max = a;
        if(b > max){
            max = b;
        }
        if(c > max){
            max = c;
        }
        System.out.println(max);





    }
}
