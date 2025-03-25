#include <stdio.h>

void convertirMoneda(float cantidad, float tasa, const char *monedaDestino) {
    printf("Resultado: %.2f %s\n", cantidad * tasa, monedaDestino);
}

int main() {
    int opcion;
    float cantidad;
    
    printf("Conversor de Monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    printf("Seleccione una opción: ");
    if (scanf("%d", &opcion) != 1) {
        printf("Entrada no válida.\n");
        return 1;
    }
    
    if (opcion < 1 || opcion > 6) {
        printf("Opción no válida.\n");
        return 1;
    }
    
    printf("Ingrese la cantidad a convertir: ");
    if (scanf("%f", &cantidad) != 1) {
        printf("Entrada no válida.\n");
        return 1;
    }
    
    switch (opcion) {
        case 1:
            convertirMoneda(cantidad, 0.13, "USD");
            break;
        case 2:
            convertirMoneda(cantidad, 0.12, "EUR");
            break;
        case 3:
            convertirMoneda(cantidad, 7.80, "GTQ");
            break;
        case 4:
            convertirMoneda(cantidad, 0.92, "EUR");
            break;
        case 5:
            convertirMoneda(cantidad, 8.50, "GTQ");
            break;
        case 6:
            convertirMoneda(cantidad, 1.09, "USD");
            break;
    }
    
    return 0;
}

