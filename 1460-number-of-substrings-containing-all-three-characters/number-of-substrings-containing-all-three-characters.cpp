class Solution {
public:
    int atMost(string s, int goal){
        unordered_map<char, int> mp;
        int l = 0;
        int count = 0;

        for(int r = 0; r < s.size(); r++){
            mp[s[r]]++;

            while(mp.size() > goal){
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }

            count += r - l + 1;
        }

        return count;
    }

    int numberOfSubstrings(string s) {
        return atMost(s, 3) - atMost(s, 2);
    }
};