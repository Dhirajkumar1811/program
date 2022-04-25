package com.java;

public class leet34 {
    public static void main(String[] args) {



    }
    public int[] SearchRange(int[] nums, int target) {
        int[] ans = {-1, -1};
        ans[0] = Search(nums, target, true);
        
         if(ans[0] != -1){
           ans[1] = Search(nums, target, false);
         }
       // ans[1]= Search(nums, target, false);

//          ans[0] = start;
//          ans[1] = end;
        return ans;
    }
    // this function return index of target
     int Search(int[] nums, int target,boolean findStartIndex) {

        int ans = -1;  //potential ans

        int start = 0;
        int end = nums.length - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                ans = mid;
                if(findStartIndex){
                    end = mid - 1;
                }else {
                    start = mid + 1;
                }
            }
        }
        return ans;
    }
}
