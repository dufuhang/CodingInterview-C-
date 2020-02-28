//思路：
//从右上角看，类似二叉搜索树(BST)
//因此可从右上角开始遍历搜索
class Solution 
{
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
    {
        //若矩阵为空，返回false
        if (matrix.size() == 0) return false;
        //行数
        int n = 0;
        //列数
        int m = matrix[0].size() - 1;
        while (n < matrix.size() && m >= 0)
        {
            //小于当前元素，列减1
            if (target < matrix[n][m])
            {
                m--;
            }
            //大于当前元素，行加1
            else if (target > matrix[n][m])
            {
                n++;
            }
            //相等，返回true
            else
            {
                return true;
            }
        }
        //没有找到，返回false
        return false;
    }
};