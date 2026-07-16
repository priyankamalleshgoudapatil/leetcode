class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int fv = 0;
        int fc = 0;
        for(auto a:mp){
            if(a.first == 'a'|| a.first == 'e'|| a.first =='i'||a.first=='o'||a.first=='u'){
                fv=max(fv,a.second);
            }else{
                fc=max(fc,a.second);
            }

        }
        return fv+fc;
    }
};
