#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RE "\x1B[0m"
#define PNK "\e[38;5;162m"
int main()

{

int c;

printf("   \n");
printf("   \n");
printf(YEL"["WHT"1"YEL"] "GRN"Color codes\n"RE);
printf(" \n");
printf(YEL"["WHT"2"YEL"] "GRN"Color backgrounds\n"RE);
printf(" \n");
printf(" \n");
printf(GRN"["RE);
printf(WHT"*"RE);
printf(GRN"] "RE);
printf(PNK"Enter your choice: "RE);
scanf("%d" ,&c);

switch (c)

{

case 1:
printf(" \n");
char command[50];
strcpy(command, "./color");
printf(" \n");
printf(" \n");
system(command);

break;

case 2:

printf(" \n");
char cmd[50];
strcpy(command, "./background");
printf(" \n");
system(command);
break;

default :

printf(RED"invalid input");

break;

}

}
