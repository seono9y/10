//
//  main.c
//  exercise_10
//
//  Created by 추서연 on 2023/11/09.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    strcpy(dst, src);
    
    printf("copied string : %s", dst);
}
