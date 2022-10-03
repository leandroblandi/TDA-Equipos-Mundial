#ifndef MUNDIAL_H_INCLUDED
#define MUNDIAL_H_INCLUDED

struct _Mundial;

typedef struct _Mundial * Mundial;

Mundial cargarMundial();

void mostrarEquipos(Mundial mundial);

void presentarMundial(Mundial mundial);

#endif // MUNDIAL_H_INCLUDED
