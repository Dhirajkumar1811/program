package com;

public class MaxWealth {
    public static void main(String[] args) {

    }
    public int maxWealth(int[][] accounts) {
        // person = row
        // accounts = col
        int ans = Integer.MIN_VALUE;
        for (int[] ints : accounts) {
            // when you start a new col, Take a new sum for that row
            int sum = 0;
            for (int anInt : ints) {
                sum += anInt;
            }
            // now we have of accounts of person
            // check with overall ans
            if(sum > ans) {
                ans = sum;
            }
        }
        return ans;
    }
}
