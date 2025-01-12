#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums, int left, int mid,  int right)
        {
            int n1= mid - left + 1;
            int n2 = right - mid;
            vector<int> L(n1), R(n2);

            for(int i = 0; i < n1; ++i)
                L[i] = nums[left + i];
            for(int i = 0; i < n2; ++i)
                R[i] = nums[mid + 1 + i];

            int i = 0;
            int j = 0;
            int k = left;
            while(i < n1 && j < n2)
            {
                if(L[i] < R[j])
                {
                    nums[k] = L[i];
                    i++;
                    }
                else
                {
                    nums[k] = R[j];
                    j++;
                }
                k++;
            }
            while(i < n1)
            {
                 nums[k] = L[i];
                 i++;
                 k++;
            }
            while(j < n2)
            {
                nums[k] = R[j];
                j++;
                k++;
            }  
        }
        void mergesort(vector<int> &nums, int left, int right)
        {
            if(left < right)
            {
                int mid = left + (right - left) / 2;
                mergesort(nums ,left, mid);
                mergesort(nums, mid + 1, right );

                merge(nums, left, mid , right);
            }
        }

        vector<int> sortArray(vector <int> &nums)
        {
            mergesort(nums, 0, nums.size() - 1);
            return nums;
        }
};

// int main()
// {
//     Solution solution ;
//     vector <int> nums{ 5, 2 , 3 , 1};
//     vector<int> Sortedarr= solution.sortArray(nums);
//     for(int i = 0; i< Sortedarr.size(); i++)
//         std :: cout << Sortedarr[i] << " ";
//     cout << "\n";
// }