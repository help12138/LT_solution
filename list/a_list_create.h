#ifndef LIST_HEAD
#define LIST_HEAD
#include <iostream>
/**
 * 数组的实现
*/
class Array
{
private:
    int *mcap; //数组扩容
    int mcur;  // 数组实际的元素量
    int mlen;  //数组的长度 
public:
    Array(int size = 10):mlen(size),mcur(0){
        //构造函数，开辟一个默认长度为10的内存
        mcap = new int[size]();
    };
    ~Array(){
        // 析构函数， 主要是用来删除动态内存
        delete []mcap;
        mcap = nullptr;
    };
public:
    // 增
    void push(int val);
    // 改
    void insert(int val);
    // 删
    void pop();
    // 查
    int find(int val);
private:
    void expend(int size){
        // 扩容函数， 类自己调用，不接受客户调用
        int *p = new int[size];
        memcpy(p, mcap, sizeof(int)* mlen);
        delete []mcap;
        mcap = p;
        mlen = size;
    }
};


#endif