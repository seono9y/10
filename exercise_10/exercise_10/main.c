//
//  main.c
//  exercise_10
//
//  Created by 추서연 on 2023/11/09.
//

#include <stdio.h>

int main(void){
    FILE *fp = NULL;
    char c;
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
        printf("파일을 못열음\n");
    
    while ((c=fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);
}
