#include <iostream>

int main() {
    int num_hijos, edad_hijo;
    char madre_viuda;

    // Lee el número de hijos
    std::cout << "Ingrese el número de hijos: ";
    std::cin >> num_hijos;

    // Inicializa el monto base
    double monto = 0.0;

    // Lee la edad de cada hijo y verifica cuántos están en edad escolar
    for (int i = 1; i <= num_hijos; ++i) {
        std::cout << "Ingrese la edad del hijo " << i << ": ";
        std::cin >> edad_hijo;

        if (edad_hijo >= 6 && edad_hijo <= 18) {
            monto += 10.0; // Agrega S/. 10.00 por cada hijo en edad escolar
        }
    }

    // Pregunta si la madre es viuda
    std::cout << "¿La madre de familia es viuda? (S/N): ";
    std::cin >> madre_viuda;

    if (madre_viuda == 'S' || madre_viuda == 's') {
        monto += 20.0; // Agrega S/. 20.00 si la madre es viuda
    }

    // Calcula el monto base según la cantidad de hijos
    if (num_hijos <= 2) {
        monto += 70.0; // Familias con hasta 2 hijos
    } else if (num_hijos >= 3 && num_hijos <= 5) {
        monto += 90.0; // Familias con 3 a 5 hijos
    } else {
        monto += 120.0; // Familias con 6 o más hijos
    }

    // Muestra el monto total que la familia recibirá
    std::cout << "El monto mensual que la familia recibirá es: S/. " << monto << std::endl;

    return 0;
}
