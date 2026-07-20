class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int freq = mp.begin()->second;

        for(auto a:mp){
            if(a.second!=freq){
                return false;
            }
        }
        return true;
    }
};