class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<vector<int>> buckets(nums.size()+1);

        for(auto item:map){
            buckets[item.second].push_back(item.first);
        }
        vector<int>answer;
        for(int i=buckets.size()-1;i>=0;i--){
            for(int num:buckets[i]){
                answer.push_back(num);
                if(answer.size()==k){
                    return answer;
                }
            }
        }
        
    }
};
