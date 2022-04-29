CC = gcc        # le compilateur à utiliser                                     
CFLAGS = -Wall          # les options du compilateur                            
LDFLAGS = -lsx  # les options pour l’éditeur de liens                           
SRC = 1cali.c calicallbacks.c calimodele.c calivue.c # les fichiers sources            
PROG = 1cali        # nom de l’exécutable                                  
OBJS = $(SRC:.c=.o)     # les .o qui en découlent                               
.SUFFIXES: .c .o
                        # lien entre les suffixes                               
                        
                        
all: $(PROG)

# étapes de compilation et d’édition de liens                                   
# $@ la cible $^ toutes les dépendances                                         
$(PROG): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)
        
calicallbacks.o: calicallbacks.h calimodele.h
modele.o: modele.h
1cali.o: calivue.h calimodele.h calicallbacks.h
# le lien entre .o et .c                         
# $< dernière dépendance                                                        
%.o: %.c
	 $(CC) $(CFLAGS) -c $<
# pour faire propre                                                             
.PHONY: clean
clean:
	rm -f *.o *~ core $(PROG)

