class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        long long ans = 0;
        unordered_map<int, int> mp;
        int i = 0, j = 0;
        for(int j = 0; j < k; j++){
            sum+=nums[j];
            mp[nums[j]]++;
        }
        if(mp.size()==k){
             ans = sum;
        }
        for(int j = k; j < n; j++){
            sum+=nums[j];
            sum-=nums[i];
            if(mp[nums[i]] > 1){
                mp[nums[i]]--;
            }
            else{
                mp.erase(nums[i]);
            }
            mp[nums[j]]++;
            if(mp.size()==k){
                ans = max(ans,sum);
            }
              i++;
        }
        return ans;

    }
};