class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

    unordered_set<int>seen;
    for(int i=0;i<nums.size();i++){
    int num=nums[i];
    if(seen.count(num)>0){
    return true;
    }

    seen.insert(num);
        
    }
    return false;
    }
};