/*
* C-Programm mit unendlichem Loop
*
* Idee: zeigt Maschinenbefehle, Assemblercode von einfachem Programm. *
* 03.10.2014 BFH-TI, hans.roethlisberger@bfh.ch
*/
#include <stdio.h>

int main()
{
    int i = 0;
    printf("\nPID: %d\n", 1);

    for (; ; i++);
    return 0;
}
