#include <stdio.h>

 
 struct rep_fecha {
unsigned int f; // AAAAMMDD
};

void ordenar_fechas(struct rep_fecha fechas[], int n) {
  struct rep_fecha aux;
  
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (fechas[j].f > fechas[j+1].f) {
        aux = fechas[j];
        fechas[j] = fechas[j+1];
        fechas[j+1] = aux;      
      } 
    }
  }
}

void imprimir_fecha(struct rep_fecha f) {
  unsigned int aaaammdd = f.f;
  unsigned int aaa = aaaammdd / 10000;
  unsigned int mm = (aaaammdd / 100) % 100;
  unsigned int dd = aaaammdd % 100;

  printf("%02d/%02d/%04d\n", dd, mm, aaa); 
}

int main() {

  struct rep_fecha fechas[3];

  fechas[0].f = 20221010; // 10/10/2022
  fechas[1].f = 20220515; // 15/05/2022
  fechas[2].f = 19921020; // 20/11/1992

  ordenar_fechas(fechas, 3);

  for (int i = 0; i < 3; i++) {
    imprimir_fecha(fechas[i]);
  }

}
