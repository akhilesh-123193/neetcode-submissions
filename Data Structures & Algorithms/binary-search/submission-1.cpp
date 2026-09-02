class Solution {
public:
    int search(vector<int>& nums, int target) {

        long long lo = 0;
        long long hi = nums.size()-1;

        while(lo<=hi){
            long long mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                hi=mid-1;
            }
            else if(target>nums[mid]){
                lo=mid+1;
            }

        }
        return -1;
    }      
    
};