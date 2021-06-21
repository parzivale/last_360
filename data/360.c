#include <stdio.h>
#include <dirent.h>

FILE *questions;

int main(int argc, char *argv[]){

    char buffer[255];

    if(argc == 1){
      printf("not enough args please include a file to print");
    }

    questions = fopen(argv[1], "r");

    printf("\n");

    while(fgets(buffer, 255, questions) != NULL){
        printf("%s",buffer);
    }

    printf("\n");

    return 0;
}