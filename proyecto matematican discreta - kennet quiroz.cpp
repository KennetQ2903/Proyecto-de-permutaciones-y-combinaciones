/*
UNIVERSIDAD MARIANO GÁLVEZ DE GUATEMALA
INGENIERIA EN SISTEMAS PLAN DOMINGO
MATEMATICA DISCRETA
PROYECTO DE PERMUTACIONES Y COMBINACIONES
KENNET JORSHOA ORTEGA QUIROZ
CARNÉ: 6691-21-8308 
*/

#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int opcion = 0; //variable global para el menu

//------------------------------------------------------APARTADO DE FACTORIAL-----------------------------------------------------------------------------------------
long double factorial(long double num)
{	long double resultado = 1;
	for(int i = 1; i <= num; i++)
	{
		resultado = resultado * i;	
	}
	return resultado;
}

//-----------------------------------------------------APARTADO DE ENCABEZADOS---------------------------------------------------------------------------------------

void combinacionRepetida(int i)
{
	cout<<"------------------------------------------------[ COMBINACION NUMERO "<<i<<" ]---------------------------------------------"<<endl;
}
void permutacionRepetida(int i)
{
	cout<<"------------------------------------------------[ PERMUTACION NUMERO "<<i<<" ]---------------------------------------------"<<endl;
}
void encabezadoPermutacion()
{
	cout<<"-------------------------------------------------[ PERMUTACIONES ]-----------------------------------------------------"<<endl;
}
void encabezadoCombinacion()
{
	cout<<"-------------------------------------------------[ COMBINACIONES ]-----------------------------------------------------"<<endl;
}





//------------------------------------------------------APARTADO DE PERMUTACIONES-----------------------------------------------------------------------------------

long double permutacionSinRepeticion(int replay, int o2)
{
	long double n, r, R, ob, sn, resultado, sn2, rest, sum, resultadoBack;
	
	if(o2 > 1 && o2 < 5)
	{
		resultadoBack = 0;
	}
	if(o2 == 1)
	{
		resultadoBack = 1;
	}
	
	for(int i = 1; i <= replay; i++)
	{
		if(replay > 1)
		{
			system("CLS");
    		permutacionRepetida(i);
		}
		cout<<"-------------------------------------------[ PERMUTACIONES SIN REPETICION ]---------------------------------------------"<<endl;
		cout<<"introduzca el valor de elementos totales (n)"<<endl;
		cin>>n;
		cout<<"Introduzca el valor de elementos a elegir (r)"<<endl;
		cin>>r;
		x:
		cout<<"Su operacion tiene algun elemento obligatorio?\n1.SI\n2.NO"<<endl;
		cin>>sn;
		system("CLS");
		
		cout<<"Su operacion tiene algun elemento que deba restarse o sumarse?\n1.Sumarse\n2.Restarse\n3.No"<<endl;
		cin>>sn2;
		system("CLS");
		
		if(sn == 1)
		{
			cout<<"Introduzca la cantidad obligatoria"<<endl;
			cin>>ob;
			n = n - ob;
			r = r - ob;
			
			R = (n - r);
			n = factorial(n); // sacamos los valores de n y r factorial
			R = factorial(R);
			
			resultado = n / R;
		}
		else if(sn == 2)
		{
			R = (n - r);
			n = factorial(n); // sacamos los valores de n y r factorial
			R = factorial(R);
			
			resultado = n / R;
		}
		else if(sn != 1 && sn != 2)
		{
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
			goto x;
		}
		if(sn2 == 1)
		{
			cout<<"Ingrese la cantidad que debe sumarse: "<<endl;
			cin>>sum;
			system("PAUSE");
			system("CLS");
			resultado = resultado + sum;
		}
		if(sn2 == 2)
		{
			cout<<"Ingrese la cantidad que debe restarse: "<<endl;
			cin>>rest;
			system("PAUSE");
			system("CLS");
			resultado = resultado - rest;
		}
		if(sn2 == 3)
		{
			system("CLS");
		}
		if(sn2 != 1 && sn2 != 2 && sn2 != 3)
		{
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
			goto x;
		}
		if(o2 == 1)
		{
			resultadoBack = resultadoBack * resultado;
		}
		if(o2 == 2)
		{
			resultadoBack = resultadoBack + resultado;
		}
		if(o2 == 3)
		{
			resultadoBack = resultadoBack - resultado;
		}
		if(o2 == 4)
		{
			resultadoBack = resultadoBack / resultado;
		}
		if(o2 == 5)
		{
			resultadoBack = resultado;
		}
	}
	system("CLS");
	cout<<"El resultado es: "<<resultadoBack<<" formas distintas"<<endl;
	return resultadoBack;
	system("PAUSE");
}

