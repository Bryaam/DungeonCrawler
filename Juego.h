/* 
 * File:   Juego.h
 * Author: AlvaroPC
 *
 * Created on June 2, 2015, 5:03 AM
 */

#ifndef JUEGO_H
#define	JUEGO_H
#define MAX 100

#include "Laberinto.h"
#include "GestorLaberinto.h"


class Juego {
private:
    Laberinto laberintoActual;
    void* listaLaberintosAux[MAX];
    Laberinto *listaLaberintos;
    GestorLaberinto gestLab;
    

public:
    Juego();
    void ejecutarComando();

};

#endif	/* JUEGO_H */

