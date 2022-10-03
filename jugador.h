#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED


struct _Jugador;

typedef struct _Jugador * Jugador;


/********************************************//**
 * Setters
 ***********************************************/

void setNombreJugador(Jugador jugador, char nuevoNombre[30]);
void setNumeroCamisetaJugador(Jugador jugador, int nuevoNumeroCamiseta);
void setPuntajeJugador(Jugador jugador, float nuevoPuntaje);


/********************************************//**
 * Getters
 ***********************************************/

char * getNombreJugador(Jugador jugador);
int getCamiseta(Jugador jugador);


/********************************************//**
 * Funciones de Jugador
 ***********************************************/

 /// @pre: Ninguna
/// @post: Construye y Devuelve un struct jugador con parametros indicados
Jugador creaJugador(char nom[30], int numc,float p);

/// @pre: Ninguna
/// @post: Devuelve un struct jugador vacio (en principio, no se muestra, se filtra)
Jugador inicializarJugador();

/// @pre: Se carga por teclado cada atributo
/// @post: Devuelve un struct _Jugador no filtrable (se muestra correctamente)
Jugador cargarJugador();

/// @pre: Debe existir 'jugador' y no ser filtrable
/// @post: Devuelve toda la informacion de 'jugador'
void mostrarJugador(Jugador jugador);

#endif // JUGADOR_H_INCLUDED
