class Solution 
{
public:
    int findRepeatNumber(vector<int>& nums) 
    {
        vector<int> vec(100000,0);
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            vec[*it]++;
            if (vec[*it] >= 2)
            {
                return *it;
            }
        }
        return -1;
    }
};