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
	int op;

   cout<<"\t\t\tFUNCIONES LOGICAS";
   cout<<"1.-Generar tabla de verdad con dos variables";
   cout<<"2.-Ver tablas de verdad con dos entradas";
   cout<<"3.-Generar y ver tabla con n entradas";
   cout<<"4.-Salir";
   cin>>op;
   switch(op)
   {
   	case 1:
      	break;
      case 2:
      	break;
      case 3:
      	break;
      case 4:
      	break;
   }
   getch();
}