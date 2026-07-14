class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        int ans =0;
        for(int i = 0; i < nums.size(); i++){
            myMap[nums[i]]++;
        }
        //int ans =0;
        for(auto a: myMap){
            if(a.second % k == 0 ){
                ans += a.first*a.second;
            }
        }
        return ans;
    }
};