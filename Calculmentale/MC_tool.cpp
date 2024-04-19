#include "MC_tool.h"
#include <cstdlib>


int MC_T_randint(int a, int b){
    if(a==b){return a;}
    else{if(a<b){return rand()%(b-a)+a;}
    else{return rand()%(a-b)+b;}}
}

