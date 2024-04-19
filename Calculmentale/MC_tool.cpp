#include "MC_tool.h"
#include <stdlib.h>


int MC_T_randint(int a, int b){
    if(a==b){return a;}
    else{if(a<b){return rand()%(b-a+1)+a;}
    else{return rand()%(a-b+1)+b;}}
}
int MC_T_Bernoulli(float p){
    float z =rand()/RAND_MAX;
    if(z>p){return 0;}
    else{return 1;}
}
