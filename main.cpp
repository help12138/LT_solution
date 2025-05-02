#include "list/listCount.h"

int main(){
    vector<int> list {10,1,10,1,10};

    vector<int> result = stableMountains(list, 10);

    for(auto &item: result){
        cout << item << " ";
    }
    return 0;
}