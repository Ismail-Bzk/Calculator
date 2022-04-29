

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <libsx.h>
#include "calimodele.h"
#include "calivue.h"


int main(int argc, char *argv[]) {
	data d;
 	if (OpenDisplay(argc, argv) ==0) {
 		fprintf(stderr,"Can’t open display\n");
		return EXIT_FAILURE;
 	}
// intitialize data shares between template and IG 	
// Create IG and display it on screen
 	init_display(argc, argv, &d);
 	MainLoop();
	return EXIT_SUCCESS;
}