long double permutacionConRepeticion(int replay, int o2, int o)
{
	//variables de opcion
	int sn, sn2, sn3;
	//variables de operacion
	long double n, N, r, R, ob, resultado, rest, sum, resultadoBack, nElementos, elementos, resultadoElementos;
	resultadoElementos = 1;
	
	if(o2 > 1 && o2 < 5)
	{
		resultadoBack = 0;
	}
	if(o2 == 1)
	{
		resultadoBack = 1;
	}
	
	for(int i = 1; i <= replay; i++)
	{
		if(replay > 1)
		{
			system("CLS");
    		permutacionRepetida(i);
		}
		cout<<"-------------------------------------------[ PERMUTACIONES CON REPETICION ]---------------------------------------------"<<endl;
		
		if(o == 1)
		{
			cout<<"introduzca el valor de elementos distintos (n)"<<endl;
			cin>>n;
			cout<<"Introduzca el valor de elementos a los que n hace referencia (r)"<<endl;
			cin>>r;
			q:
			cout<<"Su operacion tiene algun elemento obligatorio?\n1.SI\n2.NO"<<endl;
			cin>>sn;
			if(sn != 1 && n != 2)
			{
				cout<<"Elija una opcion valida"<<endl;
				system("PAUSE");
				system("CLS");
				goto q;
			}
			w:
			cout<<"Su operacion tiene algun elemento que deba restarse o sumarse?\n1.Sumarse\n2.Restarse\n3.No"<<endl;
			cin>>sn2;
			if(sn2 != 1 && sn2 != 2 && sn2 != 3)
			{
				cout<<"Elija una opcion valida"<<endl;
				system("PAUSE");
				system("CLS");
				goto w;
			}
			if(sn == 1)
			{
				cout<<"Introduzca la cantidad obligatoria"<<endl;
				cin>>ob;
				n = n - ob;	
				resultado = pow(n, r);
			}
			if(sn == 2)
			{
				resultado = pow(n, r);
			}
			if(sn2 == 1)
			{
				cout<<"Ingrese la cantidad que debe sumarse: "<<endl;
				cin>>sum;
				system("PAUSE");
				system("CLS");
				resultado = resultado + sum;
			}
			if(sn2 == 2)
			{
				cout<<"Ingrese la cantidad que debe restarse: "<<endl;
				cin>>rest;
				system("PAUSE");
				system("CLS");
				resultado = resultado - rest;
			}
			if(sn2 == 3)
			{
				system("CLS");
			}
		}
		
		
		
		if(o == 3)
		{
			cout<<"introduzca el valor de elementos distintos (n)"<<endl;
			cin>>n;
			
			cout<<"Cuantos grupos de elementos repetidos del mismo tipo tiene?"<<endl;
			cin>>elementos;
			
			x:
			cout<<"Su operacion tiene algun elemento obligatorio?\n1.SI\n2.NO"<<endl;
			cin>>sn;
			if(sn != 1 && sn != 2)
			{
				cout<<"Eliga una opcion valida"<<endl;
				system("CLS");
				goto x;
			}
			if(sn == 1)
			{
				f:
				cout<<"El elemento obligatorio aplica a todos los grupos de elementos repetidos\n1.SI\n2.NO"<<endl;
				cin>>sn3;
				if(sn3 != 1 && sn3 != 2)
				{
					cout<<"Eliga una opcion valida"<<endl;
					system("CLS");
					goto f;
				}
				if(sn3 == 1)
				{
					cout<<"Introduzca la cantidad obligatoria: "<<endl;
					cin>>ob;	
				}
			}
			
			
			system("CLS");
			for(int a = 1; a <= elementos; a++)
			{
				system("CLS");
				cout<<"Ingrese el numero de elementos repetidos del grupo "<<a<<" :"<<endl;
				cin>>nElementos;
				
				if(sn3 == 2)
				{
					cout<<"Introduzca la cantidad obligatoria del grupo "<<a<<" :"<<endl;
					cin>>ob;
					nElementos = nElementos - ob;
				}
				if(sn3 == 1)
				{
					nElementos = nElementos - ob;
				}
				
				nElementos = factorial(nElementos);
				resultadoElementos = resultadoElementos * nElementos;
			}
			n = factorial(n);
			resultado = n / resultadoElementos;
		}
		
		if(o2 == 1)
		{
			resultadoBack = resultadoBack * resultado;
		}
		if(o2 == 2)
		{
			resultadoBack = resultadoBack + resultado;
		}
		if(o2 == 3)
		{
			resultadoBack = resultadoBack - resultado;
		}
		if(o2 == 4)
		{
			resultadoBack = resultadoBack / resultado;
		}
		if(o2 == 5)
		{
			resultadoBack = resultado;
		}
	}
	system("CLS");
	cout<<"El resultado es: "<<resultadoBack<<" formas distintas"<<endl;
	return resultadoBack;
}

