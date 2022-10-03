#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED

struct _Equipo;

typedef struct _Equipo * Equipo;


/********************************************//**
 * Funciones de Equipo
 ***********************************************/

/// @pre: Debe existir 'equipo'
/// @post: Devuelve un Equipo con jugadores cargados mediante teclado (se puede cambiar por inicializarJugador())
Equipo cargarEquipo();

/// @pre: El equipo debe estar incializado
/// @post: Devuelve toda la informacion del equipo
void mostrarEquipo(Equipo equipo);

/// @pre: Debe exister 'equipo' y tener espacio libre (si no hay, no hace nada)
/// @post: Agrega un struct _Jugador en la posicion libre
void agregarJugador(Equipo equipo);

/// @pre: Debe existir 'equipo' y contener jugadores cargados
/// @post: Ordena por numero de camiseta
void ordenarJugadoresPorCamiseta(Equipo equipo);

/// @pre: Debe existir 'equipo' y el jugador con el numero de camiseta
/// @post: Se sobreescriben los datos del struct existente por los ingresados nuevamente
void modificarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta);

/// @pre: Debe existir 'equipo' y el jugador con el numero de camiseta
/// @post: Vacia el struct en la posicion que corresponda al que se haya eliminado
void eliminarJugadorPorCamiseta(Equipo equipo, int numeroCamiseta);

#endif // EQUIPO_H_INCLUDED
