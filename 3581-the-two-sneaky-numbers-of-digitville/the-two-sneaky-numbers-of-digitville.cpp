class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> myMap;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            myMap[nums[i]]++;
        }
        for(auto a:myMap){
            if(a.second > 1){
                ans.push_back(a.first);
            }
        }
        return ans; 
    }
};