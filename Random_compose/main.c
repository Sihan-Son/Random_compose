#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Pitch and Tempo.h"


void main() {

	srand(time(NULL));
	int i;
	note sheet[10];
	for (i = 0; i < 10; i++) {
		sheet[i].nPitch = rand() % 25 + 1;
		sheet[i].nTempo = rand() % 6 + 1;
	}

	setPitch(sheet);
	setTempo(sheet);

	char sheetTempo[10];


	
		int tempo;
		tempo = rand() % 6 + 1;

		switch (tempo) {
		case 1:
		{
			sprintf(sheetTempo, "%s", "2 / 4");
			break;
		}
		case 2:
		{
			sprintf(sheetTempo, "%s", "3 / 4");
			break;
		}
		case 3:
		{
			sprintf(sheetTempo, "%s", "4 / 4");
			break;
		}
		case 4:
		{
			sprintf(sheetTempo, "%s", "3 / 8");
			break;
		}
		case 5:
		{
			sprintf(sheetTempo, "%s", "6 / 8");
			break;
		}
		case 6:
		{
			sprintf(sheetTempo, "%s", "9 / 8");
			break;
		}
	}
	
	


	printf("\t♭ 8분 쉼표, ♬ 16분 음표\n");
	printf("\t%s박자\n", sheetTempo);

	for (i = 0; i < 10; i++) {
		printf("\t%3d%12s %12s \n", i + 1, sheet[i].pitch, sheet[i].tempo);
	}
}