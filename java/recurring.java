package com.company;

public class recurring {
    public static void main(String[] args) {
        int n = 253434348;
        int count = 0;
        while(n > 0) {
            int rem = n % 10;
            if (rem == 3) {
                count++;
            }
            n = n / 10;
        }
        System.out.println(count);
    }
}
