class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k ==0 || k == 1) return 0;
        int i = 0, prod = 1, n = nums.size();
        int ans = 0;
        for(int j = 0; j < n; j++){
            prod *= nums[j];
            while(prod >=k){
                prod /= nums[i];
                i++;
            }
            ans += (j-i+1);
        }
        return ans;
    }
};