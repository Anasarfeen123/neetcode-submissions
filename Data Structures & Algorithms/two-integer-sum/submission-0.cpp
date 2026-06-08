class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int need, s = 0;
        unordered_map<int,int> mp;
        for (int i:nums){
            need = target - i;
            if (mp.count(need)!=0){
                vector<int> a = {mp[need], s};
                return a;
            }
            else{
                mp[i]=s;
            }
            s++;
        }
    }
};
