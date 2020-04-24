#include <stdio.h>

#include "calculator.h"
#include "args.h"

int main(int argc, char *argv[])
{
    struct gengetopt_args_info args_info;

    cmdline_parser(argc, argv, &args_info);

    float sum = sum(args_info.num1_arg, args_info.num2_arg);

    printf("%i\n", sum);

    cmdline_parser_free(&args_info);

    return 0;
}