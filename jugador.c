

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

struct _Jugador
{
    char nombre[30];
    int numeroCamiseta;
    float puntaje;
};


/********************************************//**
 * Setters
 ***********************************************/

void setNombreJugador(Jugador jugador, char nuevoNombre[30])
{
    strcpy(jugador->nombre, nuevoNombre);
}


void setNumeroCamisetaJugador(Jugador jugador, int nuevoNumeroCamiseta)
{
    jugador->numeroCamiseta = nuevoNumeroCamiseta;
}


void setPuntajeJugador(Jugador jugador, float nuevoPuntaje)
{
    jugador->puntaje = nuevoPuntaje;
}


/********************************************//**
 * Getters
 ***********************************************/

char * getNombreJugador(Jugador jugador)
{
    return jugador->nombre;
}


int getCamiseta(Jugador jugador)
{
    return jugador->numeroCamiseta;
}


/********************************************//**
 * Funciones del Jugador
 ***********************************************/

Jugador inicializarJugador()
{
    Jugador jugador = malloc(sizeof(struct _Jugador));

    strcpy(jugador->nombre, "");
    jugador->numeroCamiseta = -1;
    jugador->puntaje = -1;

    return jugador;

}
Jugador cargarJugador()
{
    Jugador jugador = malloc(sizeof(struct _Jugador));

    printf("\nIngrese nombre del jugador: ");
    fflush(stdin);
    gets(jugador->nombre);

    printf("\nIngrese numero de camiseta para %s: ", jugador->nombre);
    scanf("%d", &(jugador->numeroCamiseta));

    printf("\nIngrese puntaje para %s: ", jugador->nombre);
    scanf("%f", &(jugador->puntaje));

    return jugador;
}

void mostrarJugador(Jugador jugador)
{
    if(jugador->numeroCamiseta != -1)
    {
        printf("\nJugador:");
        printf("\n\t- Nombre: %s", jugador->nombre);
        printf("\n\t- Numero de camiseta: %d", jugador->numeroCamiseta);
        printf("\n\t- Puntaje: %.2f", jugador->puntaje);
    }
}