void permutacion()
{
	//variables de opcion
	int o, o2, replay;
	//variables de operacion
	long double resultadoBack;
	system("CLS");
	encabezadoPermutacion();
	cout<<"Su permutacion es del tipo:"<<endl;
	cout<<"1.Con repeticion\n2.Sin repeticion\n3.Con elementos que se repiten"<<endl;
	cin>>o;
	system("CLS");
	
	if(o == 1 || o == 3)
	{
		r:
		cout<<"Su permutacion con repeticion es:\n\n1.Producto de permutaciones\n2.Adicion de permutaciones\n3.Sustraccion de permutaciones\n4.Fraccion de permutaciones\n5.Ninguna de las anteriores"<<endl;
		cin>>o2;
		system("CLS");
		if(o2 > 0 && o2 < 5)
		{
			cout<<"Cuantas permutaciones distintas deben realizarse: "<<endl;
			cin>>replay;
			permutacionConRepeticion(replay, o2, o);
		}
		if(o2 == 5)
		{
			permutacionConRepeticion(1, o2, o);
		}
		
		if(o2 != 1 && o2 != 2 && o2 != 3 && o2 != 4 && o2 != 5)
		{
			cout<<"Elija una opcion valida"<<endl;
			goto r;
		}	
	}
	
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	if(o == 2)
	{
		e:
		cout<<"Su permutacion sin repeticion es:\n\n1.Producto de permutaciones\n2.Adicion de permutaciones\n3.Sustraccion de permutaciones\n4.Fraccion de permutaciones\n5.Ninguna de las anteriores"<<endl;
		cin>>o2;
		system("CLS");
		if(o2 > 0 && o2 < 5)
		{
			cout<<"Cuantas permutaciones distintas deben realizarse: "<<endl;
			cin>>replay;
			permutacionSinRepeticion(replay, o2);
		}
		if(o2 == 5)
		{
			permutacionSinRepeticion(1, o2);
		}
		
		if(o2 != 1 && o2 != 2 && o2 != 3 && o2 != 4 && o2 != 5)
		{
			cout<<"Elija una opcion valida"<<endl;
			goto e;
		}	
	}
	if(o != 1 && o != 2 && o != 3)
	{
		cout<<"Elija una opcion valida"<<endl;
		permutacion();
	}
}


//----------------------------------------------------------APARTADO DE COMBINACIONES-----------------------------------------------------------------------------------



