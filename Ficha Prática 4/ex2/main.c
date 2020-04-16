#include <stdio.h>

#include "args.h"

int main(int argc, char *argv[])
{
    struct gengetopt_args_info args_info;

    if(cmdline_parser(argc, argv, &args_info))
    {
        return 1;
    }

    printf("person: %s\n", args_info.person_arg);
    
    if(args_info.age_given)
    {
        printf("age: %d\n", args_info.age_arg);
    }

    if(args_info.height_given)
    {
        printf("height: %f\n", args_info.height_arg);
    }

    cmdline_parser_free(&args_info);
    return 0;
}