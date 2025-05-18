#include "list/listCount.h"

int main(){
    vector<int> list {1,2,3};

    vector<int>result = plusOne(list);
    for(const auto item : result){
        cout << item << " ";
    }
    return 0;
}