class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> myMap;
        while(n != 0){
            int d = n%10;
            myMap[d]++;
            n/=10;
        }
        int ans = 0;
        for(auto a: myMap){
            int sum=a.first*a.second;
            ans+=sum;
        }
        return ans;
    }
};