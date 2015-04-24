#include <iostream>

using namespace std;

int main()
{
    int a=26;
    int b=24;

    char vocal = 'e';
    char ejemploch [4];
    char ejemploch2 [6];
    char* vocales = "a,e,i,o,u";
    bool verdad; //True = 1; False = 0;
    float x = 256.5;
    double y = 0.26;
    string (ejstring);

    verdad=a>b;

    ejstring="Algoritmos y Estructuras de datos";

    cout<<"Ejemplo de int : " << a << endl;
    cout<<"Ejemplo de char : " << vocal << endl;
    cout<<"Ejemplo de char* : " << vocales << endl;
    cout<<"Ejemplo de bool (V=1, F=0) : "<< verdad << endl;
    cout<<"Ejemplo de float : "<< x << endl;
    cout<<"Ejemplo de double : "<< y << endl;
    cout<<"Ejemplo de string : "<< ejstring << endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"<<Operaciones con int>>"<<endl;
    cout<<endl;

    cout<<"Suma (a+b) : " << a+b << endl;
    cout<<"Resta (a-b) : " << a-b << endl;
    cout<<"Multiplicacion (a*b) : " << a*b << endl;
    cout<<"Division (a/b) : " << a/b << endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"<<Ejemplo de char>>"<<endl;
    cout<<endl;

    ejemploch[0]='A';
    ejemploch[1]='E';
    ejemploch[2]='D';

    ejemploch2[0]='K';
    ejemploch2[1]='1';
    ejemploch2[2]='0';
    ejemploch2[3]='9';
    ejemploch2[4]='1';

    cout<<ejemploch<<" "<<ejemploch2<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"<<Operaciones con float/double>>"<<endl;
    cout<<endl;

    cout<<"Suma (x+y): " << x+y << endl;
    cout<<"Resta (x-y) : " << x-y << endl;
    cout<<"Multiplicacion (x*y) : " << x*y << endl;
    cout<<"Division (x/y) : " << x/y << endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"<<Ejemplo de String>>"<<endl;
    cout<<endl;

    ejstring = "Soy Gonzalo Almada del K1091";

    cout<<ejstring<<endl;

    return 0;
}
