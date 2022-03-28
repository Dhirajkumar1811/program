package com.java;

public class findMax {
    public static void main(String[] args) {
        int[] arr ={1,5,8,7,9,-10,99};
        System.out.println(min(arr));
    }
    static int min(int[] arr){
        int ans = arr[0];
        for (int i = 1; i < arr.length ; i++) {
            if(arr[i] > ans){
                ans = arr[i];
            }
        }
        return ans;
    }
}
