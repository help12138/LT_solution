#include "listCount.h"

/**
 * 给你一个整数数组 nums，请你返回其中包含 偶数 个数位的数字的个数。

 
示例 1：

输入：nums = [12,345,2,6,7896]
输出：2
解释：
12 是 2 位数字（位数为偶数） 
345 是 3 位数字（位数为奇数）  
2 是 1 位数字（位数为奇数） 
6 是 1 位数字 位数为奇数） 
7896 是 4 位数字（位数为偶数）  
因此只有 12 和 7896 是位数为偶数的数字
示例 2：

输入：nums = [555,901,482,1771]
输出：1 
解释： 
只有 1771 是位数为偶数的数字。
 * 
 */

/**
 * 思路， 先用for循环获取每个数字元素， 然后判断数字元素是否大于零
 * 不停地以10为底取模。判断有多少个位数，然后判断位数是否为偶数
*/
int findNumbers(vector<int>& nums) {
    if(nums.empty()){
        return 0;
    }
    int result = 0;
    for(auto &item : nums){
        int bit = 0;
        while (item >0)
        {
            bit+=1;
            item /= 10;
        }
        if(bit % 2 == 0){
            result+=1;
        }
    }
    cout << result;
    return result;
}