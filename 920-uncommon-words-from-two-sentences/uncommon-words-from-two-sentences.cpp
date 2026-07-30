class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string, int> mp;
        string str = "";
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != ' ') str += s1[i];
            if(s1[i] == ' ' || i == s1.size()-1){
                mp[str]++;
                str = "";
            } 
        }
        for(int i = 0; i < s2.size(); i++){
            if(s2[i] != ' ') str += s2[i];
            if(s2[i] == ' ' || i == s2.size()-1){
                mp[str]++;
                str = "";
            } 
        }
        for(auto a:mp){
            if(a.second == 1){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};