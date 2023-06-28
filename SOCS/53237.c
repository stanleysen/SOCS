#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (){

    char word[10001];
    scanf("%[^\n]",word);


    int i;
    for(i = 0; i < strlen(word); i++){
        if(word[i] == 'I' || word[i] == 'i'){
            word[i] = '1';
        } else if(word[i] == 'R' || word[i] == 'r'){
            word[i] = '2';
        } else if(word[i] == 'E' || word[i] == 'e'){
            word[i] = '3';
        } else if(word[i] == 'A' || word[i] == 'a'){
            word[i] = '4';
        } else if(word[i] == 'S' || word[i] == 's'){
            word[i] = '5';
        } else if(word[i] == 'G' || word[i] == 'g'){
            word[i] = '6';
        } else if(word[i] == 'T' || word[i] == 't'){
            word[i] = '7';
        } else if(word[i] == 'B' || word[i] == 'b'){
            word[i] = '8';
        } else if(word[i] == 'P' || word[i] == 'p'){
            word[i] = '9';
        } else if(word[i] == 'O' || word[i] == 'o'){
            word[i] = '0';
        }
    }

    int j;
    for(j = 0; j < strlen(word); j++){
        word[j] = toupper(word[j]);
    }

    printf("%s\n", word);
}