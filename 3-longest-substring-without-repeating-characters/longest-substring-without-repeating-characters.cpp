class Solution {
public:
    bool inString(string &s, int l, int r){
        // check if s[r] exists between l and r-1
        for(int i = l; i < r; i++){
            if(s[i] == s[r]) return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) return s.size();
        
        int maxLength = 0;
        int l = 0;

        for(int r = 1; r < s.size(); r++){
            
            // If duplicate found, shrink window
            while(inString(s, l, r)){
                l++;
            }

            maxLength = max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};