
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipo.h"
#include "mundial.h"

#define CANTIDAD_SELECCIONES 2

struct _Mundial
{
    int anio;
    char pais[20];
    Equipo selecciones[CANTIDAD_SELECCIONES];
};

Mundial cargarMundial()
{
    Mundial mundial = malloc(sizeof(struct _Mundial));

    printf("\nIngrese anio para el mundial: ");
    scanf("%d", &(mundial->anio));

    printf("\nIngrese el pais donde se disputara el mundial %d: ", mundial->anio);
    fflush(stdin);
    gets(mundial->pais);

    for(int i = 0; i < CANTIDAD_SELECCIONES; i++)
    {
        mundial->selecciones[i] = cargarEquipo();
    }

    return mundial;
}

void mostrarEquipos(Mundial mundial)
{
    for(int i = 0; i < CANTIDAD_SELECCIONES; i++)
    {
        mostrarEquipo(mundial->selecciones[i]);
    }
}

void presentarMundial(Mundial mundial)
{
    printf("\nMundial %d:", mundial->anio);
    printf("\n\tPais: %s", mundial->pais);
    printf("\n\tCantidad de selecciones convocadas: %d", CANTIDAD_SELECCIONES);

    printf("\n\nSelecciones participantes:");

    mostrarEquipos(mundial);
}


