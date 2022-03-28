package com;

public class SearchInRange {
    public static void main(String[] args) {
        int[] num = {20,19,18,16,17,15};
        int target = 15;
        System.out.println(linerSearch(num,target,1,3));
    }
    static int linerSearch(int[] arr,int target,int start,int end) {
        if (arr.length == 0) {
            return -1;
            //return Integer.MAX_VALUE;
        }
        for (int index = start; index < end; index++) {
            int element = arr[index];
            if (element == target) {
                return index;
                //return element;
            }
        }
        return -1;
        //return Integer.MAX_VALUE;
    }
}
