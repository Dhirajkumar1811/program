package com.java;

public class max {
    public static void main(String[] args) {
        int[] arr = {1,18,07,28,03};
        System.out.println(max(arr));

    }
    static int max(int[] arr){
        int maxVal = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if(arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
}