/*
 * @Author: PureDeep
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-21 10:32:26
 * @FilePath: /Exercise-CPlusPlus/245candy.cpp
 */
/*
 * @Author: PureDeep
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-21 10:30:35
 * @FilePath: /LeetCode/135.分发糖果.cpp
 */
/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        size = ratings.size();
        vector<int> candy(size, 1);
        for (auto iter = candy.begin(); iter != candy.end(); ++iter)
        {
            *iter = 1;
        }
        for (int i = 0; i < size - 1; ++i)
        {
            if (ratings[i] > ratings[i + 1])
            {
                candy[i]++;
            }
        }
        for (int i = size - 1; i > 0; --i)
        {
            if (ratings[i] > ratings[i - 1])
            {
                candy[i]++;
            }
        }
        int sum = 0;
        for (auto i : candy)
        {
            sum += i;
        }
        return sum;
    }
};
// @lc code=end
