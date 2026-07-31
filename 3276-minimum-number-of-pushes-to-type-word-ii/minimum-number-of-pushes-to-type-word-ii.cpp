class Solution {
public:
    int minimumPushes(string word) {
        map<char, int> mp;
        for(char ch:word){
            mp[ch]++;
        }
        vector<int> freq;
        for(auto a : mp){
            freq.push_back(a.second);
        }
        sort(freq.rbegin(), freq.rend());

        int ans = 0;

        for (int i = 0; i < freq.size(); i++)
            ans += freq[i] * (i / 8 + 1);

        return ans;
    }
};