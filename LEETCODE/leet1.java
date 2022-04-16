import java.util.Arrays;

public class leet1 {
    public static void main(String[] args) {
        int[] arr = {3,2,4};
        int target = 6;
        Solution obj = new Solution();
        int[] ans =  Solution.twoSum(arr,target);
       System.out.println(Arrays.toString(ans));
    }
    
}
class Solution {
    public static int[] twoSum(int[] nums, int target) {
        int res[]={-1,-1};
        for(int i=0; i<nums.length; i++){
            for(int j=0; j<nums.length; j++){
                if(i != j && nums[i] + nums[j] == target){
                    res[0]=i;
                    res[1]=j;
                    return res; 
                }
            }
        }
       return res;
    }
}