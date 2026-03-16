class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int sum = n*(n+1)/2;
       int c_sum = 0;
       for(int i=0;i<n;i++){
        c_sum = c_sum + nums[i];
       }
       return sum - c_sum;
    }
};