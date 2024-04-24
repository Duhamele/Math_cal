#ifndef _MAIN_H_
#define _MAIN_H_
enum MC_M_Commande{VOID,VERSION,HELP};

/**
 * @brief renvoie la version du logiciel dans la console
*/
void MC_M_Version();

int main(int argc, char *argv[]);
void MC_M_Analyse_entre(int argc, char *argv[]);
MC_M_Commande MC_M_Analyse_argument(char* mot);
#endif