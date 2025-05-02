#ifndef LIST_HEAD
#define LIST_HEAD
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <unordered_map>
using namespace std;

// 寻找数组的中心索引
int pivotIndex(vector<int>& nums);
int pivotIndex2(vector<int>& nums);
// 统计位数为偶数的数字
int findNumbers(vector<int>& nums);
// 有人相爱，有人看海，有人leetcode第一题做不出来， 两数之和
vector<int> twoSum(vector<int>& nums, int target);
// 找到稳定山的下标
vector<int> stableMountains(vector<int>& height, int threshold);
#endif