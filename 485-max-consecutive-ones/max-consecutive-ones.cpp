class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxx = 0;
        int c = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]==1){
                c++;
                maxx = max(maxx,c);
            }else{
                c=0;
            }
        }
        return maxx;
           
    }
};