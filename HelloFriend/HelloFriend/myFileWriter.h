#pragma once
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

FILE* makeFile(char* fileName) {
	char str[16];
	strcpy(str, fileName);
	strcat(str, ".txt");
	FILE* fp;
	fp = fopen(str, "w+");
	return fp;
}

void writeToFile(FILE* fp, char* body) {
	fprintf_s(fp, body);
}

FILE* appendToFile(char* fileName, char* body) {
	char str[16];
	strcpy(str, fileName);
	strcat(str, ".txt");
	FILE* fp;
	fp = fopen(str, "a+");
	fprintf_s(fp, body);
	return fp;
}

void closeFile(FILE* fp) {
	fclose(fp);
}