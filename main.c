/*
 * CS 261: Intro project driver
 *
 * Name: Adrien Ponce
 */

#include "p0-intro.h"

#define BUF_SIZE 1024

int main (int argc, char **argv)
{
    // mode flags and arguments
    bool hello = true;
    bool goodbye = false;
    bool cat = false;
    char *cat_fn = NULL;
    // bool triodd = false;
    // int triodd_count = 0;

    // parse command-line flags with getopt()
    int opt;
    while ((opt = getopt(argc, argv, "gc:t:")) != -1) {
        switch(opt) {
            case 'g':
                goodbye = true;
                hello = false;
                break;
            case 'c':
                cat = true;
                hello = false;
                cat_fn = optarg; // save filename
                break;
            case 't':
                // triodd = true;
                hello = false;
                // triodd_count = strtol(optarg, *optarg, 10); // save count
                break;
            default:
                printf("Invalid argument.\n");
                return EXIT_FAILURE;
        }
    }

    // default mode
    if (hello) {
        printf("Hello, world!\n");
    }

    // goodbye mode
    if (goodbye) {
        printf("Goodbye!\n");
    }
    // cat mode
    if (cat) {
        char buffer[BUF_SIZE];
        FILE *file = fopen(cat_fn, "r");
        // checks for valid file (prevents seg fault)
        if (file != NULL) {
            while (fgets(buffer, BUF_SIZE, file) != NULL) {
                // print output line by line
                printf("%s", buffer);
            }
        }  else  {
            printf("Invalid file.\n");
            return EXIT_FAILURE;
        }
    }

    /*
    // triodd mode
    if (triodd)
    {

    }
    */
}
