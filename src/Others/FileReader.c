/*
 * FileReader.c
 *
 *  Created on: May 4, 2012
 *      Author: option0417
 */
#include "FileReader.h"
#include <locale.h>

int checkEncoding(FILE*);
int checkEncodingUTF8(FILE*);
int checkEncodingUTF16(FILE*);

void showContentUTF16(FILE*);

void showContent(char* filename) {
	printf("Filename : %s\n", filename);
	setlocale(LC_CTYPE, "");
	FILE* file = fopen(filename, "r");
	if (!file) {
		printf("File not exist.\n");
		return;
	} else {
		printf("File Open\n");
		int ch = 0;
		char str[3] = " ";
		switch(checkEncoding(file)) {
		case 8:
			while((ch = fgetc(file)) != EOF) {
				printf("%x ", ch);
			}
			break;
		case 16:
			showContentUTF16(file);
			break;
		default:

//			while((str[0] = fgetc(file)) != EOF) {
//				if ((str[1] = fgetc(file)) != EOF) {
//					printf("%s", str);
//				}
//			}
			while((ch = fgetc(file)) != EOF) {
				printf("%x ", ch);
			}
			break;
		}
		fclose(file);
	}
}

void showContentUTF16(FILE* file) {
	printf("showContentUTF16.\n");
	char str[3] = " ";
	while((str[0] = fgetc(file)) != EOF) {
		if ((str[1] = fgetc(file)) != EOF) {
			printf("%s", str);
		}
	}
//	int i = 0;
//	char* s = "測試";
//	char str[7] = "";
//
//	int c;
//	while ((c = s[i]) != '\0') {
//		//c &= 0x00FF;
//		printf("%x\n", c);
//
//		str[i] = c;
//		i++;
//	}
//	printf("Value : %s\n", str);
//	printf("Length : %d\n", i);
}

int checkEncoding(FILE* file) {
	return checkEncodingUTF8(file) | checkEncodingUTF16(file);
}

int checkEncodingUTF16(FILE* file) {
	switch(fgetc(file)) {
	case 255:
		if (fgetc(file) == 254) {
			printf("UTF-16-Little Endian\n");
			return 16;
		}
		break;
	case 254:
		if (fgetc(file) == 255) {
			printf("UTF-16-Big Endian\n");
			return 16;
		}
		break;
	default:
		break;
	}
	fseek(file, 0, SEEK_SET );
	return 0;
}

int checkEncodingUTF8(FILE* file) {
	if (fgetc(file) == 239) {
		if (fgetc(file) == 187) {
			if (fgetc(file) == 191) {
				printf("UTF-8 with BOM\n");
				return 8;
			}
		}
	}
	fseek(file, 0, SEEK_SET );
	return 0;
}
