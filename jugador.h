#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED


struct _Jugador;

typedef struct _Jugador * Jugador;


/// Setters

void setNombreJugador(Jugador jugador, char nuevoNombre[30]);
void setNumeroCamisetaJugador(Jugador jugador, int nuevoNumeroCamiseta);
void setPuntajeJugador(Jugador jugador, float nuevoPuntaje);

/// Getters

char * getNombreJugador(Jugador jugador);
int getCamiseta(Jugador jugador);

/// Funciones del jugador

Jugador inicializarJugador();
Jugador cargarJugador();

void mostrarJugador(Jugador jugador);




#endif // JUGADOR_H_INCLUDED
