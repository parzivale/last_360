#include <stdio.h>
#include <dirent.h>

FILE *questions;

int main(int argc, char *argv[]){

    char buffer[255];

    if(argc == 1){
        DIR *dir;
        struct dirent *ent;
        if ((dir = opendir ("c:\\src\\")) != NULL) {
          /* print all the files and directories within directory */
          while ((ent = readdir (dir)) != NULL) {
            printf ("%s\n", ent->d_name);
          }
          closedir (dir);
        } else {
          /* could not open directory */
          perror ("");
        }
    }

    questions = fopen(argv[1], "r");

    while(fgets(buffer, 255, questions) != NULL){
        printf("%s",buffer);
    }

    printf("\n");

    return 0;
}