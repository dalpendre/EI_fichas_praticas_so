#!/usr/bin/env bash

gcc -c -Wall -W *.c

#-lm -> linkar com libm.a para funções matemáticas
gcc -o lab3 *.o -lm