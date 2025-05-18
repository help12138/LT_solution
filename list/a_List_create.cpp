#include "a_list_create.h"

void Array::push(int val){
    if(mcur == mlen){
        expend(2 * mlen);
    }
    mcap[mcur++] = val;
}