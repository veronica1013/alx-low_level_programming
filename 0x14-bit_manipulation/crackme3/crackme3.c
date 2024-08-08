#include <stdio.h>
#include "main.h"

#define PASSWORD "secretpassword"

int main(int argc, char *argv[]) {
	if (argc != 2)
       {
	       fprintf(stderr, "Usage: %s <password>\n", argv[0]);
	       return 1;
       }
	if (strcmp(argv[1], PASSWORD) == 0)
       {
	       printf("Congratulations!\n");
	       return 0; 
       }
       else
       {
	       printf("Wrong password!\n");
	       return 1;
       }
}
