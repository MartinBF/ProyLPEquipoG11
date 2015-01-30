# include <iostream>
# include <conio>
# include <fstream>

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

void borrar()
{
	ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Dos_Entradas.txt", ios::in | ios::trunc);
   archivo.close();
}

void modificar_archivo()
{
int i,j,s;
	ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Dos_Entradas.txt");
   borrar();
   archivo<<"Funcion AND";
   archivo<<"\na  b  s";
  	for(i=0; i<=1 ; i++)
   {
 	 	for(j=0; j<=1 ; j++)
      {
   	  	s=AND(i,j);
         archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
      }
   }
   archivo<<"\n\nFuncion OR";
   archivo<<"\na  b  s";
   for(i=0; i<=1 ; i++)
   {
    	for(j=0; j<=1 ; j++)
      {
       	s=OR(i,j);
         archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
      }
   }
   archivo<<"\n\nFuncion NOT";
   archivo<<"\na  s";
   for(i=0; i<=1 ; i++)
   {
     	s=NOT(i);
      archivo<<"\n"<<i<<"  "<<s;
   }
   archivo<<"\n\nFuncion XOR";
   archivo<<"\na  b  s";
   for(i=0; i<=1 ; i++)
   {
     	for(j=0; j<=1 ; j++)
      {
        	s=XOR(i,j);
         archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
      }
   }
   archivo<<"\n\nFuncion NOR";
   archivo<<"\na  b  s";
   for(i=0; i<=1 ; i++)
   {
     	for(j=0; j<=1 ; j++)
      {
        	s=NOR(i,j);
         archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
      }
   }
   archivo<<"\n\nFuncion NAND";
   archivo<<"\na  b  s";
   for(i=0; i<=1 ; i++)
   {
    	for(j=0; j<=1 ; j++)
      {
      	s=NAND(i,j);
         archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
      }
   }
   archivo<<"\n\nFuncion X-NOR";
   archivo<<"\na  b  s";
   for(i=0; i<=1 ; i++)
   {
     	for(j=0; j<=1 ; j++)
      {
      	s=XNOR(i,j);
         archivo<<"\n"<<i<<"  "<<j<<"  "<<s;
       }
   }
   archivo.close();
}

void borrar2()
{
	ofstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Indefinido.txt", ios::trunc);
   archivo.close();
}

void Encabezado(int a, int b)
{
	ofstream ntabla("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Indefinido.txt", ios::in);
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
	ofstream ntabla("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Indefinido.txt", ios::app);
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

void Mostrar()
{
	ifstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Indefinido.txt", ios::in);
   char caracter;
   while(!archivo.eof())
   {
   	archivo.get(caracter);
      cout<<caracter;
   }
   archivo.close();
   getch();
   clrscr();
}

void comparacion()
{
	char caracter;
	ifstream archivo("D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Dos_Entradas.txt", ios::in);
   clrscr();
   if(archivo.good())
   {
   	cout<<"El contenido del archivo es: \n";
   	while(!archivo.eof())
   	{
   		archivo.get(caracter);
      	cout<<caracter;
   	}
   	archivo.close();
   }
   else
   {
   	cout<<"El archivo no existe si desea crearlo selecciones la opcion 1.";
   }
   getch();
   clrscr();
}

main()
{
	int op,n,fp,i,a,s,r;
   int t=1,e=0,cr=0;
   do
   {
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
	         modificar_archivo();
		      cout<<"\n se a generado las tablas de verdad:";
   		   cout<<"\n se a almacenado en el archivo Tabla de 2 entradas.txt";
      		cout<<"\n se almaceno en la direccion: \n D:/ProyLPEquipo11/ProyLPEquipo11/Archivos/Dos_Entradas.txt";
            getch();
            clrscr();
	      	break;

   		case (2):
      		comparacion();
		   	break;

   		case 3:
      	   clrscr();
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
      	   clrscr();
         	switch(fp)
	         {
   	      	case 1:
                  borrar2();
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
      	         Mostrar();
         	      break;
            	case 2:
               	borrar2();
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
            	   Mostrar();
               	break;
	            case 3:
			      	 cout<<"La funcion NOT no funciona con "<<n<<" variables.";
                   getch();
                   clrscr();
      			    break;
         	   case 4:
               	borrar2();
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
         	               r=XOR(s,a);
            	            s=r;
               	         imprimir_n(a,1);
                  	   }
	                  }
   	               imprimir_n(s,0);
      	            e++;
         	      }
            	   Mostrar();
	            case 5:
               	borrar2();
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
               	         r=NOR(s,a);
                  	      s=r;
                     	   imprimir_n(a,1);
	                     }
   	               }
      	            imprimir_n(s,0);
         	         e++;
            	   }
               	Mostrar();
	               break;
   	         case 6:
               	borrar2();
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
                     	   r=NAND(s,a);
                        	s=r;
	                        imprimir_n(a,1);
   	                  }
      	            }
         	         imprimir_n(s,0);
            	      e++;
               	}
	               Mostrar();
   	            break;
      	      case 7:
               	borrar2();
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
	                        r=XNOR(s,a);
   	                     s=r;
      	                  imprimir_n(a,1);
         	            }
            	      }
               	   imprimir_n(s,0);
                  	e++;
	               }
   	            Mostrar();
      	         break;
         	   default:
            		cout<<"Error";
	         }
   	   	break;
      	case 4:
      		cout<<"Gracias por su tiempo";
            cr++;
            break;
	      default:
   	   	cout<<"Error";
	   }
   }while(cr==0);
   getch();
}
