#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
	int nPitch;
	int nTempo;
	char pitch[10];
	char tempo[10];
}note;

char tempo1[10] = "¢Ý";
char tempo2[10] = "¢Ü";
char tempo3[10] = "¢Û";
char tempo4[10] = "¢Û¢Û";
char tempo5[10] = "¢Ú¢Ú"; //4ºÐ ½°Ç¥
char tempo6[10] = "¢Ú";// 8ºÐ ½°Ç¥

void setTempo(note *a) {
	int i;
	for (i = 0; i < 10; i++) 
	{
		switch (a[i].nTempo) 
		{
		case 1: 
		{
			sprintf(a[i].tempo, "%s", tempo1);
			break;
		}
		case 2: 
		{
			sprintf(a[i].tempo, "%s", tempo2);
			break;
		}
		case 3: 
		{
			sprintf(a[i].tempo, "%s", tempo3);
			break;
		}
		case 4: 
		{
			sprintf(a[i].tempo, "%s", tempo4);
			break;
		}
		case 5: 
		{
			sprintf(a[i].tempo, "%s", tempo5);
			break;
		}
		case 6: 
		{
			sprintf(a[i].tempo, "%s", tempo6);
			break;
		}
		}
	}
}


char pitch1[10] = "C1";
char pitch2[10] = "C1#";
char pitch3[10] = "D1";
char pitch4[10] = "D1#";
char pitch5[10] = "E1";
char pitch6[10] = "F1";
char pitch7[10] = "F1#";
char pitch8[10] = "G1";
char pitch9[10] = "G1#";
char pitch10[10] = "A1";
char pitch11[10] = "A1#";
char pitch12[10] = "B1";

char pitch13[10] = "C2";
char pitch14[10] = "C2#";
char pitch15[10] = "D2";
char pitch16[10] = "D2#";
char pitch17[10] = "E2";
char pitch18[10] = "F2";
char pitch19[10] = "F2#";
char pitch20[10] = "G2";
char pitch21[10] = "G2#";
char pitch22[10] = "A2";
char pitch23[10] = "A2#";
char pitch24[10] = "B2";

char pitch25[10] = "C3";

void setPitch(note *sheet) {
	int i;

	for (i = 0; i < 10; i++) 
	{
		switch (sheet[i].nPitch) 
		{
		case 1: 
		{
			sprintf(sheet[i].pitch, "%s", pitch1);
			break;
		}
		case 2: 
		{
			sprintf(sheet[i].pitch, "%s", pitch2);
			break;
		}
		case 3: 
		{
			sprintf(sheet[i].pitch, "%s", pitch3);
			break;
		}
		case 4: 
		{
			sprintf(sheet[i].pitch, "%s", pitch4);
			break;
		}
		case 5: 
		{
			sprintf(sheet[i].pitch, "%s", pitch5);
			break;
		}
		case 6: 
		{
			sprintf(sheet[i].pitch, "%s", pitch6);
			break;
		}
		case 7: 
		{
			sprintf(sheet[i].pitch, "%s", pitch7);
			break;
		}
		case 8: 
		{
			sprintf(sheet[i].pitch, "%s", pitch8);
			break;
		}
		case 9: 
		{
			sprintf(sheet[i].pitch, "%s", pitch9);
			break;
		}
		case 10: 
		{
			sprintf(sheet[i].pitch, "%s", pitch10);
			break;
		}
		case 11: 
		{
			sprintf(sheet[i].pitch, "%s", pitch11);
			break;
		}
		case 12: 
		{
			sprintf(sheet[i].pitch, "%s", pitch12);
			break;
		}
		case 13: 
		{
			sprintf(sheet[i].pitch, "%s", pitch13);
			break;
		}
		case 14: 
		{
			sprintf(sheet[i].pitch, "%s", pitch14);
			break;
		}
		case 15: 
		{
			sprintf(sheet[i].pitch, "%s", pitch15);
			break;
		}
		case 16: 
		{
			sprintf(sheet[i].pitch, "%s", pitch16);
			break;
		}
		case 17: 
		{
			sprintf(sheet[i].pitch, "%s", pitch17);
			break;
		}
		case 18: 
		{
			sprintf(sheet[i].pitch, "%s", pitch18);
			break;
		}
		case 19: 
		{
			sprintf(sheet[i].pitch, "%s", pitch19);
			break;
		}
		case 20: 
		{
			sprintf(sheet[i].pitch, "%s", pitch20);
			break;
		}
		case 21: 
		{
			sprintf(sheet[i].pitch, "%s", pitch21);
			break;
		}
		case 22: 
		{
			sprintf(sheet[i].pitch, "%s", pitch22);
			break;
		}
		case 23: 
		{
			sprintf(sheet[i].pitch, "%s", pitch23);
			break;
		}
		case 24: 
		{
			sprintf(sheet[i].pitch, "%s", pitch24);
			break;
		}
		case 25: 
		{
			sprintf(sheet[i].pitch, "%s", pitch25);
			break;
		}
		}
	}

}




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
	
	


	printf("\t¢Ú 8ºÐ ½°Ç¥, ¢Ý 16ºÐ À½Ç¥\n");
	printf("\t%s¹ÚÀÚ\n", sheetTempo);

	for (i = 0; i < 10; i++) {
		printf("\t%3d%12s %12s \n", i + 1, sheet[i].pitch, sheet[i].tempo);
	}
}