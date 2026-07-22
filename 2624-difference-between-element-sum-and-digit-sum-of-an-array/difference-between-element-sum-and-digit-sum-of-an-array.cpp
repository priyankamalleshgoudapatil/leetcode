class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n =nums.size();
        int sum = 0;
        int sum1 = 0;
        for(int i = 0; i < n; i++){
            sum+=nums[i];
            int num = nums[i];
            while(num!=0){
                int d = num%10;
                sum1+=d;
                num/=10;
            }
        }
        return abs(sum-sum1);
    }
};