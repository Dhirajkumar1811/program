package com.java;

public class LinearSearch {
    public static void main(String[] args) {
        int[] num = {45,787,56,11,18,28,14,-78,8};
        int target = 18;
        int ans = linerSearch(num,target);
        System.out.println(ans);


    }
    //search the array : return the index if item found otherwise if item not found return -1
    static int linerSearch(int[] arr,int target){
        if(arr.length == 0){
            return -1;
        }
        for (int index = 0; index < arr.length; index++) {
            int element = arr[index];
            if(element == target){
                return index;
                //return element;
            }
        }
        return -1;
    }


}
