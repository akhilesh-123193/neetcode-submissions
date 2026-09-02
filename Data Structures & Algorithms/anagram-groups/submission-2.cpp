class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {

            string word = strs[i];

            sort(word.begin(), word.end());

            groups[word].push_back(strs[i]);
        }

        vector<vector<string>> answer;

        for (auto group : groups) {
            answer.push_back(group.second);
        }

        return answer;
    }
};