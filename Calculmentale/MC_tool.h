#ifndef _MC_TOOL_H_
#define _MC_TOOL_H_

/**
 * @brief renvoie un nombre random entre a et b selon une loi uniforme
 * @param a int, l'entier inferieur
 * @param b int, l'entier supérieur
 * @return int ,le nombre random
 * @author Elie Duhamel
 * @warning si a>b, la fonction inverse a et b
*/
int MC_T_randint(int a,int b);
/**
 * @brief simule une loi de Bernoulli
 * @param p float, le paramétre de bernoulli
 * @return int, 0 ou 1
 * @warning if p>1, return 1,if p<0, return 0
*/
int MC_T_Bernoulli(float p);

#endif