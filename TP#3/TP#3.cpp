/*---------------Gonzalo Almada, K1091 - 30/04/2015--------------------*/

#include <iostream>

using namespace std;

int main()
{
    int tema, tema2, Matematica=0, Fisica=0, Quimica=0;
    char opcionM1, opcionM2, opcionM3, opcionM4, opcionM5; //Opciones del tema MATEMATICA
    char opcionF1, opcionF2, opcionF3, opcionF4, opcionF5; //Opciones del tema FISICA
    char opcionQ1, opcionQ2, opcionQ3, opcionQ4, opcionQ5; //Opciones del tema QUIMICA

    cout<<"Elija un tema: 1)Matematica 2)Fisica 3)Quimica || Tema: "; cin>>tema; //Elijo un tema
   // cout<<endl;
    cout<<endl;

    //CORREGIR SI TEMA NO ES VALIDO

    if (tema==1) {  //Preguntas de MATEMATICA

                    tema=tema2;

        cout<<"Selecciono el cuestionario de Matematica. Responda las siguientes perguntas:"<<endl;
        cout<<endl;
        cout<<"* Si realizo la operacion 20*5 obtengo: "<<endl;
        cout<<endl;
        cout<<"a)200 || b)100 || c)500 || Respuesta: "; cin>>opcionM1;
        cout<<endl;
            if(opcionM1=='b') Matematica=Matematica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* El teorema de Pitagoras expresa que: "<<endl;
        cout<<endl;
        cout<<"a)a2=b+c || b)a2=(b+c)2 || c)a2=b2+c2 || Respuesta: "; cin>>opcionM2;
        cout<<endl;
            if(opcionM2=='c') Matematica=Matematica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* En un triangulo escaleno, sus lados son: "<<endl;
        cout<<endl;
        cout<<"a)Todos iguales || b)Dos iguales, uno distinto || c)Todos distintos || Respuesta: "; cin>>opcionM3;;
        cout<<endl;
            if(opcionM3=='c') Matematica=Matematica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* Los angulos de un triangulo suman 180 grados cuando: "<<endl;
        cout<<endl;
        cout<<"a)Siempre || b)Es equilatero || c)Nunca, suman 360 grados || Respuesta: "; cin>>opcionM4;
        cout<<endl;
            if(opcionM4=='a') Matematica=Matematica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* La formula del area de un paralelogramo es: "<<endl;
        cout<<endl;
        cout<<"a)A=B*h || b)A=(B*h)/2 || c)A=(B*h)*2 || (B=base; h=altura) || Respuesta: "; cin>>opcionM5;
        cout<<endl;
            if(opcionM5=='a') Matematica=Matematica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"Su resultado en la evaluacion de MATEMATICA fue: "<<Matematica<<endl;
        cout<<endl;
    }

    if (tema==2) {  //Preguntas de FISICA

                    tema=tema2;

        cout<<"Selectiono el cuestionario de Fisica. Responda las siguientes perguntas:"<<endl;
        cout<<endl;
        cout<<"* En MRU la velocidad es: "<<endl;
        cout<<endl;
        cout<<"a)Constante|| b)Variable || c)Depende del enunciado || Respuesta: "; cin>>opcionF1;
        cout<<endl;
            if(opcionF1=='a') Fisica=Fisica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* En un MRU, la grafica de posicion en funcion del tiempo es: "<<endl;
        cout<<endl;
        cout<<"a)Una parabola || b)Lineal || c)Exponencial || Respuesta: "; cin>>opcionF2;
        cout<<endl;
            if(opcionF2=='b') Fisica=Fisica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* El volumen es una magnitud: "<<endl;
        cout<<endl;
        cout<<"a)Escalar y Vectorial || b)Vectorial || c)Escalar || Respuesta: "; cin>>opcionF3;;
        cout<<endl;
            if(opcionF3=='c') Fisica=Fisica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* La velocidad es una magnitud: "<<endl;
        cout<<endl;
        cout<<"a)Escalar || b)Vectorial || c)Escalar y Vectorial || Respuesta: "; cin>>opcionF4;
        cout<<endl;
            if(opcionF4=='b') Fisica=Fisica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* La rapidez es una magnitud: "<<endl;
        cout<<endl;
        cout<<"a)Vectorial || b)Escalar || c)Ninguna de las anteriores || Respuesta: "; cin>>opcionF5;
        cout<<endl;
            if(opcionF5=='b') Fisica=Fisica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"Su resultado en la evaluacion de FISICA fue: "<<Fisica<<endl;
        cout<<endl;
    }

    if (tema==3) {  //Preguntas de QUIMICA

                    tema=tema2;

        cout<<"Selecciono el cuestionario de Quimica. Responda las siguientes perguntas:"<<endl;
        cout<<endl;
        cout<<"* La masa de un atomo depende de: "<<endl;
        cout<<endl;
        cout<<"a)Protones || b)Neutrones || c)Ambos || Respuesta: "; cin>>opcionQ1;
        cout<<endl;
            if(opcionQ1=='c') Quimica=Quimica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* El nombre correcto para el siguiente compuesto Mn(OH)2 es: "<<endl;
        cout<<endl;
        cout<<"a)Hidroxido de Magnesio || b)Oxido de Magnesio || c)Ninguna de las anteriores || Respuesta: "; cin>>opcionQ2;
        cout<<endl;
            if(opcionQ2=='a') Quimica=Quimica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* Segun el Sistema Internacional de Unidades, la forma de expresar 50 kilogramos es: "<<endl;
        cout<<endl;
        cout<<"a)50Kgs || b)50Kg. || c)50Kg || Respuesta: "; cin>>opcionQ3;;
        cout<<endl;
            if(opcionQ3=='c') Quimica=Quimica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* El elemento mas abundante en el universo es: "<<endl;
        cout<<endl;
        cout<<"a)Hidrogeno || b)Oxigeno || c)Carbono || Respuesta: "; cin>>opcionQ4;
        cout<<endl;
            if(opcionQ4=='a') Quimica=Quimica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"* El agua es: "<<endl;
        cout<<endl;
        cout<<"a)Un compuesto || b)Un elemento || c)Una mezcla de ambos || Respuesta: "; cin>>opcionQ5;
        cout<<endl;
            if(opcionQ5=='b') Quimica=Quimica+2; //Si la opción es correcta, sumo 2 al puntaje

        cout<<"Su resultado en la evaluacion de QUIMICA fue: "<<Quimica<<endl;
        cout<<endl;
    }

        cout<<"Gracias por participar!!";
        cout<<endl;

}
