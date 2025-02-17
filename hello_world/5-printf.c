#!/bin/bash
echo '#include <stdio.h>\nint main(void) { puts("with proper grammar, but the outcome is a piece of art,"); return 0; }' > program.c && gcc -Wall program.c -o program && ./program
