class Solution {
public:
    bool isVowel(char ch) {
        string vowels = "aeiouAEIOU";
        for(char c : vowels) {
            if(ch == c)
                return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        while(i <= j) {
            if(!isVowel(s[i])) {
                i++;
            }
            else if(!isVowel(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};