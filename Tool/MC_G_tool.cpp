#include "../Tool/MC_G_tool.h"
#include <string.h>
bool MC_G_STR_Egaux(char* mot_a,char* mot_b){
    if (strlen(mot_a)!=strlen(mot_b)){return false;}
    for(int i=strlen(mot_a)-1;0<=i;i--){
        if(mot_a[i]!=mot_b[i]){return false;}}
    return true;
}
void MC_G_register_arg_more_chararter(arg_more_chararter* option){}