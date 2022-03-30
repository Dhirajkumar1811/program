package com.java;

public class Binary {
    public static void main(String[] args) {
        int[] arr = {-28,-18,0,5,9,7,12,18,28,49,70};
        int target = 18;
        int ans = BinarySearch(arr,target);
        System.out.println(ans);
    }
    //return the index
    static int BinarySearch(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
         while(start <= end) {
             int mid = start + (end - start) / 2;

             if (target < arr[mid]) {
                 end = mid - 1;
             }
             else if(target > arr[mid] ) {
                 start = mid + 1;
             }
             else {
                 return mid;
             }
         }
         return -1;
    }

}
