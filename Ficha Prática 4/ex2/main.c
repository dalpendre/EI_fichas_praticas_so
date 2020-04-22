#include <stdio.h>

#include "conta_letra_v2.h"
#include "args.h"

int main(int argc, char *argv[])
{
    struct gengetopt_args_info args_info;

    int count = conta_letra(args_info.string_arg, args_info.letter_arg);

    return 0;
}