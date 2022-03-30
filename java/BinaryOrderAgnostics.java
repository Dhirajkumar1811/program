package com.java;

public class BinaryOrderAgnostics {
    public static void main(String[] args) {
      //  int[] arr = {-28,-18,0,5,9,7,12,18,28,49,70};
        int[] arr = {85,75,45,33,21,18,7,5,2,1,0,-2,-18};
        int target = 18;
        int ans = OrderAgnostic(arr,target);
        System.out.println(ans);

    }
    static int OrderAgnostic(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;


            boolean isAsc = arr[start] < arr[end];


        while(start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target){
                return mid;
            }

            if(isAsc) {
                if (target < arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }else {
                if (target > arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
                }
            }
        return -1;
        }
    }


