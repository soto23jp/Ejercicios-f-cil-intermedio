#include <iostream>

int main() {
    double numero1, numero2;
    char operacion;

    // Solicita al usuario ingresar los dos números
    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

    // Solicita al usuario elegir una operación
    std::cout << "Elija una operación (+ para suma, - para resta, * para multiplicación, / para división): ";
    std::cin >> operacion;

    // Realiza la operación seleccionada y muestra el resultado
    double resultado;

    switch (operacion) {
        case '+':
            resultado = numero1 + numero2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '-':
            resultado = numero1 - numero2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '*':
            resultado = numero1 * numero2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                std::cout << "Resultado: " << resultado << std::endl;
            } else {
                std::cout << "Error: No se puede dividir por cero." << std::endl;
            }
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
    }

    return 0;
}
