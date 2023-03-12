#!/bin/bash
gcc -wall -pedatric -Werrror -Wextra -c *.c
ar -rc liball.a *.o
