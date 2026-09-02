class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<int> result;
        
        for (int query : queries) {
            int minLength = INT_MAX;
            bool found = false;
            
            // Check each interval to see if it contains the query
            for (const auto& interval : intervals) {
                int left = interval[0];
                int right = interval[1];
                
                // Check if query is within this interval
                if (left <= query && query <= right) {
                    found = true;
                    int length = right - left + 1;
                    minLength = min(minLength, length);
                }
            }
            
            result.push_back(found ? minLength : -1);
        }
        
        return result;
    }
};