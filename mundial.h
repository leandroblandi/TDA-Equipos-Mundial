#ifndef MUNDIAL_H_INCLUDED
#define MUNDIAL_H_INCLUDED

struct _Mundial;

typedef struct _Mundial * Mundial;


/********************************************//**
 * Funciones de Mundial
 ***********************************************/

/// @pre: Ninguna
/// @post: Devuelve un struct Mundial con Equipos y Jugadores cargados
Mundial cargarMundial();

/// @pre: Debe existir 'mundial' y los equipos no contener Jugadores filtrables
/// @post: Devuelve toda la informacion de un vector de Equipos
void mostrarEquipos(Mundial mundial);

/// @pre: Debe existir 'mundial' y los datos de Equipo y Jugadores deben ser correctos
/// @post: Devuelve toda la informacion correspondiente al Mundial, Equipo y Jugadores
void presentarMundial(Mundial mundial);

#endif // MUNDIAL_H_INCLUDED
