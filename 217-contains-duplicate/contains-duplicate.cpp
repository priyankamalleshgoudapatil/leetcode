class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset;
        for(auto a : nums){
            myset.insert(a);
        }
        if(myset.size() != nums.size()){
            return true;
        }
        else{
            return false;
        }
    }
};