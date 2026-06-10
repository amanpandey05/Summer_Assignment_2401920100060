class Solution {
public:
        void lpsfind(vector<int>&lps, string s){
            int pre = 0, suf = 1;
            while(suf < s.size()){
                if(s[pre] == s[suf]){
                    lps[suf] = pre+1;
                    suf++, pre++;
                } 
                else
                {
                    if(pre == 0){
                        lps[suf] = 0;
                        suf++;
                    } else{
                        pre = lps[pre-1];
                    }
                }
            }
        }
    int strStr(string haystack, string needle) {
         if (needle.size() == 0) return 0;
       vector<int> lps(needle.size(), 0);
       lpsfind(lps, needle);
       int l = 0, r = 0;
       while(l < haystack.size() && r < needle.size()){
        if(haystack[l] ==needle[r]){
            l++, r++;
        }else{
            if(r == 0){
                l++;
            }else{
                r = lps[r - 1];
            }
        }
       }
       if(r == needle.size())
        return l-r;
       
       return -1;
    }
};
