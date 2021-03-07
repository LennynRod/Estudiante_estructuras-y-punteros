#include<iostream>
#include<conio.h>
using namespace std;

struct Estudiantes{
	int codigo;
	char nombre[30];
	char apellido[30];
	int nota[100];
}estudiantes[100], *pestudiantes = estudiantes;

int nEstudiantes;
int n,inu;
void pedirDatos();
void mostrarDatos();

int main(){
	cout<<"Por favor ingrese la cantidad de estudiantes:"<<endl;
	cout<<"                   (Maximo 100)               "<<endl;
	cin>>nEstudiantes;
	cout<<"    Por favor ingrese la cantidad de notas   :"<<endl;
	cout<<"                   (Maximo 100)               "<<endl;
	cin>>n;
	
pedirDatos();
mostrarDatos();
	
}

void pedirDatos(){
	
	cout<<"--------------Ingreso de datos----------------"<<endl;
	for(int i=0;i<nEstudiantes;i++){
		system("cls");
		cout<<endl;
		cout<<"------------------------------------------"<<endl;
		cout<<"Estudiante: "<<i+1<<endl;
		cout<<"----------"<<endl;
		cout<<"Ingrese el Codigo de Estudiante:"<<endl;
		cin>>(pestudiantes+i)->codigo;

		cout<<"Ingrese el Nombre del Estudiante:"<<endl;
		cin>>(pestudiantes+i)->nombre;
	
		cout<<"Ingrese el apellido del Estudiante:"<<endl;
		cin>>(pestudiantes+i)->apellido;
		
		for(int inu=1;inu<=n;inu++){		

		cout<<"Ingrese La Nota "<<inu<<" Del Estudiante:"<<endl;
		cin>>(pestudiantes+i)->nota[inu];
		
		
		}	
				
	}
	
	
	
}

void mostrarDatos(){
		system("cls");
	
		for(int i=0;i<nEstudiantes;i++){
			cout<<endl;
			cout<<"Estudiantes "<<i+1<<endl;
			cout<<"-------------------------"<<endl;	
			
			cout<<"Codigo: ";
			cout<<(pestudiantes+i)->codigo<<endl;

			cout<<"Nombre: ";
			cout<<(pestudiantes+i)->nombre<<endl;

			cout<<"Apellido: ";
			cout<<(pestudiantes+i)->apellido<<endl;

		for(int inu=1;inu<=n;inu++){		

		cout<<"Nota "<<inu<<": ";
		cout<<(pestudiantes+i)->nota[inu]<<endl;
		
		
		}	
		
			
		
	} 
	
	delete[]pestudiantes;
	
	}
		

