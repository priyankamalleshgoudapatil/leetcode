class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx = 0;
        for(int i = 0; i < sentences.size(); i++){
            int sp = 0;
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] ==' '){
                    sp++;                
                }
            }
            maxx = max(maxx,sp+1);
        }
        return maxx;
        
    }
};