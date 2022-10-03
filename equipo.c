
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipo.h"
#include "jugador.h"

#define CANTIDAD_JUGADORES 2


struct _Equipo
{
    char nombre[30];
    int posicion;
    Jugador plantel[CANTIDAD_JUGADORES];
};

/********************************************//**
 * Funciones de Equipo
 ***********************************************/


Equipo cargarEquipo()
{
    Equipo equipo = malloc(sizeof(struct _Equipo));

    printf("\nIngrese nombre para el equipo: ");
    fflush(stdin);
    gets(equipo->nombre);

    printf("\nIngrese posicion en la tabla para '%s': ", equipo->nombre);
    scanf("%d", &(equipo->posicion));

    for(int i = 0; i < CANTIDAD_JUGADORES; i++)
    {
        equipo->plantel[i] = cargarJugador();
    }

    return equipo;
}

void mostrarEquipo(Equipo equipo)
{
    printf("\nEquipo:");
    printf("\n\tNombre: %s", equipo->nombre);
    printf("\n\tPosicion en la tabla: %d", equipo->posicion);

    for(int i = 0; i < CANTIDAD_JUGADORES; i++)
    {
        mostrarJugador(equipo->plantel[i]);
    }
}

// Funcion interna de equipo.c no incluida en equipo.h
/// @pre: Debe existir 'equipo' y 'loQueBusco' debe ser entero
/// @post: Devuelve -1 si no se encuentra 'loQueBusco'; devuelve la posicion deseada si 'loQueBusco' se encontro
int buscarPorCamiseta(Equipo equipo, int loQueBusco)
{
    int posicion = -1;

    for(int i = 0; i < CANTIDAD_JUGADORES; i++)
    {
        if(getCamiseta(equipo->plantel[i]) == loQueBusco)
        {
            posicion = i;
            i = CANTIDAD_JUGADORES;
        }
    }

    return posicion;
}


void agregarJugador(Equipo equipo)
{
    int posicion = buscarPorCamiseta(equipo, -1);

    if(posicion != -1)
    {
       equipo->plantel[posicion] = cargarJugador();
    }
}

void ordenarJugadoresPorCamiseta(Equipo equipo)
{
    Jugador jugadorAuxiliar;

    for(int i = 0; i < CANTIDAD_JUGADORES; i++)
    {
        for(int j = 0; j < CANTIDAD_JUGADORES - 1; j++)
        {
            if(getCamiseta(equipo->plantel[j]) > getCamiseta(equipo->plantel[j+1]))
            {
                jugadorAuxiliar = equipo->plantel[j];
                equipo->plantel[j] = equipo->plantel[j+1];
                equipo->plantel[j+1] = jugadorAuxiliar;
            }
        }
    }
}


void modificarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta)
{

    int posicion = buscarPorCamiseta(equipo, numeroCamiseta);

    if(posicion != -1)
    {
        char nombre[30];
        int numero;
        float puntaje;

        printf("\nIngrese nuevo nombre para %s: ", getNombreJugador(equipo->plantel[posicion]));
        fflush(stdin);
        gets(nombre);

        printf("\nIngrese nuevo numero de camiseta para %s: ", nombre);
        scanf("%d", &numero);

        printf("\nIngrese nuevo puntaje para %s: ", nombre);
        scanf("%f", &puntaje);

        setNombreJugador(equipo->plantel[posicion], nombre);
        setNumeroCamisetaJugador(equipo->plantel[posicion], numero);
        setPuntajeJugador(equipo->plantel[posicion], puntaje);
    }
}



void eliminarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta)
{
    int posicion = buscarPorCamiseta(equipo, numeroCamiseta);

    if(posicion != -1)
    {
        setNombreJugador(equipo->plantel[posicion], "");
        setNumeroCamisetaJugador(equipo->plantel[posicion], -1);
        setPuntajeJugador(equipo->plantel[posicion], -1);
    }
}
