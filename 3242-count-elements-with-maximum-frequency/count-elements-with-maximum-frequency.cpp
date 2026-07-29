class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto a:nums){
            mp[a]++;
        }
        int maxx = 0;
        for(auto a:mp){
            maxx = max(maxx, a.second);
        }
        int ans = 0;
        for(auto a : mp){
            if(a.second==maxx){
                ans+=a.second;            
            }
        }
        return ans;
    }
};