long double combinacionSinRepeticion(int replay, int o2)
{
	long double n, r, R, ob, sn, resultado, sn2, rest, sum, resultadoBack;
	
	if(o2 > 1 && o2 < 5)
	{
		resultadoBack = 0;
	}
	if(o2 == 1)
	{
		resultadoBack = 1;
	}
	
	for(int i = 1; i <= replay; i++)
	{
		if(replay > 1)
		{
			system("CLS");
    		combinacionRepetida(i);
		}
		cout<<"-------------------------------------------[ COMBINACIONES SIN REPETICION ]---------------------------------------------"<<endl;
		cout<<"introduzca el valor de elementos totales (n)"<<endl;
		cin>>n;
		cout<<"Introduzca el valor de elementos a elegir (r)"<<endl;
		cin>>r;
		x:
		cout<<"Su operacion tiene algun elemento obligatorio?\n1.SI\n2.NO"<<endl;
		cin>>sn;
		system("CLS");
		cout<<"Su operacion tiene algun elemento que deba restarse o sumarse?\n1.Sumarse\n2.Restarse\n3.No"<<endl;
		cin>>sn2;
		system("CLS");
		if(sn == 1)
		{
			cout<<"Introduzca la cantidad obligatoria"<<endl;
			cin>>ob;
			n = n - ob;
			r = r - ob;
			
			R = (n - r);
			n = factorial(n); // sacamos los valores de n y r factorial
			r = factorial(r);
			R = factorial(R);
			
			resultado = n / (r * R);
		}
		else if(sn == 2)
		{
			R = (n - r);
			n = factorial(n); // sacamos los valores de n y r factorial
			r = factorial(r);
			R = factorial(R);
			
			resultado = n / (r * R);
		}
		else if(sn != 1 && sn != 2)
		{
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
			goto x;
		}
		if(sn2 == 1)
		{
			cout<<"Ingrese la cantidad que debe sumarse: "<<endl;
			cin>>sum;
			system("PAUSE");
			system("CLS");
			resultado = resultado + sum;
		}
		if(sn2 == 2)
		{
			cout<<"Ingrese la cantidad que debe restarse: "<<endl;
			cin>>rest;
			system("PAUSE");
			system("CLS");
			resultado = resultado - rest;
		}
		if(sn2 == 3)
		{
			system("CLS");
		}
		if(sn2 != 1 && sn2 != 2 && sn2 != 3)
		{
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
			goto x;
		}
		if(o2 == 1)
		{
			resultadoBack = resultadoBack * resultado;
		}
		if(o2 == 2)
		{
			resultadoBack = resultadoBack + resultado;
		}
		if(o2 == 3)
		{
			resultadoBack = resultadoBack - resultado;
		}
		if(o2 == 4)
		{
			resultadoBack = resultadoBack / resultado;
		}
		if(o2 == 5)
		{
			resultadoBack = resultado;
		}
	}
	system("CLS");
	cout<<"El resultado es: "<<resultadoBack<<" formas distintas"<<endl;
	return resultadoBack;
	system("PAUSE");
}

long double combinacionConRepeticion(int replay, int o2)
{
	long double n, N, r, R, ob, sn, resultado, sn2, rest, sum, resultadoBack;
	
	if(o2 > 1 && o2 < 5)
	{
		resultadoBack = 0;
	}
	if(o2 == 1)
	{
		resultadoBack = 1;
	}
	
	for(int i = 1; i <= replay; i++)
	{
		if(replay > 1)
		{
			system("CLS");
    		combinacionRepetida(i);
		}
		cout<<"-------------------------------------------[ COMBINACIONES CON REPETICION ]---------------------------------------------"<<endl;
		cout<<"introduzca el valor de elementos distintos (n)"<<endl;
		cin>>n;
		cout<<"Introduzca el valor de elementos a los que n hace referencia (r)"<<endl;
		cin>>r;
		x:
		cout<<"Su operacion tiene algun elemento obligatorio?\n1.SI\n2.NO"<<endl;
		cin>>sn;
		system("CLS");
		cout<<"Su operacion tiene algun elemento que deba restarse o sumarse?\n1.Sumarse\n2.Restarse\n3.No"<<endl;
		cin>>sn2;
		if(sn == 1)
		{
			cout<<"Introduzca la cantidad obligatoria"<<endl;
			cin>>ob;
			n = n - ob;
			
			N = (n + r - 1);
			R = (n - 1);
			
			N = factorial(N);
			R = factorial(R);
			r = factorial(r);
			
			
			resultado = N / (r * R);
		}
		if(sn == 2)
		{
			N = (n + r - 1);
			R = (n - 1);
			
			N = factorial(N);
			R = factorial(R);
			r = factorial(r);
			
			resultado = N / (r * R);
		}
		else if(sn != 1 && n != 2)
		{
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
			goto x;
		}
		if(sn2 == 1)
		{
			cout<<"Ingrese la cantidad que debe sumarse: "<<endl;
			cin>>sum;
			system("PAUSE");
			system("CLS");
			resultado = resultado + sum;
		}
		if(sn2 == 2)
		{
			cout<<"Ingrese la cantidad que debe restarse: "<<endl;
			cin>>rest;
			system("PAUSE");
			system("CLS");
			resultado = resultado - rest;
		}
		if(sn2 == 3)
		{
			system("CLS");
		}
		else if(sn2 != 1 && sn2 != 2 && sn2 != 3)
		{
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
			goto x;
		}
		if(o2 == 1)
		{
			resultadoBack = resultadoBack * resultado;
		}
		if(o2 == 2)
		{
			resultadoBack = resultadoBack + resultado;
		}
		if(o2 == 3)
		{
			resultadoBack = resultadoBack - resultado;
		}
		if(o2 == 4)
		{
			resultadoBack = resultadoBack / resultado;
		}
		if(o2 == 5)
		{
			resultadoBack = resultado;
		}
	}
	cout<<"El resultado es: "<<resultadoBack<<" formas distintas"<<endl;
	system("CLS");
	return resultadoBack;
	system("PAUSE");
}

