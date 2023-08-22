#include <stdio.h> //Incluye biblioteca de entrada/salida estándar
//Para convertir temperatura en Fahrenheit a temperatura en Celsius)
float DeGradosFahrenheitAGradosCelsius(float fahrenheit) {//Se declara una función que es DeGradosFahrenheitAGradosCelsius y entre paréntesis float fahrenheit para dar a enteder que la función acepta argumentos o parámetros del tipo float
    return(fahrenheit-32)*5.0/9.0;//Se da que este valor fahrenheit tenga la conversión para volverse celsius mediante una fórmula de operaciones
}
//Para convertir temperatura en Celsius a temperatura en Fahrenheit)
float DeGradosCelsiusAGradosFahrenheit(float celsius) {//Se declara lo mismo pero para celsius
    return(celsius*9.0/5.0)+32;//Se da que este valor celsius tenga la conversión para volverse fahrenheit mediante una fórmula de operaciones
}
int main() {
    float temperatura;//Tendremos un número (float para una cifra en decimales)
    char unidad;//y un caracter especial para la unidad (char para una letra que determine el tipo de unidad)

    printf("Ingresar valor absoluto de la temperatura: ");//Se solicita un número decimal
    scanf("%f", &temperatura);//Se capta un número decimal (%f que es el float temperatura) y se escribe en "temperatura"

    printf("Ingrese la unidad (f para Fahrenheit, c para Celsius): ");//Se solicita una letra f ó c
    scanf(" %c", &unidad);//Se capta una letra f ó c (%c que es el char unidad) y se escribe en "unidad"

    if (unidad=='f') {//Si (if) char unidad está en igualdad (==) con un valor de caracter f entonces...
        float celsius=DeGradosFahrenheitAGradosCelsius(temperatura);//Se establece que el float celsius tenga el valor de la función de conversión de F a C reemplazando a celsius en las operaciones por el valor en decimales que dimos en "temperatura"
        printf("%.2f grados Fahrenheit son %.2f grados Celsius\n", temperatura, celsius);//Imprimimos un indicador de hasta 2 espacios tras el cero que nos muestren el número que le dimos y lo que nos da convertido
    }else if (unidad=='c') {//De otra manera si (if) char unidad está en igualdad (==) con un valor de caracter c entonces...
        float fahrenheit=DeGradosCelsiusAGradosFahrenheit(temperatura);//Se establece que igualmente con F se reemplace a fahrenheit por el número que dimos en las operaciones
        printf("%.2f grados Celsius son %.2f grados Fahrenheit\n", temperatura, fahrenheit);
    }else{
        printf("Unidad no válida. Por favor, ingrese f para Fahrenheit o c para Celsius.\n");//Como tercera variante si no coinicide con las letras f ó c nuestro input, obtendremos un mensaje de error
    }

    return 0;
}

