//
//  main.c
//  find how many letters are in a string
//
//  Created by Desrina Fithriyah Hasyim on 17/03/21.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[999], h;
    int leng, i, sum = 0;
    
    scanf("%[^\n]c", &sentence);
    
    printf("cari huruf : ");
    //printf("%s", sentence);
    scanf("%s", &h);
    //printf("%c", h);
    
    
    leng = strlen(sentence);
    
    for(i = 0; i < leng; i++){
        if (sentence[i] == h){
            sum++;
        }
        else {
            sum = sum + 0;
        }
    }
    
    printf("total huruf %c : %d", h, sum);
    

    return 0;
}
