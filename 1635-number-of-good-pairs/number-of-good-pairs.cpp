class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int, int> freq;
       int ans = 0;
       for(auto a:nums){
        ans += freq[a];
        freq[a]++;
       }
       return ans;   
    }
};