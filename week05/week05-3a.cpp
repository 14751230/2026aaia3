// week05-3a.cpp 學習計畫 Built-In Functions
// LeetCode 58. Length of Last Word 最後一個字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0;
        for (char c : s ){
            if (c==' '){
                ans = now;
                now = 0;
            }else now++;
        }
        ans = now;
        return ans;
    }
};
