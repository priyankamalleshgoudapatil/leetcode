class Solution {
public:
    int minimumChairs(string s) {
        int c=0,maxx =0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='E') c++;
            maxx=max(maxx,c);
            //if(maxx < c) maxx=c;
            if(s[i] =='L')c--;
        }
        return maxx;
    }
};