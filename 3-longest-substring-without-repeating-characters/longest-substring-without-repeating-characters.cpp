class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> freq;
        int i = 0, ans = 0, n= s.size();
        for(int j = 0; j < n; j++){
            freq[s[j]]++;
            while(freq[s[j]] > 1){
                freq[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};