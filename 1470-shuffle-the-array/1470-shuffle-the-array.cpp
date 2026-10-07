class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;

        for(int i=0;i<n;i++)
        {
            a.push_back(nums[i]);
        }

        vector<int>b;
        for(int i=n;i<2*n;i++)
        {
            b.push_back(nums[i]);
        }

        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }

        
        return ans;



        
    }
};