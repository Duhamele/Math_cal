#define Version "1.0"
#define _NAME_ "Obacal"
#include <stdio.h>
#include <string.h>
#include "../Calculmentale/main.h"
#include <iostream>

int main(int argc, char *argv[]){
    MC_M_Version();
    
    return 0;

}
void MC_M_Version(){
    printf("%s\n",_NAME_);
    printf("Version : %s\n",Version);
}
void MC_M_Analyse_entre(int argc, char *argv[]){
    int i=0;
    while (i<argc)
    {
        MC_M_Commande arg=MC_M_Analyse_argument(argv[i]);
        switch (arg)
        {
        case VERSION :
            MC_M_Version();
            i++;
            break;
        case HELP:
            i++;
            break;
        
        default:
            printf("Message inconpris");
            i=argc;
            break;
        }
    }
    
}
//TODO
MC_M_Commande MC_M_Analyse_argument(char* mot){

}