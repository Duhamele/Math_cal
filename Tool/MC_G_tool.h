#ifndef _MC_G_TOOL_H_
#define _MC_G_TOOL_H_
/**
 * @brief
 * @param mot_a word a
 * @param mot_b word b
 * @return true or false
 */
bool MC_G_STR_Egaux(char* mot_a,char* mot_b);

/**
* \brief A function that must start when the option is decte
* @param arg The digit where the option is decte
* @param argc The number of argument of launcht
* @param argv
* @param user_data A pointer to struct data
*/
typedef void (*actionfunc) (int arg,int argc, char *argv[],void* user_data);
/**
* \brief A structure that stores information about a option
*/
typedef struct arg_one_chararter{char letter;actionfunc action;struct arg_one_chararter* next;}arg_one_chararter;
typedef struct arg_more_chararter{char* word[20];actionfunc action;struct arg_more_charater* next;}arg_more_chararter;
typedef struct arg_opt{actionfunc action;}arg_opt;
void MC_G_register_arg_one_chararter(arg_one_chararter* option);
void MC_G_register_arg_more_chararter(arg_more_chararter* option);
void MC_G_register_arg_no_opt(arg_opt* no_option);
void MC_G_register_erreur(arg_opt* erreur);


#endif