package com.java;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListExample {
    public    static void main(String[] args) {
        Scanner in = new Scanner(System.in);
       ArrayList<Integer> list = new ArrayList<>(10);
//        list.add(10);
//        list.add(10);
//        list.add(10);
//        list.add(10);
//        list.add(11);
//        list.add(10);
//        list.add(10);
//        list.add(10);
//        list.add(10);

//        System.out.println(list.contains(11));
//        list.set(0,18);
//        System.out.println(list);

        for (int i = 0; i < 5; i++) {
            list.add(in.nextInt());
        }
        // get item any index
        for (int i = 0; i < 5; i++) {
            System.out.println(list.get(i));
        }
        System.out.println(list);
    }
}
