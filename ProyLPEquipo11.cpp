# include <iostream>
# include <conio>
# include <fstream>
# include <iomanip>

int valor(int a, int b, int cc)
{
	int v[10],s;
   for(int i=(a-1);i>=0;i--)
   {
   	v[i]=b%2;
      b=int(b/2);
   }
   s=v[cc];
   return s;
}

int AND(int a, int b)
{
  	int s;
   if(a==1 && b==1)
   {
   	s=1;
   }
   else
   {
   	s=0;
   }
   return s;
}

int OR(int a, int b)
{
  	int s;
	if(a==0 && b==0)
   {
   	s=0;
   }
   else
   {
   	s=1;
   }
   return s;
}

int NOT(int a)
{
	int s;
   if(a==1)
   {
   	s=0;
   }
   else
   {
   	s=1;
   }
   return s;
}

int XOR(int x, int y)
{
	int a,a2,b,b2,s;
   a=NOT(x);
   a2=AND(a,y);
   b=NOT(y);
   b2=AND(x,b);
   s=OR(a2,b2);
   return s;
}

int NOR(int x, int y)
{
	int a,b,s;
   a=NOT(x);
   b=NOT(y);
   s=AND(a,b);
   return s;
}

int NAND(int x, int y)
{
	int a,b,s;
   a=NOT(x);
   b=NOT(y);
   s=OR(a,b);
   return s;
}

int XNOR(int x, int y)
{
	int a,a2,b,b2,s;
   a=NOT(x);
   a2=NOT(y);
   b=AND(a,a2);
   b2=AND(x,y);
   s=OR(b,b2);
   return s;
}

void Mostrar()
{
	ifstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Final.txt", ios::in);
   char caracter;
   while(!archivo.eof())
   {
   	archivo.get(caracter);
      cout<<caracter;
   }
   archivo.close();
   getch();
}

void Encabezado(int a, int b)
{
	ofstream ntabla("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Final.txt", ios::app);
   switch(a)
   {
   	case 1:
      	ntabla<<"\t\tFUNCION AND\n";
         break;
      case 2:
      	ntabla<<"\t\tFUNCION OR\n";
         break;
      case 3:
         ntabla<<"\t\tFUNCION NOT\n";
         break;
      case 4:
      	ntabla<<"\t\tFUNCION XOR\n";
         break;
      case 5:
      	ntabla<<"\t\tFUNCION NOR\n";
         break;
      case 6:
      	ntabla<<"\t\tFUNCION NAND\n";
         break;
      case 7:
      	ntabla<<"\t\tFUNCION XNOR\n";
         break;
      default:
      	ntabla<<"\t\tFUNCION ERRONEA\n";
         break;
    }
    for(int i=1 ; i<=b ; i++)
    {
    	ntabla<<"n"<<i<<" ";
    }
    ntabla<<"s\n";
    ntabla.close();
}

void imprimir_n(int a, int b)
{
	ofstream ntabla("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Final.txt", ios::app);
   if(b==1)
   {
   	ntabla<<a<<"  ";
   }
   if(b==0)
   {
   	ntabla<<a<<"\n";
   }
   ntabla.close();
}

void borrar()
{
	ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Final.txt", ios::trunc);
   archivo.close();
}

main()
{
	int op,n,fp,i,a,s,r;
   int t=1,e=0;

   cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
   cout<<"||\t\t\tFUNCIONES LOGICAS         ||";
   cout<<"\n|| 1.-Generar tabla de verdad con dos variables   ||";
   cout<<"\n|| 2.-Ver tablas de verdad con dos entradas       ||";
   cout<<"\n|| 3.-Generar y ver tabla con n entradas          ||";
   cout<<"\n|| 4.-Salir                                       ||";
   cout<<"\n||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

   cout<<"\nElija opcion: ";
   cin>>op;
   switch(op)
   {
   	case (1):
      	borrar();
         cout<<"\n se a generado las tablas de verdad:";
   	   cout<<"\n se a almacenado en el archivo Tabla de 2 entradas.txt";
      	cout<<"\n se almaceno en la direccion: \n D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Final.txt";
      	break;

   	case (2):
      	cout<<"Hola";
	   	break;

   	case 3:

      	cout<<"\nIngrese la cantidad de variables a operar: ";
	      cin>>n;
         for(i=1;i<=n;i++)
   		{
		   	t=t*2;
		   }
   	   cout<<"\n\t\t\tELIJA LA FUNCION";
      	cout<<"\n1.-AND";
	      cout<<"\n2.-OR";
   	   cout<<"\n3.-NOT";
      	cout<<"\n4.-XOR";
	      cout<<"\n5.-NOR";
   	   cout<<"\n6.-NAND";
      	cout<<"\n7.-X-NOR";
	      cout<<"\nElija la funcion: ";
   	   cin>>fp;
         switch(fp)
         {
         	case 1:
            	Encabezado(fp,n);
               while(e<t)
               {
                  for(i=0 ; i<n ; i++)
                  {
               		if(i==0)
	                  {
   	               	s=valor(n,e,i);
                        imprimir_n(s,1);
      	            }
                     else
                     {
                     	a=valor(n,e,i);
                        r=AND(s,a);
                        s=r;
                        imprimir_n(a,1);
                     }
                  }
                  imprimir_n(s,0);
                  e++;
               }
               Mostrar_n;
               break;
            case 2:
            	Encabezado(fp,n);
               while(e<t)
               {
                  for(i=0 ; i<n ; i++)
                  {
               		if(i==0)
	                  {
   	               	s=valor(n,e,i);
                        imprimir_n(s,1);
      	            }
                     else
                     {
                     	a=valor(n,e,i);
                        r=OR(s,a);
                        s=r;
                        imprimir_n(a,1);
                     }
                  }
                  imprimir_n(s,0);
                  e++;
               }
               Mostrar_n;
               break;

      case 4:
      	cout<<"Gracias por su tiempo";
      default:
      	cout<<"Error";
   }
   getch();
}
