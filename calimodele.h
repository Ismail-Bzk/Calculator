/*
 * @author: Bouzkka Ismail
 */
#pragma once
#include <libsx.h>

/*
 * Définition du type data qui représente la matrice affiché dans la grille,
 * la matice utilisée pour calculer le nombre de voisins, la matrice qui lit
 * le fichier, et finalement la mode du jeu
 *
 */
typedef struct {
	
	char  l[222];		// chaine representant la grille
	double op1,op2;		// opérateurs
	double ss;
} data;






extern void initialiser(data *);
extern void ope(data *);

extern void lire(data *, char * );
extern void afficherRes(data *);
extern void supprimer(data *);



