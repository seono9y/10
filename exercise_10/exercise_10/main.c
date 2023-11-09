//
//  main.c
//  exercise_10
//
//  Created by 추서연 on 2023/11/09.
//

#include <stdio.h>

int main(void) {
    FILE *file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        char word[50];
        printf("input a word: ");
        scanf("%s", word);
        fprintf(file, "%s\n", word);
    }

    fclose(file);

    return 0;
}
