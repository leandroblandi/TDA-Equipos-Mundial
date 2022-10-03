#include <stdio.h>
#include <stdlib.h>

#include "mundial.h"

int main()
{
    Mundial mundial = cargarMundial();
    presentarMundial(mundial);

    return 0;
}
