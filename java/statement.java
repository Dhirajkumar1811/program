package com.java;

import java.util.Scanner;

public class statement {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String fruit = in.next();
        // switch statement
        switch (fruit) {
            case "Mango":
                System.out.println("king of fruits");
                break;
            case "Apple":
                System.out.println("A sweet red fruit");
                break;
            case "oranges":
                System.out.println("Round fruit");
                break;
            case "Grapes":
                System.out.println("Small fruits");
                break;
            default:
                System.out.println("INVALID FRUIT NAME");
        }
    }
}
