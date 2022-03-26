package com.java;

import java.util.Arrays;

public class swapReverse {
    public static void main(String[] args) {

    int[] arr = {1,18,7,28,3,77};
    swap1(arr,1,3);
    revers(arr);
    System.out.println(Arrays.toString(arr));

}
 static void revers(int[] arr){
        int start = 0;
        int end = arr.length-1;

        while (start < end){
            swap1(arr,start,end);
            start++;
            end--;
        }
 }
    static void swap1(int[] arr,int index1,int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}

