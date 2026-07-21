class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn=INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int num=nums[i];
            int sum = 0;
            int ans = 0;
            while(num!=0){
                ans=num%10;
                sum+=ans;
                num/=10;
            }
            minn=min(minn,sum);
        }
        return minn;
    }
};