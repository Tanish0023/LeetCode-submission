class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hp;
        stack<int> s;

        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i = n2 - 1; i >= 0; i--){
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