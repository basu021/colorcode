#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\e[5;49;92m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RE "\x1B[0m"
#define PNK "\e[38;5;162m"
#define PN "\033[38;5;200m"
#define GGRN "\x1B[38;5;82m"
#define BBLU "\x1B[38;5;134m"
#define BRED "\e[48;5;9m"
#define HPNK "\e[38;5;177m"
#define UP "\e[4;40;34m"

int main()

{

int c;

printf("   \n");
printf("   \n");
printf(YEL"["WHT"1"YEL"] "GRN"Color codes\n"RE);
printf(" \n");
printf(YEL"["WHT"2"YEL"] "GRN"Color backgrounds\n"RE);
printf(" \n");
printf(YEL"["WHT"3"YEL"] "GRN"Color text & background\n"RE);
printf(" \n");
printf(YEL"["WHT"99"YEL"] "UP"Update colorcode\n"RE);
printf(" \n");
printf(YEL"["WHT"100"YEL"] \e[5;49;36mContact\e[0m\e[0m\n");
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


printf("    ");
printf(" \n");
char command[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/color");
printf(" \n");
printf(" \n");
system(command);

printf("        \n");
printf(BBLU"    ._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.\n");
printf(RE"        \n");
printf(GGRN);
printf("    ╔═╗┌─┐┬─┐┌─┐┌─┐┬─┐┌─┐┬ ┬┌┐┌┌┬┐  ┌┬┐┌─┐─┐ ┬┌┬┐\n");
printf("    ╠╣ │ │├┬┘├┤ │ ┬├┬┘│ ││ ││││ ││   │ ├┤ ┌┴┬┘ │ \n");
printf("    ╚  └─┘┴└─└─┘└─┘┴└─└─┘└─┘┘└┘─┴┘   ┴ └─┘┴ └─ ┴ \n");
printf(BBLU"    ._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.");
printf(RE"        \n");
printf("        \n");
printf(RED"----» "WHT"For using one of the 256 colors on the foreground\n");
printf(WHT"(text color),the control sequence is “<Esc>[38;5;"YEL"ColorNumberm"RE"”\n");
printf(WHT""WHT"where ColorNumber is one of the color number:\n");
printf(RE"        \n");
printf("The "YEL"<Esc>"RE" character can be obtained with the following syntaxes:\n");
printf("     \n");
printf("» "YEL"\\e\n"RE);
printf("» "YEL"\\033\n"RE);
printf("» "YEL"\\x1B "WHT"(for bold letter)               \n"RE);
printf("        \n");
printf("        \n");




printf(PN"╔══════════════════════════╦═══════════════════════╗\n");    
printf(PN"║           "YEL"Code"PN"           ║      "YEL"Preview          "PN"║\n");
printf(PN"║══════════════════════════╩═══════════════════════║\n");
printf(PN"║ "RE"printf(\"\\033[38;5;nmbr)\;"PN" ║                       ║\n");
printf(PN"║                          ║                       ║\n");
printf(PN"║ "CYN"Example:"PN"                 ║                       ║\n");
printf(PN"║ "RE"printf(\"\\033[38;5;9m\")\;  "PN"║                       ║\n");
printf(PN"║ "RE"printf(\"Basudev\")\;       "PN"║        "RED"Basudev"RE""PN"        ║\n");
printf(PN"║ "RE"printf(\"\\033[0m\")\;       "PN"║                       ║\n");
printf(PN"║                          ║                       ║\n");
printf(PN"║                          ║                       ║\n");
printf(PN"╚══════════════════════════╩═══════════════════════╝\n`");
printf(" \n");
printf(" \n");


char mdod[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/menuload.sh");
printf(" \n");
system(command);
break;




      case 2:



printf(" \n");
char cmd[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/background");
printf(" \n");
system(command);


printf("        \n");
printf(HPNK"    ._.-._.-._.-._.-._.-._.-._.-._.-._.\n");
printf(RE"        \n");
printf(GGRN);

printf("      ╔╗ ┌─┐┌─┐┬┌─┌─┐┬─┐┌─┐┬ ┬┌┐┌┌┬┐\n");
printf("      ╠╩╗├─┤│  ├┴┐│ ┬├┬┘│ ││ ││││ ││\n");
printf("      ╚═╝┴ ┴└─┘┴ ┴└─┘┴└─└─┘└─┘┘└┘─┴┘\n");
printf(HPNK"    ._.-._.-._.-._.-._.-._.-._.-._.-._.");
printf(RE"        \n");
printf("        \n");
printf("        \n");
printf(RED"----» "WHT"For using one of the 256 colors on the Background\n");
printf(WHT"(background color),the control sequence is");
printf("\n “<Esc>[48;5;"YEL"ColorNumberm"RE"”\n");
printf("   \n");
printf(WHT""WHT"where ColorNumber is one of the color number:\n");
printf(RE"        \n");
printf("The "YEL"<Esc>"RE" character can be obtained with the following syntaxes:\n");
printf("     \n");
printf("» "YEL"\\e\n"RE);
printf("» "YEL"\\033\n"RE);
printf("       \n");
printf(PN"╔══════════════════════════╦═══════════════════════╗\n");
printf(PN"║           "YEL"Code"PN"           ║      "YEL"Preview          "PN"║\n");
printf(PN"║══════════════════════════╩═══════════════════════║\n");
printf(PN"║ "RE"printf(\"\\033[48;5;nmbr)\; "PN"║                       ║\n");
printf(PN"║                          ║                       ║\n");
printf(PN"║ "CYN"Example:"PN"                 ║                       ║\n");
printf(PN"║ "RE"printf(\"\\033[48;5;9m\")\;  "PN"║                       ║\n");
printf(PN"║ "RE"printf(\"<space>\")\;       "PN"║        "BRED"     "PN"\033[48;5;232m          ║\n");
printf(PN"║ "RE"printf(\"\\033[0m\")\;       "PN"║                       ║\n");
printf(PN"║                          ║                       ║\n");
printf(PN"║                          ║                       ║\n");
printf(PN"╚══════════════════════════╩═══════════════════════╝\n`");



char emdod[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/menuload.sh");
printf(" \n");
system(command);

break;

      case 3:



printf(" \n");
char cmdd[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/backco");
printf(" \n");
system(command);


char mldod[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/menuload.sh");
printf(" \n");
system(command);

break;

case 99:
printf(" \n");
char mdd[50];
strcpy(command, "KO=`pwd` && bash $KO/modules/update.sh");
printf(" \n");
system(command);
break;

case 100:
printf("  \n");
system("KO=`pwd` && python2 $KO/modules/ban.py");
system("OK=`pwd` && bash $OK/modules/cb.sh");



break;


default :

printf(RED"invalid input");

break;

}



}

