class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map <int, int> mp;
        int i = 0, ans = 0, n = nums.size();
        int sum = 0;
        for(int j = 0; j < n; j++){
            mp[nums[j]]++;
            sum += nums[j];
            while(mp[nums[j]] > 1){
                mp[nums[i]]--;
                sum -= nums[i];
                i++;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};