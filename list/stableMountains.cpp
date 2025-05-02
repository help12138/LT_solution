#include "listCount.h"

/**
 * 有 n 座山排成一列，每座山都有一个高度。给你一个整数数组 height ，其中 height[i] 表示第 i 座山的高度，再给你一个整数 threshold 。

对于下标不为 0 的一座山，如果它左侧相邻的山的高度 严格大于 threshold ，那么我们称它是 稳定 的。我们定义下标为 0 的山 不是 稳定的。

请你返回一个数组，包含所有 稳定 山的下标，你可以以 任意 顺序返回下标数组。

 

示例 1：

输入：height = [1,2,3,4,5], threshold = 2

输出：[3,4]

解释：

下标为 3 的山是稳定的，因为 height[2] == 3 大于 threshold == 2 。
下标为 4 的山是稳定的，因为 height[3] == 4 大于 threshold == 2.
示例 2：

输入：height = [10,1,10,1,10], threshold = 3

输出：[1,3]

示例 3：

输入：height = [10,1,10,1,10], threshold = 10

输出：[]
*/

/**
 * 思路：
 * 本体说白了就是判断左侧数字是否大于当前数字，且只判断左侧数字
*/
vector<int> stableMountains(vector<int>& height, int threshold){
    vector<int> list{};
    for (int i = 0; i < height.size(); i++)
    {
        if (i!=0&&height[i-1] > threshold)
        {
            list.push_back(i);
        }
        
    }
    return list;
}