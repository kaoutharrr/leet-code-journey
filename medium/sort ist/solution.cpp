
#include<vector>
#include<iostream>

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head)
            return(NULL);
        vector<int> vec ;
        ListNode *tmp;
        tmp = head;
        while(tmp )
        {
            vec.push_back(tmp->val);
            tmp = tmp->next;
        }
        for(int i = 1 ; i < vec.size(); i++)
        {
            int key = vec[i];
            int j = i - 1;
            while(j >= 0 && vec[j] > key)
            {
                vec[j + 1] = vec[j];
                j--;
            }
            vec[j+1] = key;
        }
        int i = 0;
         tmp = head;
        while (i < vec.size())
        {
            tmp->val = vec[i];
            i++;
            tmp= tmp->next;
        }
        return(head);
        
    }
};