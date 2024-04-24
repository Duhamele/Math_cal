/**
 * @brief renvoie la version du logiciel dans la console
*/
void MC_M_Version();

int main(int argc, char *argv[]);
void MC_M_Analyse_entre(int argc, char *argv[]);
enum MC_M_Commande{VOID,VERSION,HELP};
MC_M_Commande MC_M_Analyse_argument(char*);