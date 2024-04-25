#include "MC_G_tool.h"
#include <cstdio>
#define PASSE "\e[5;32mPASSE\e[0m\n"
#define NOT "\e[5;31mREFUSE\e[0m\n"
bool test_MC_G_STR_Egaux(){
    char* mot_a="adfe\0";
    char* mot_b=mot_a;
    if(MC_G_STR_Egaux(mot_a,mot_a)!=true){return false;}
    if(MC_G_STR_Egaux(mot_a,mot_b)!=true){return false;}
    mot_a="de";
    if(MC_G_STR_Egaux(mot_a,mot_b)!=false){return false;}
    if(MC_G_STR_Egaux(mot_b,mot_a)!=false){return false;}
    mot_b="be";
    if(MC_G_STR_Egaux(mot_a,mot_b)!=false){return false;}
    if(MC_G_STR_Egaux(mot_a,"de")!=true){return false;}
    if(MC_G_STR_Egaux(mot_b,"de")!=false){return false;}
    return true;
}




int main(){
    printf("Test de MC_G_STR_Egaux  :   ");
    if(test_MC_G_STR_Egaux()){printf(PASSE);}
    else{printf(NOT);}
    return 0;
}