class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 1) return "";
        //intializing start , maxlen as index of s
        int start = 0;
        int maxlen = 1;

        for(int i =0 ; i < s.length() ; ++i){
            //for odd numbers 
            int left  = i;
            int right = i;
            while(left >= 0  && right < s.length() && s[left] == s[right]){
                if(right - left + 1 > maxlen){
                    maxlen = right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
        }
        //for even
        for(int i = 0 ; i<s.length() ; ++i){
            int left = i;
            int right = i+1;
            while(left >= 0 && right < s.length() && s[left] == s[right]){
                if(right - left + 1 > maxlen){
                    maxlen = right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start , maxlen);   
    }
};
