class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string ans = "";
        string first = strs[0];
        string sec = strs[strs.size()-1];
        int len = min(first.size(), sec.size());
        for(int i = 0; i<len; i++){
            if(first[i] != sec[i]) break;
            else ans += first[i];
        }
        return ans;  
    }
};
