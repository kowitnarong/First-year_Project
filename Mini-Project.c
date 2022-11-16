#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)


void main (){
	printf ("\n\n");
	textcolor(14,0);
	printf ("###################################################################################################\n");
	printf ("##  **  **  **   *******   **  **       ***    **    **   *****      **      *******   **    **  ##\n");
	printf ("##  **  **  **   **        **  **     **   **  ****  **   **   **    **      **   **   **    **  ##\n");
	printf ("##  ******  **   **  ***   ******     *******  ** ** **   **   **    **      **   **   **    **  ##\n");
	printf ("##  **  **  **   **   **   **  **     **   **  **  ****   **   **    **      **   **   ** ** **  ##\n");
	printf ("##  **  **  **   *******   **  **     **   **  **   ***   ******     ******  *******   ***  ***  ##\n");
	printf ("###################################################################################################\n");
	resetcolor();
	printf ("\n\n");
	textcolor(12,0);
	printf ("Rules\n");
	printf ("1. Enter the number of players before starting the game.\n");
	printf ("2. There are 2 random times.\n");
	printf ("3. Choose H (High) or L (Low)\n");
	printf ("4. If the total is more than 6 is High\n");
	printf ("5. If the total is less than or equal 6 is Low\n");
	printf ("6. Start HP equal 4\n");
	printf ("7. When HP - 1, If you can answer of multiply. Your HP + 1\n");
	printf ("8. If your HP equal 0, you lose. The person who left the last HP will wins.\n\n");
	resetcolor();
	printf ("##############################################################################################\n");
	textcolor(9,0);
	printf ("\nSTART GAME\n\n");
	resetcolor();
	
	
	int count;
	char opt1[100], opt2[100];
	int n1, n2, ran1, ran2;
	int i, j, k, l, z, x=0, a, b, d, f, e, v, y , mat1;
	int re1, re2, re3;
	int loop=0, loop1=0, loop3=0, loop4=0, loop5=0, loop6=0;
	int playscore[100];
	char player[100];
	char hl;
	
	while (loop5 == 0) {
	printf ("Enter count of player ( more than 1 ): ");
	scanf ("%d", &count);
	if (count >= 2 && count <= 1000000) {
		loop5 = 1;
	}
	else {
		textcolor(9,0);
		printf ("\nPlease enter again.\n\n");
		resetcolor();
	}
	}
	printf ("\n");
	for (i=0 ; i<count ; i++) {
		do {
		loop = 0;
		printf ("Player %d Input \'H\' or \'L\' : ", i+1);
		scanf ("%s", &player[i]);
		if (player[i] == 'h') {
			player[i] = 'H';
		}
		if (player[i] == 'l') {
			player[i] = 'L';
		}
		if (player[i] == 'H' || player[i] == 'L') {
			loop = 1;
		}
	}while (loop == 0);
		playscore[i] = 4;
	}
	printf ("____________________________________________________\n\n");
	
	srand(time(NULL));
	while (loop1 == 0){
	if (x == 1) {
	textcolor(3,0);
	printf ("\n\nCurrent HP :\n\n");
	for (a=0; a<count ;a++) {
		printf ("Player %d : %d HP\n", a+1, playscore[a]);
	}
	resetcolor();
	printf ("\n____________________________________________________\n\n");
	
	for (z=0 ; z<count ; z++) {
		do {
		loop = 0;
		if (playscore[z] != 0) {
		printf ("Player %d Input \'H\' or \'L\' : ", z+1);
		scanf ("%s", &player[z]);
		if (player[z] == 'h') {
			player[z] = 'H';
		}
		if (player[z] == 'l') {
			player[z] = 'L';
		}
		if (player[z] == 'H' || player[z] == 'L') {
			loop = 1;
		}
		}
		if (playscore[z] == 0)
		{
			loop = 1;
		}
	}while (loop == 0);
	}
	printf ("____________________________________________________\n\n");
	}
	textcolor(13,0);
	printf ("\nRound 1\n\n");
	resetcolor();
	loop3 = 0;
	while (loop3 == 0) {
	printf ("If you ready for random number input \'Y\' : ");
	scanf ("%s", &opt1[1]);
	if (opt1[1] == 'Y' || opt1[1] == 'y') {
		ran1 = 1+rand()%(7 - 1);
    	textcolor(14,0);
    	printf("You got number %d\n", ran1);
    	resetcolor();
    	loop3 = 1;
	}
	else{
		textcolor(9,0);
		printf ("\nPlease enter again.\n\n");
		resetcolor();
	}
	}

	n1 = ran1;
	printf ("All random number : %d\n", n1);
	printf ("*****************************************************\n\n");
	textcolor(13,0);
	printf ("\nRound 2\n\n");
	resetcolor();
	loop4 = 0;
	while (loop4 == 0) {
	printf ("If you ready for random number input \'Y\' : ");
	scanf ("%s", &opt2[1]);
	if (opt2[1] == 'Y' || opt2[1] == 'y') {
		ran2 = 1+rand()%(7 - 1);
    	textcolor(14,0);
    	printf("You got number %d\n", ran2);
    	resetcolor();
    	loop4 = 1;
	}
	else{
		textcolor(9,0);
		printf ("\nPlease enter again.\n\n");
		resetcolor();
	}
	}

	n2 = ran2;
	printf ("All random number : %d and %d\n", n1, n2);
	printf ("*****************************************************\n\n");
	
	if (n1+n2 > 6){
		hl = 'H';
		printf ("The result is : %c\n\n", hl);
	}
	if (n1+n2 <=6){
		hl = 'L';
		printf ("The result is : %c\n\n", hl);
	}
	for (j=0 ; j<count ; j++) {
		if (playscore[j] != 0) {
		printf ("Player %d : %c\n", j+1, player[j]);
		printf ("---------------------------------------------------\n\n");
		if (player[j] != hl) {
			playscore[j] = playscore[j] - 1;
		}
	}
	}
	for (l=0 ; l<count ; l++) {
		if (playscore[l] != 0 && playscore[l] > 0) {
		if (player[l] != hl) {
			textcolor(12,0);
			printf ("Player %d : HP - 1\n", l+1);
			mat1 = 1+rand()%(5 - 1);
			switch (mat1) {
				case 1 : re1 = rand()%100;
						 re2 = rand()%100;
						 printf ("\n\t%d + %d = ?\n\n", re1, re2);
						 resetcolor();
						 printf ("Enter your answer : ");
						 scanf ("%d", &re3);
						 if (re3 == re1+re2){
							 textcolor(10,0);
							 printf ("\nCorrect answer HP + 1\n\n");
							 resetcolor();
							 playscore[l] = playscore[l] + 1;
						 }
						 else {
							 textcolor(12,0);
							 printf ("\nAnswer is not correct\n\n");
							 resetcolor();
						 }
						 break;
				case 2 : re1 = rand()%100;
						 re2 = rand()%100;
						 printf ("\n\t%d - %d = ?\n\n", re1, re2);
						 resetcolor();
						 printf ("Enter your answer : ");
						 scanf ("%d", &re3);
						 if (re3 == re1-re2){
							 textcolor(10,0);
							 printf ("\nCorrect answer HP + 1\n\n");
							 resetcolor();
							 playscore[l] = playscore[l] + 1;
						 }
						 else {
							 textcolor(12,0);
							 printf ("\nAnswer is not correct\n\n");
							 resetcolor();
						 }
						 break;
				case 3 : re1 = rand()%100;
						 re2 = rand()%100;
						 printf ("\n\t%d x %d = ?\n\n", re1, re2);
						 resetcolor();
						 printf ("Enter your answer : ");
						 scanf ("%d", &re3);
						 if (re3 == re1*re2){
							 textcolor(10,0);
							 printf ("\nCorrect answer HP + 1\n\n");
							 resetcolor();
							 playscore[l] = playscore[l] + 1;
						 }
						 else {
							 textcolor(12,0);
							 printf ("\nAnswer is not correct\n\n");
							 resetcolor();
						 }
						 break;
				case 4 : loop6 = 0;
						 re1 = rand()%100;
						 re2 = 2+rand()%(8 - 1);
						 while (loop6 == 0) {
						 if (re2 >= re1) {
						 	re2 = rand()%100;
						 	}
						 if (re2 < re1) {
						 	loop6 = 1;
						 	}
						 }
						 printf ("\n\t%d / %d = ?\n\n", re1, re2);
						 resetcolor();
						 printf ("Enter your answer (Don't take decimals) : ");
						 scanf ("%d", &re3);
						 if (re3 == trunc(re1/re2)){
							 textcolor(10,0);
							 printf ("\nCorrect answer HP + 1\n\n");
							 resetcolor();
							 playscore[l] = playscore[l] + 1;
						 }
						 else {
							 textcolor(12,0);
							 printf ("\nAnswer is not correct\n\n");
							 resetcolor();
						 }
						 break;
			}
		}
	}	
		if (playscore[l] == 0) {
			printf ("\n\n---------------------------------------------------\n");
			textcolor(12,0);
			printf ("Player %d : You are lose this game\n", l+1);
			resetcolor();
			printf ("---------------------------------------------------\n\n");
		}
	}
	textcolor(3,0);
	printf ("\n\nCurrent HP :\n\n");
	for (k=0; k<count ;k++) {
		if (playscore[k] != 0) {
		printf ("Player %d : %d HP\n", k+1, playscore[k]);
		}
	}
	resetcolor();
	printf ("\n____________________________________________________\n\n");
	
	for (b=0 ; b<count ; b++){
		f = 0;
		if (b == count-1){
			for (d=0; d<b ; d++){
				if(playscore[d] != 0) {
					f = 1;
				}
			}
			if (playscore[b] > 0 && f != 1) {
				textcolor(14,0);
				printf ("#################################################################\n");
				printf ("##    **     **   ***  **    **  **    **  ******   ******     ##\n");
				printf ("##    **     **   ***  ****  **  ****  **  **       **   **    ##\n");
				printf ("##    **  *  **   ***  ** ** **  ** ** **  ******   ******     ##\n");
				printf ("##    ** *** **   ***  **  ****  **  ****  **       **   **    ##\n");
				printf ("##    ***   ***   ***  **   ***  **   ***  ******   **   **    ##\n");
				printf ("#################################################################\n");
				printf ("\n\n");
				resetcolor();
				textcolor(14,0);
				printf ("Winner is player %d\n", b+1);
				resetcolor();
				printf ("\n****************************************************\n\n");
				loop1 =1;
			}
		}
		if (b != count-1) {
			v = 0;
			for (e=0; e<b ; e++){
				if(playscore[e] != 0) {
					v = 1;
				}
			}
			for (y=b+1; y<count ; y++){
				if(playscore[y] != 0) {
					v = 1;
				}
			}
			if (playscore[b] > 0 && v != 1) {
				textcolor(14,0);
				printf ("#################################################################\n");
				printf ("##    **     **   ***  **    **  **    **  ******   ******     ##\n");
				printf ("##    **     **   ***  ****  **  ****  **  **       **   **    ##\n");
				printf ("##    **  *  **   ***  ** ** **  ** ** **  ******   ******     ##\n");
				printf ("##    ** *** **   ***  **  ****  **  ****  **       **   **    ##\n");
				printf ("##    ***   ***   ***  **   ***  **   ***  ******   **   **    ##\n");
				printf ("#################################################################\n");
				resetcolor();
				printf ("\n\n");
				textcolor(14,0);
				printf ("Winner is player %d\n", b+1);
				resetcolor();
				printf ("\n****************************************************\n\n");
				loop1 =1;
		}
		}
		}
	x = 1;
	printf ("\n\nPress any key for continue\n");
	getch();
	system("cls");
}
}
