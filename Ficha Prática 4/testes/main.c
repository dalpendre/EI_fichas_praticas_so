#include <stdio.h>
#include <stdlib.h>

#include "args.h"

int main(int argc, char *argv[])
{
    struct gengetopt_args_info args_info;

    cmdline_parser(argc, argv, &args_info);

    printf("%s\n", args_info.name_arg);
    printf("%i\n", args_info.name_given);

    cmdline_parser_free(&args_info);

    return 0;
}