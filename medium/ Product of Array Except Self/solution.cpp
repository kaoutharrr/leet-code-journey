class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec(nums.size(), 1);

        int left = 1;
        int right = 1;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            vec[i] *= left;
            left*=nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            vec[i] *= right;
            right *= nums[i];
        }
    return vec;
    }
};