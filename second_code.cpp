#include <iostream>

using namespace std;
struct prompunt
{
    int *Id;
    string *name;
    string *lastNm;
    int *note1;
    int *note2;
    int *note3;
    int *note4;
};

int main(int argc, char const *argv[])
{
 prompunt student;
  
  int tam=0, promedio=0 , ja=5;
 
 
  	cout<<"Ing. la cantidad de estudiantes a agregar: ";
    cin>>tam;
    student.Id = new int[tam];
  	student.name = new string[tam];
    student.lastNm= new string[tam];
    student.note1= new int[tam];
    student.note2= new int[tam];
    student.note3= new int[tam];
    student.note4= new int[tam];
   
    for (int i = 0; i < tam; i++)
    {
        cout<<"Estudiante: "<<i+1<<endl;
        cout<<"ing. ID del estudiante:";
        cin>>student.Id[i];
        cout<<"ing. el nombre:";
        cin>>student.name[i];
        cout<<"ing. los apellidos:";
        cin>>student.lastNm[i];
        cout<<"ing. nota 1:";
        cin>>student.note1[i];
        cout<<"ing. nota 2:";
        cin>>student.note2[i];
        cout<<"ing. nota 3:";
        cin>>student.note3[i];
        cout<<"ing. nota 4:";
        cin>>student.note4[i];
      
       
    }
    for(int i=0; i <tam; i++){
         promedio=(student.note1[i] + student.note2[i] + student.note3[i] + student.note4[i])/4;
        cout<<"------------------------------"<<endl;  
        cout<<"Estudiante"<<i+1<<endl;
        cout<<"Id: "<<student.Id[i]<<endl;
        cout<<"Nombre"<< student.name[i]<<endl;
        cout<<"Apellido: "<<student.lastNm[i]<<endl;
        cout<<"Promedio: "<<promedio<<endl;
          if (promedio>= 60) {
            cout << "Resultado: Aprobado" << endl;
        } else {
            cout << "Resultado: Reprobado" << endl;
        }
       
        }
   delete []  student.Id;
   delete []  student.name;
   delete []  student.lastNm;
   delete []  student.note1;
   delete []  student.note2;
   delete []  student.note3;
   delete []  student.note4;

    system("pause");
}
