class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }


        unordered_map<char,int> charS;
        unordered_map<char,int> charT;
        for(char c: s){
            charS[c]++;
        }
        for(char c: t){
            charT[c]++;
        }


        if(charT == charS){
            return true;
        }
        return false;
    }
};
