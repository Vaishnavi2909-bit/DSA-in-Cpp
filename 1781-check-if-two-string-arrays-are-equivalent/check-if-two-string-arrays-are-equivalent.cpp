class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "";
        string b = "";
        for(string ch : word1) {
            a += ch;
        }
        for(string bh : word2) {
            b += bh;
        }
        if(a == b) return true;
        return false;
    }
};