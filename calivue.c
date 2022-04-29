
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <libsx.h>
#include "calimodele.h"
#include "calicallbacks.h"





/* Rôle: création et assemblage des widgets */
void init_display(int argc, char *argv[], void *d)
{
	  Widget BQuit, grille, B1,B2,B3,B4,B5,B6,B7,B8,B9,B0,BC,Bmul,Bdiv,Bsous,Badd,Bres, Bpoint ,BOn,BCE;
// créer les composants graphiques

	BOn = MakeButton(" ON ", reinitialiser, d);
 	BQuit = MakeButton("OFF ", quit, NULL);
 	B1= MakeButton(" 1  ", f1, d);
 	B2= MakeButton(" 2  ", f2, d);
 	B3= MakeButton(" 3  ", f3, d);
 	
 	B4= MakeButton(" 4  ", f4, d);
 	B5= MakeButton(" 5  ", f5, d);
 	B6= MakeButton(" 6  ", f6, d);
  	B7= MakeButton(" 7  ", f7, d);
  	B8= MakeButton(" 8  ", f8, d);
  	B9= MakeButton(" 9  ", f9, d);
  	B0= MakeButton(" 0  ", f0, d); 
  	Bdiv= MakeButton("  / ", fdiv, d);
  	Bmul= MakeButton(" x  ", fmul, d);
  	Badd= MakeButton(" +  ", fadd, d);
  	Bres= MakeButton(" =  ", fres, d);
  	Bsous= MakeButton(" -  ", fsous, d);
  	BC= MakeButton(" C  ", reinitialiser, d);
  	BCE= MakeButton(" CE ", fsupp, d);
  	Bpoint= MakeButton(" .  ", fpoint, d);
  	
 	grille=MakeDrawArea(154, 40, NULL, NULL);

 	
// assembler les composants graphiques
 		
 	
 	SetWidgetPos(B1, PLACE_UNDER, grille, NO_CARE, NULL);
	SetWidgetPos(B2, PLACE_RIGHT, B1, PLACE_UNDER, grille);
	SetWidgetPos(B3, PLACE_UNDER, grille, PLACE_RIGHT, B2);
	SetWidgetPos(Bdiv, PLACE_UNDER, grille,PLACE_RIGHT, B3);
		
	SetWidgetPos(B4, PLACE_UNDER, B1, NO_CARE, NULL);
	SetWidgetPos(B5, PLACE_UNDER, B2, PLACE_RIGHT, B4);
	SetWidgetPos(B6, PLACE_UNDER, B3, PLACE_RIGHT, B5);
	SetWidgetPos(Bmul, PLACE_UNDER, Bdiv,PLACE_RIGHT, B6);
	
	SetWidgetPos(B7, PLACE_UNDER, B4, NO_CARE, NULL);
	SetWidgetPos(B8, PLACE_UNDER, B5, PLACE_RIGHT, B7);
	SetWidgetPos(B9, PLACE_UNDER, B6, PLACE_RIGHT, B8);
	SetWidgetPos(Bsous, PLACE_UNDER, Bmul,PLACE_RIGHT, B9);
	
	SetWidgetPos(B0, PLACE_UNDER, B7, NO_CARE, NULL);
	SetWidgetPos(Bpoint, PLACE_UNDER, B8,PLACE_RIGHT, B0);
	SetWidgetPos(BC, PLACE_UNDER, B9,PLACE_RIGHT, Bpoint);
	SetWidgetPos(Badd, PLACE_UNDER, Bsous,PLACE_RIGHT, BC);
	
	SetWidgetPos(Bres, PLACE_UNDER, B0,NO_CARE, NULL);
	SetWidgetPos(BCE, PLACE_RIGHT, Bres,PLACE_UNDER, Bpoint);
	SetWidgetPos(BQuit, PLACE_RIGHT, BCE,PLACE_UNDER, BC);
	SetWidgetPos(BOn, PLACE_RIGHT, BQuit,PLACE_UNDER, BC);
	
	
// pour gérer les couleurs
 	GetStandardColors();
// pour afficher l’interface
 	ShowDisplay();
}

