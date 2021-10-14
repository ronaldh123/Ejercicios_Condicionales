#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
//printf("Cantidad de argumentos :%d\n",argc );
int max=0;

for (int i = 0; i < argc; i++) {
if (atoi(argv[i])>max) {
max= atoi(argv[i]);
}
}

printf("El maximo es :%d\n",max );

return 0;
}



