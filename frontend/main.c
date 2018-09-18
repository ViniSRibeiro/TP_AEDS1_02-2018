#include <stdlib.h>
#include <time.h>
#include "read_file.h"
#include "interactive.h"

int main(int argc, char **argv) {
    srand((unsigned int) time(NULL));

    if (argc > 1) {
        return parse_file(argv[1]);
    } else {
        return interactive();
    }
}