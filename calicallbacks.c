#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <libsx.h>
#include "calimodele.h"
#include "calivue.h"
#include "calicallbacks.h"
/*
 * Rôle : termine l’exécution du jeu
 */
void quit(Widget w, void *d) {
 exit(EXIT_SUCCESS);
}



/*
 * Role: reinitialiser l
 */
void reinitialiser(Widget w, void *d) {
	ClearDrawArea();
	initialiser(d);
}

/*
 * Role: writing data on the interface
 */
void drawing(data *d){
	 DrawText(d->l, 5, 10);
}



void f1(Widget w, void *d) {
	char *a ="1";
	lire(d,a);
	
	drawing(d);	
}
	
void f2(Widget w, void *d) {
	char *a ="2";
	lire(d,a);
	
	drawing(d);
	
}
void f3(Widget w, void *d) {
	char *a ="3";
	lire(d,a);
	
	drawing(d);
	
}
void f4(Widget w, void *d) {
	char *a ="4";
	lire(d,a);
	
	drawing(d);
	
}

void f5(Widget w, void *d) {
	char *a ="5";
	lire(d,a);
	
	drawing(d);

}
void f6(Widget w, void *d) {
	char *a ="6";
	lire(d,a);
	
	drawing(d);
	
}
void f7(Widget w, void *d) {
	char *a ="7";
	lire(d,a);
	
	drawing(d);
	
}
void f8(Widget w, void *d) {
	char *a ="8";
	lire(d,a);
	
	drawing(d);
	
}
void f9(Widget w, void *d) {
	char *a ="9";
	lire(d,a);
	
	drawing(d);
	
}
void f0(Widget w, void *d) {
	char *a ="0";
	lire(d,a);
	
	drawing(d);
	
}
void fdiv(Widget w, void *d) {
	char *a ="/";
	lire(d,a);
	
	drawing(d);
	
}
void fmul(Widget w, void *d) {
	char *a ="x";
	lire(d,a);
	
	drawing(d);
	
}
void fadd(Widget w, void *d) {
	char *a ="+";
	lire(d,a);
	
	drawing(d);
	
}
void fsous(Widget w, void *d) {
	char *a ="-";
	lire(d,a);
	
	drawing(d);
	
}

void fpoint(Widget w, void *d) {
	char *a =".";
	lire(d,a);
	
	drawing(d);
	
}


void fres(Widget w, void *d) {
	char *a ="=";
	lire(d,a);
	ope(d);
	ClearDrawArea();
	
	drawing(d);
	//afficherRes(d);
}

void fsupp(Widget w, void *d) {
	
	supprimer(d);
	ClearDrawArea();

	drawing(d);
	
}

















