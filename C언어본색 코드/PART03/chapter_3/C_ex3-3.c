//
//  main.c
//  testProject
//
//  Created by Sung Tae Ryu on 12. 2. 26..
//  Copyright (c) 2012년 thinksquare. All rights reserved.
//

#include <stdio.h>


int main()
{
    char array1[50];
    char array2[50];
    int i, j, k;
    FILE* stream1;
    FILE* stream2;
    
    char input;
    
    stream1 = fopen("source.txt", "r");
    stream2 = fopen("dest.txt", "w");
    
    for (i=0; i<50; i++) {
        array1[i] = 0;
        array2[i] = 0;
    }
    
    for(i=0; input != EOF; i++) {
        input = fgetc(stream1);
        
        array1[i] = input;
    }
    
    array1[i-1] = '\0';
    
    
    k = 0;
    
    for(j=0; j<i-1; j++) {
        if((j%5 == 0 && j >= 5)) {
            k += 10;
            
            if(i-2-j < 5) {
                k -= 4-(i-2-j);
            } 
            
            printf("-------------\n");
        }
        
        array2[j] = array1[4+k-j];
        printf("[%d/%d] <- %c\n", j, i-2, array1[4+k-j]);
    }
    
    printf("%s\n", array1);
    printf("%s", array2);
    
    fprintf(stream2, "%s", array2);
    
    fclose(stream1);
    fclose(stream2);
    return 0;
}