/*---------------Gonzalo Almada, K1091 - 22/04/2015--------------------*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    string (c);

    cout<<"* Ejemplo con OR (Indico si alguno de los numeros ingresados es par o impar):"<<endl;
    cout<<endl;
    cout<<"* Ejemplo con AND y NOT (Indico si los numeros ingresados son iguales, y cuantos digitos tienen):"<<endl;
    cout<<endl;
    cout<<"* Segundo Ejemplo con AND y NOT (Indico si los numeros ingresados son iguales, y si son par o impar):"<<endl;
    cout<<endl;

    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Ingrese el valor A (entre 1 y 99)"<<endl;
    cin>>a;
    cout<<endl;

    cout<<"Ingrese el valor B (entre 1 y 99)"<<endl;
    cin>>b;
    cout<<endl;

    if((a==0)||(a>>99)){cout<<"Ingresar un valor valido de A:"<<endl; cin>>a;}
    if((b==0)||(b>>99)){cout<<"Ingresar un valor valido de B:"<<endl; cin>>b;}

    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<endl;

   /*------------------Ejemplo con OR-------------------*/

    cout<<"* Ejemplo con OR: "<<endl;
    cout<<endl;

    if((a%2==0)||(b%2==0))c="A o B es par";

        else {c="A o B es impar";}

    cout<<c<<endl;
    cout<<endl;

   /*------------------Ejemplo con AND y NOT-------------------*/

    cout<<"* Ejemplo con AND y NOT: "<<endl;
    cout<<endl;

    if ((a==b)&&(b<=9)) c="A y B son iguales, y tienen un digito";

        else { if ((a==b)&&(a>9)) c="A y B son iguales, y tienen dos digitos";

               if ((a!=b)&&(a<=9)&&(b<=9)) c="A y B son distintos, y ambos tienen un digito";
               if ((a!=b)&&(a>9)&&(b>9)) c="A y B son distintos, y ambos tienen dos digitos";

               if ((a!=b)&&(a<=9)&&(b>9)) c="A y B son distintos, A tiene un digito B dos";
               if ((a!=b)&&(a>9)&&(b<=9)) c="A y B son distintos, A tiene dos digitos y B uno";
        }

    cout<<c<<endl;
    cout<<endl;

   /*------------------Segundo Ejemplo con AND y NOT-------------------*/

    cout<<"* Segundo Ejemplo con AND y NOT: "<<endl;
    cout<<endl;

    if ((a!=b)&&(a%2==0)) c="A y B son distintos, y A es par";

        else {
              if ((a!=b)&&(a%2==0)&&(b%2==0)) c="A y B son distintos, y ambos son pares";
              if ((a!=b)&&(a%2!=0)) c="A y B son distintos, y A es impar";
              if ((a!=b)&&(b%2==0)) c="A y B son distintos, y B es par";
              if ((a!=b)&&(b%2!=0)) c="A y B son distintos, y B es impar";
              if ((a!=b)&&(b%2!=0)&&(a%2!=0)) c="A y B son distintos, y ambos son impares";

              if ((a==b)&&(a%2==0)&&(b%2==0)) c="A y B son iguales, y ambos son pares";

        }

    cout<<c<<endl;

    return 0;
}
