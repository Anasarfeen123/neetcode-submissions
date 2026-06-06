class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>so;
        unordered_map<char, int>to;
        for (char c : s){
            so[c]++;
        }
        for (char c : t){
            to[c]++;
        }
        return so==to;
    }
};
