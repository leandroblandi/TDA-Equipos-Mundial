#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED

struct _Equipo;

typedef struct _Equipo * Equipo;

Equipo cargarEquipo();

void mostrarEquipo(Equipo equipo);

void agregarJugador(Equipo equipo);
void ordenarJugadoresPorCamiseta(Equipo equipo);
void modificarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta);
void eliminarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta);

#endif // EQUIPO_H_INCLUDED
