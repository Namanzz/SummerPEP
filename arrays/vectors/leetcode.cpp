/*
https://leetcode.com/problems/sort-colors/
// Dutch National Flag Algorithm
class Solution {
    public void sortColors(int[] nums) {
       int i=0;
       int j=0;
       int k=nums.length-1;
       while(j<=k){
            if(nums[j]==0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }
            else if(nums[j]==1){
                j++;
            }
            else{
                int temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;
                k--;
            }
       } 
    }
}

https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
    public int removeDuplicates(int[] nums) {
        int count=0;
        int j=-101;

        for(int i=0;i<nums.length;i++){
            if(j!=nums[i]){
                count++;
                j=nums[i];
            }
        }
        int k=0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
            }
        }

        return count;
    }
}

https://leetcode.com/problems/maximum-subarray/
class Solution {
    public int maxSubArray(int[] nums) {
        int cs=nums[0];
        int ms=nums[0];
        for(int i=1;i<nums.length;i++){
            cs=Math.max(nums[i],cs+nums[i]);
            ms=Math.max(cs,ms);
        }
        return ms;
    }
}

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit=0;
        int minPrice=prices[0];

        for(int i=0;i<prices.length;i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            else{
                int profit=prices[i]-minPrice;

                if(profit>maxProfit){
                    maxProfit=profit;
                }
            }
        }

        return maxProfit;
    }
}

https://leetcode.com/problems/koko-eating-bananas/
class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high=1000000000;
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }

    public boolean isPossible(int[] piles, int k, int h){
        int time=0;

        for(int i=0;i<piles.length;i++){
            time+=Math.ceil((double)piles[i]/k);
        }

        return time<=h;
    }
}
*/