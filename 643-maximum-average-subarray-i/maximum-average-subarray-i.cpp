class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int i = 0, j = 0;
        int n = nums.size();
        for( ; j < k; j++){
            sum += nums[j];
        }
        int maxx=sum;
        for( ; j < n; j++){
            sum -= nums[i];
            sum+=nums[j];
            i++;
            maxx=max(maxx,sum);
        }
        return (maxx/(k*1.0));
    }
};