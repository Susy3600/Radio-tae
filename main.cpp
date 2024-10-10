#include <iostream>
using namespace std;
int main()
{
    int opcion, clave;
    float a,b,c;
    cout<<"*** BANCO TAE ***\n";
    cout<<"*** BIENVENIDOS***\n";
    cout<<"1. CONSULTA DE SALDO\n";
    cout<<"2. DEPOSITO\n";
    cout<<"3. RETIROS\n";
    cout<<"4. RECARGA DE SALDO\n";
    cout<<"5. PAGO DE SERVICIOS\n";
    cout<<"seleccions una opsion\n";
    cin>>opcion;
    if (opcion== 1)
    {
        cout<<"*** BIENVENIDOS A ***\n";
        cout<<"CONSULTA DE SALDO\n";
        cout<<"Por favor ingresa tu clave:";
        cin>>clave;
        if (clave==1234)
        {
            cout<<"*** TU SALDO ES DE $5,000,000.00\n";
        }
        else
        {
            cout<<"*** ES TU CLAVE\n";
        }
    }
    return 0;
    
    
    
    
    
    
    
}