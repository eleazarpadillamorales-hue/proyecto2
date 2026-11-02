#pragma once
#include "NodoBitacora.h" 

//esta seria la ultima muñeca rusa la mas grande o pequeña depende de como lo veas

class ListaBitacora { 
private:
    NodoBitacora* cabeza; 

public:
    ListaBitacora();
    ~ListaBitacora();

    void agregar(RegistroBitacora* nuevoRegistro); 
    void mostrarHistorial() const;
};