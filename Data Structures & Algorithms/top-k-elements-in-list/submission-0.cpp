class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (auto i : nums){
            freq[i]++;
        }
        vector<pair<int,int>> arr;
        for (auto p : freq){
            arr.push_back({p.first, p.second});
        }
        sort(arr.begin(), arr.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });
        vector<int> ans;
        for (int a = 0; a < k; a++){
            ans.push_back(arr[a].first);
        }
        return ans;
    }
};
