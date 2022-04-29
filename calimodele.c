
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "calimodele.h"


void initialiser(data *d){
	char *x=d->l;
	
	*x='\0';
}


void ope(data *d){
	
	double s=0;
	char *a= d->l;
	
	double op1=strtod( a, &a);
	
		
	char op=*a;
	a++;
	double op2=strtod( a, &a);
	switch(op){
		case '+': s = op1 + op2; break;
		case '-': s= op1 - op2; break;
		case 'x': s = op1 * op2; break;
		case '/': if (op2==0) {
		        fprintf(stderr, " division par 0 impossible \n");    
		        exit(EXIT_FAILURE);
		    }

		    s = op1 / op2;
		     break;
	}
	d->op1=op1;
	d->op2=op2;
	d->ss=s;
	sprintf(d->l, "%.2lf", d->ss);
	
}


void lire(data *d,char *a){
	char *p= d->l;
	strcat(p,a);

	
}
void afficherRes(data *d){
	puts(d->l);
}

void supprimer(data *d){
	char *x=d->l;
	
	*(x+strlen(x)-1)=' ';
	*(x+strlen(x)-1)='\0';
}

