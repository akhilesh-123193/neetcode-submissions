class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int diff=target-num;

            if(seen.find(diff)!=seen.end()){
                return{seen[diff],i};
            }
            seen.insert({nums[i],i});
        }

        return{};

        
    }
};
