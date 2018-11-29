#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* fp;
	char name[100];
	
	//printf,scanf
	printf("분석하고자 하는 파일 이름을 입력하세요. : ");
	scanf("%s",name);

	//fopen
	fp=fopen(name,"r");
	
	//error handling
	if( fp == NULL)
	{
		printf("ERROR! check the file name : %s\n",name);
		return -1;
	}
	printf("%c\n",fgetc(fp));
	
	//fclose
	fclose(fp);
	return 0;
}
