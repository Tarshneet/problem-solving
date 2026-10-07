class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            a.push_back(nums[i]);
            b.push_back(nums[i]);
        }
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(a[i]);
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(b[i]);
        }

        return ans;

        
    }
};