#include "punto.h"
#include <stdio.h>

struct rep_punto {
  double x;
  double y;  
};

Punto crearPunto(double x, double y) {
  Punto p = new rep_punto;
  p->x = x;
  p->y = y;
  return p;
}

double coordX(Punto p) {
  return p->x; 
}

double coordY(Punto p) {
  return p->y;
}