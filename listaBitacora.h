#pragma once
#include "nodoBitacora.h"
#include "listaBitacora.h"


//esta seria la ultima muñeca rusa la mas grande o pequeña depende de como lo veas

class	listaBitacora
{
private:
	nodoBitacora* cabeza;
public:
listaBitacora();
~listaBitacora();
void agregar(registroBitacora*);
void mostrarHistorial();
	};

