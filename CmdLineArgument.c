#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {
    int i;

    for (i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i,argv[i]);
    }
}
//This code related to Command line argument code