void combinacion()
{
	int o, o2, replay;
	long double resultadoBack;
	system("CLS");
	encabezadoCombinacion();
	cout<<"Su combinacion es del tipo:"<<endl;
	cout<<"1.Con repeticion\n2.Sin repeticion"<<endl;
	cin>>o;
	system("CLS");
	
	if(o == 1)
	{
		r:
		cout<<"Su combinacion con repeticion es:\n\n1.Producto de combinaciones\n2.Adicion de combinaciones\n3.Sustraccion de combinaciones\n4.Fraccion de combinaciones\n5.Ninguna de las anteriores"<<endl;
		cin>>o2;
		system("CLS");
		if(o2 > 0 && o2 < 5)
		{
			cout<<"Cuantas combinaciones distintas deben realizarse: "<<endl;
			cin>>replay;
			combinacionConRepeticion(replay, o2);
		}
		if(o2 == 5)
		{
			combinacionConRepeticion(1, o2);
		}
		
		if(o2 != 1 && o2 != 2 && o2 != 3 && o2 != 4 && o2 != 5)
		{
			cout<<"Elija una opcion valida"<<endl;
			goto r;
		}	
	}
	
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	if(o == 2)
	{
		e:
		cout<<"Su combinacion sin repeticion es:\n\n1.Producto de combinaciones\n2.Adicion de combinaciones\n3.Sustraccion de combinaciones\n4.Fraccion de combinaciones\n5.Ninguna de las anteriores"<<endl;
		cin>>o2;
		system("CLS");
		if(o2 > 0 && o2 < 5)
		{
			cout<<"Cuantas combinaciones distintas deben realizarse: "<<endl;
			cin>>replay;
			combinacionSinRepeticion(replay, o2);
		}
		if(o2 == 5)
		{
			combinacionSinRepeticion(1, o2);
		}
		
		if(o2 != 1 && o2 != 2 && o2 != 3 && o2 != 4 && o2 != 5)
		{
			cout<<"Elija una opcion valida"<<endl;
			goto e;
		}	
	}
	if(o != 1 && o != 2)
	{
		cout<<"Elija una opcion valida"<<endl;
		combinacion();
	}
}



//-----------------------------------------------------------------APARTADO DE MENU Y MAIN------------------------------------------------------------------



void menu()
{
	system("CLS");
	cout<<"---------------------------------------------COMBINACIONES Y PERMUTACIONES----------------------------------------------"<<endl;
	cout<<"Elija el tipo de operacion a realizar:"<<endl;
	cout<<"1.Combinaciones\n2.Permutaciones\n3.Salir"<<endl;
	cin>>opcion;
	switch(opcion)
	{
		case 1: 
			combinacion();
		break;
		
		case 2:
			permutacion();
		break;
		
		case 3:
			cout<<"Nos vemos!"<<endl;
		break;
		
		default:
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			menu();
		break;
	}
}

main()
{
	k:
	int o;
	system("CLS");
	menu();
	system("PAUSE");
	l:
	cout<<"Desea realizar alguna otra operacion?\n1.SI\n2.NO"<<endl;
	cin>>o;
	switch(o)
	{
		case 1: goto k; break; 
		case 2: cout<<"Nos vemos!"<<endl; system("PAUSE"); break;
		default: cout<<"Eliga una opcion valida"<<endl; system("PAUSE"); system("CLS"); goto l; break;
	}
	
}
