/*Garcia Juarez Rodrigo
Ejercicio 2
Hacer un algoritmo que me pueda decir la hora.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int h = 0, m = 0, s = 0;

    do /* se generan varios ciclos anidados y los cuales pueden ser FOR, WHILE y DO-WHILE */ 
    {
        do
        {
            do
            {
                printf("La hora es %d:%d:%d\n", h,m,s);
                s = s + 1;
                system("clear");
            } while (s <= 59);
            s = 0;
            m = m + 1;
        } while (m <= 59);
        s = 0;
        m = 0;
        h = h + 1;
    } while (h <= 23);
    
}
