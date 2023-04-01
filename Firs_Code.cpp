#include <iostream>	
using namespace std;

const int stu_M =45;


int main (){
	int num;
	cout<<"Ing. el numero de estudiantes: ";
	cin>>num;
		int Id[stu_M];
		string name[stu_M], lastNm[stu_M];
		double note1[stu_M],note2[stu_M],note3[stu_M],note4[stu_M];
		
		for (int i = 0; i < num; i++) {
        cout << "Ing. datos del estudiante No. " << (i+1) << endl;
        cout << "Ing. el ID: ";
        cin >> Id[i];
        cout << "Ing. los nombres: ";
        cin >> name[i];
        cout << "Ing. los apellidos: ";
        cin >> lastNm[i];
        cout << "Ing. nota 1: ";
        cin >> note1[i];
        cout << "Ing. nota 2: ";
        cin >> note2[i];
        cout << "Ing. nota 3: ";
        cin >> note3[i];
        cout << "Ing. nota 4: ";
        cin >> note4[i];
        cout << endl;
    }
    
        for (int j = 0; j < num; j++) {
        double prom = (note1[j] + note2[j] + note3[j] + note4[j]) / 4.0;
        cout << "Estudiante No. " << (j+1) << endl;
        cout << "ID: " << Id[j] << endl;
        cout << "Nombres: " << name[j] << endl;
        cout << "Apellidos: " << lastNm[j] << endl;
        cout << "Promedio: " << prom << endl;
        if (prom >= 60) {
            cout << "Aprobado" << endl;
        } else {
            cout << "Reprobado" << endl;
        }
        cout << endl;
    }
} 

/*
main (){
	int notas [4];
	int Id, acumulador, contador=0;
	double resultado;
	
	while {
	
	while (contador!=4){
		cout<<"Ing. nota No."<<contador+1<<": ";
		cin>>notas[contador];
		acumulador+=notas[contador];
		contador++;
	}
	resultado=acumulador/4;
	if (resultado>59){
		cout<<name<<" "<<apellidos<<": "<<"Aprobo con: "<<resultado<<endl;
	}else{
		cout<<name<<" "<<apellidos<<": "<<"Reprobo con: "<<resultado<<endl;
	}	
	system("pause");
}
}*/
