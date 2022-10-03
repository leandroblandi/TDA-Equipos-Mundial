/*
* Clone from Leandro Blandi repository in https://github.com/leandroblandi/EjercicioMundialTDA.git
* Esta es una version adaptada desde el codigo fuente indicado
*
*/

#include <stdio.h>
#include <stdlib.h>

#include "mundial.h"

int main()
{
    Mundial mundial = cargarMundial();
    presentarMundial(mundial);

    return 0;
}
