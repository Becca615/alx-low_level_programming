#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
<<<<<<< HEAD
ar -rc liball.a *.o
=======
ar -rc liball.a *.o
ranlib liball.a
>>>>>>> 3b117ff5b83097fb0b4148efddb8fe552c939230
