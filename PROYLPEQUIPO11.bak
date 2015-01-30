# include <iostream>
# include <conio>
# include <fstream>

void crear_archivo()
{
	ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Tablas_dos_entradas.txt");
   archivo.close();
}

void borrar()
{
	ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Tablas_dos_entradas.txt", ios::trunc);
   archivo.close();
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
	ifstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Tablas_dos_entradas.txt", ios::in);
   char caracter;
   while(!archivo.eof())
   {
   	archivo.get(caracter);
      cout<<caracter;
   }
}
main()
{
	int op,s;

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
   	case 1:
      	borrar();
         ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Tablas_dos_entradas.txt", ios::app);
         archivo<<"Funcion AND";
         archivo<<"\na  b  s";
      	for(int i=0; i<=1 ; i++)
         {
           	for(int j=0; j<=1 ; j++)
            {
            	s=AND(i,j);
               archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
            }
         }
         archivo<<"\n\nFuncion OR";
         archivo<<"\na  b  s";
      	for(int i=0; i<=1 ; i++)
         {
           	for(int j=0; j<=1 ; j++)
            {
            	s=OR(i,j);
               archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
            }
         }
         archivo<<"\n\nFuncion NOT";
         archivo<<"\na  s";
      	for(int i=0; i<=1 ; i++)
         {
           	s=NOT(i);
            archivo<<"\n"<<i<<"  "<<s;
         }
         archivo<<"\n\nFuncion XOR";
         archivo<<"\na  b  s";
      	for(int i=0; i<=1 ; i++)
         {
           	for(int j=0; j<=1 ; j++)
            {
            	s=XOR(i,j);
               archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
            }
         }
         archivo<<"\n\nFuncion NOR";
         archivo<<"\na  b  s";
      	for(int i=0; i<=1 ; i++)
         {
           	for(int j=0; j<=1 ; j++)
            {
            	s=NOR(i,j);
               archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
            }
         }
         archivo<<"\n\nFuncion NAND";
         archivo<<"\na  b  s";
      	for(int i=0; i<=1 ; i++)
         {
           	for(int j=0; j<=1 ; j++)
            {
            	s=NAND(i,j);
               archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
            }
         }
         archivo<<"\n\nFuncion X-NOR";
         archivo<<"\na  b  s";
      	for(int i=0; i<=1 ; i++)
         {
           	for(int j=0; j<=1 ; j++)
            {
            	s=XNOR(i,j);
               archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
            }
         }

      cout<<"\n se a generado las tablas de verdad:";
      cout<<"\n se a almacenado en el archivo Tabla de 2 entradas.txt";
      cout<<"\n se almaceno en la direccion: \n D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Tablas_dos_entradas.txt";
      	break;

   }
   getch();
}