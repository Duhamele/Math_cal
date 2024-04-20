#ifndef _MC_TOOL_H_
#define _MC_TOOL_H_

/**
 * @brief renvoie un nombre random entre a et b selon une loi uniforme
 * @param a int, l'entier inferieur
 * @param b int, l'entier supérieur
 * @return int ,le nombre random
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
/**
 * @brief simule une loi binominal de paramétre n et p
 * @param n int, nombre d'epreuve de Bernoulli
 * @param p float, le paramétre de Bernoulli
 * @return int, compris entre 0 et n inclus
 * 
*/
int MC_T_Binominal(int n,float p);

#endif