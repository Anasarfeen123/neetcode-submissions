class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (string i : strs){
            string p = i;
            sort(p.begin(), p.end());
            groups[p].push_back(i);
        }
        vector<vector<string>> ans;
        for (auto pair:groups){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
