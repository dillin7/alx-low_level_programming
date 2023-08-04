#!/bin/bash
gcc -wall -pedantic -werror -c *.c
ar cr liball.a *.o
