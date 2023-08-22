
#include <stdio.h>

// Registro con dia d, mes m y año a
struct rep_fecha { unsigned int d; 
 unsigned int m; unsigned int a;
};

void ordenar_fechas(struct rep_fecha fechas[], int n) {  //funcion auxiliar para ordenar las fechas 
  struct rep_fecha aux; 

  for (int i = 0; i < n - 1; i++) { 
    for (int j = 0; j < n - i - 1; j++) {
       if (fechas[j].a > fechas[j+1].a) {
         aux = fechas[j];
         fechas[j] = fechas[j+1]; 
         fechas[j+1] = aux;
          }
       else if (fechas[j].a == fechas[j+1].a) {
         if (fechas[j].m > fechas[j+1].m) {
          aux = fechas[j];
          fechas[j] = fechas[j+1];
          fechas[j+1] = aux;
        }
        else if (fechas[j].m == fechas[j+1].m) {
          if (fechas[j].d > fechas[j+1].d) {
            aux = fechas[j];
            fechas[j] = fechas[j+1];
            fechas[j+1] = aux;
          }
        }
      }
    }
  }
}

int main() {

  struct rep_fecha fechas[3]; //tres ejemplos de fechas para ordenar 

  fechas[0].d = 10;
  fechas[0].m = 10;
  fechas[0].a = 2022;

  fechas[1].d = 15;
  fechas[1].m = 5; 
  fechas[1].a = 2022;

  fechas[2].d = 20;
  fechas[2].m = 11;
  fechas[2].a = 1992;

  ordenar_fechas(fechas, 3);

  for (int i = 0; i < 3; i++) {
    printf("%d/%d/%d\n", fechas[i].d, fechas[i].m, fechas[i].a); 
  }

}
