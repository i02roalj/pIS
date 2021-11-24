#include <iostream>
#include <cstring>
 main (){
 	int n;//Si esta variable vale 1 se abrirá el menú de administrador y si vale 0 el de usuario
	char nombre[5], letra[2]="u" ;
	char letra2[2]="d";//distinguiremos a los usuarios de los administradores pues en los login de los primeros habrá una u
	char contraseña[5];//El resto de caracteres del login serán numeros
std::cout<<"Introduzca su usuario y su contraseña";
std::cin>>nombre;
std::cin>>contraseña;
if (strstr(nombre, letra)!=0){
std::cout<<"Has iniciado sesion como usuario";
n=0;
 }
if (strstr(nombre, letra2)!=0){
std::cout<<"Has iniciado sesion como administrador";
n=1;
}
return 0;
}

