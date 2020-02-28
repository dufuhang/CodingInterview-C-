/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//使用栈
class Solution
{
public:
    vector<int> reversePrint(ListNode *head)
    {
        if (!head)
            return {};
        stack<int> tem;
        vector<int> res;
        ListNode *p = head;
        while (p != nullptr)
        {
            tem.push(p->val);
            p = p->next;
        }
        while (!tem.empty())
        {
            res.push_back(tem.top());
            tem.pop();
        }
        return res;
    }
};