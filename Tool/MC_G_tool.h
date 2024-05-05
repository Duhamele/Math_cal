#ifndef _MC_G_TOOL_H_
#define _MC_G_TOOL_H_

bool MC_G_STR_Egaux(char* mot_a,char* mot_b);

/**
* \brief A function that must start when the option is decte
* @param arg The digit where the option is decte
* @param argc The number of argument of launcht
* @param argv
* @param user_data A pointer to struct data
*/
typedef void (*actionfunc) (int arg,int argc, char *argv[],void* user_data);
typedef struct arg_one_chararter{char letter,*actionfunc action,struct arg_one_chararter* next}arg_one_chararter;
typedef struct arg_more_chararter{char* word[20],*actionfunc action,struct arg_more_charater* next}arg_more_chararter;

#endif