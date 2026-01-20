class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hp;
        stack<int> s;

        for(int i = nums2.size() - 1; i >= 0; i--){
            int ele = nums2[i];

            while(!s.empty() && s.top() <= ele){
                s.pop();
            }

            int nextGreater = s.empty() ? -1 : s.top();

            hp[ele] = nextGreater;

            s.push(ele);
        }

        vector<int> ans;
        for(int i:nums1){
            ans.push_back(hp[i]);
        }

        return ans;
    }
};