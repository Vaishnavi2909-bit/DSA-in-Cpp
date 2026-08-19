class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int n = pref.size();
        for(string word : words){
            if(word.find(pref)==0) cnt++;
        }
        return cnt;
    }
};