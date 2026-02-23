#include <iostream>
#include <windows.h>
using namespace std; 


    void menu()
    {
    cout<<"Calculadora "<<endl; 
	cout<<"1. Suma "<<endl; 
	cout<<"2. Resta "<<endl; 
	cout<<"3. Multiplicacion "<<endl; 
	cout<<"4. division "<<endl; 
	cout<<"5. Salir"<<endl; 
	
	}

	float sumar(float a, float b)
	{
		return a+b; 
	}
		float restar(float a, float b)
	{
		return a-b; 
	}
		float multiplicar(float a, float b)
	{
		return a*b; 
	}
		float dividir(float a, float b)
	{
		if(b==0)
		{
			cout<<"Error: no se puede dividir entre 0.";
			return 0; 
		}
		return a/b; 
	}
	
	int main ()
	{
	
	 
	float x, y, rdo; 
	int opc;
	
	cout<<"Ingrese el primer numero: "; cin>>x; 
	cout<<"Ingrese el segundo numero: "; cin>>y; 
	
	 system("cls"); 
	 
	do
	{  
	   
	    system ("cls"); 
		cout<<endl<<"Los numeros son "<<x<<" y "<<y<<endl<<endl;
		
		menu(); 
		cout<<endl; 
	
	 
	    cout<<endl<<"Ingrese una operacion para realizar: "; 
		cin>>opc; 
		
		switch (opc)
		{
			case 1:
				{
					
			     	rdo=sumar (x,y); 
			     	cout << "\nResultado: " << rdo;
                    Sleep(3000);
				    break;
				}
			case 2:
				{
					rdo=restar (x,y);
					cout << "\nResultado: " << rdo;
                    Sleep(3000); 
					break; 
				}
			case 3:
				{
					rdo=multiplicar (x,y); 
					cout << "\nResultado: " << rdo;
                    Sleep(3000);
					break; 
				}
			case 4:
				{
					rdo=dividir (x,y); 
					cout << "\nResultado: " << rdo;
                    Sleep(3000);
					break; 
				}
		
	
            case 5:
                cout << "Saliendo...";
                Sleep(2000);
                break;
				
			default:
                 cout << "\nOpcion invalida.";
                 Sleep(2000);
                 break;
		}
		
		
	   
		
	} while (opc!=5); 
	
	return 0;
}
