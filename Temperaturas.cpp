#include <stdio.h> //Incluye biblioteca de entrada/salida est�ndar
//Para convertir temperatura en Fahrenheit a temperatura en Celsius)
float DeGradosFahrenheitAGradosCelsius(float fahrenheit) {//Se declara una funci�n que es DeGradosFahrenheitAGradosCelsius y entre par�ntesis float fahrenheit para dar a enteder que la funci�n acepta argumentos o par�metros del tipo float
    return(fahrenheit-32)*5.0/9.0;//Se da que este valor fahrenheit tenga la conversi�n para volverse celsius mediante una f�rmula de operaciones
}
//Para convertir temperatura en Celsius a temperatura en Fahrenheit)
float DeGradosCelsiusAGradosFahrenheit(float celsius) {//Se declara lo mismo pero para celsius
    return(celsius*9.0/5.0)+32;//Se da que este valor celsius tenga la conversi�n para volverse fahrenheit mediante una f�rmula de operaciones
}
int main() {
    float temperatura;//Tendremos un n�mero (float para una cifra en decimales)
    char unidad;//y un caracter especial para la unidad (char para una letra que determine el tipo de unidad)

    printf("Ingresar valor absoluto de la temperatura: ");//Se solicita un n�mero decimal
    scanf("%f", &temperatura);//Se capta un n�mero decimal (%f que es el float temperatura) y se escribe en "temperatura"

    printf("Ingrese la unidad (f para Fahrenheit, c para Celsius): ");//Se solicita una letra f � c
    scanf(" %c", &unidad);//Se capta una letra f � c (%c que es el char unidad) y se escribe en "unidad"

    if (unidad=='f') {//Si (if) char unidad est� en igualdad (==) con un valor de caracter f entonces...
        float celsius=DeGradosFahrenheitAGradosCelsius(temperatura);//Se establece que el float celsius tenga el valor de la funci�n de conversi�n de F a C reemplazando a celsius en las operaciones por el valor en decimales que dimos en "temperatura"
        printf("%.2f grados Fahrenheit son %.2f grados Celsius\n", temperatura, celsius);//Imprimimos un indicador de hasta 2 espacios tras el cero que nos muestren el n�mero que le dimos y lo que nos da convertido
    }else if (unidad=='c') {//De otra manera si (if) char unidad est� en igualdad (==) con un valor de caracter c entonces...
        float fahrenheit=DeGradosCelsiusAGradosFahrenheit(temperatura);//Se establece que igualmente con F se reemplace a fahrenheit por el n�mero que dimos en las operaciones
        printf("%.2f grados Celsius son %.2f grados Fahrenheit\n", temperatura, fahrenheit);
    }else{
        printf("Unidad no v�lida. Por favor, ingrese f para Fahrenheit o c para Celsius.\n");//Como tercera variante si no coinicide con las letras f � c nuestro input, obtendremos un mensaje de error
    }

    return 0;
}

