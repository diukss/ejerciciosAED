#include "EjerciciosComienzo.h"

int suma(int a, int b) {
	return a + b;
}

void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
	for (desde; desde <= hasta; desde++) {
		cout << desde << "*" << tablaDel << "=" <<tablaDel*desde << (desde != hasta ? ";" : "");
	}
}

void simplificar(int n, int d) {
	if (n == 0) {
		cout << n << '/' << d;
	}
	else {

	}
}

int ocurrencias123Repetidos(int* vector, int largo) { //Se entiende que utilizando una variable estado el algoritmo sería mas corto.
	int cantidadOcurrencias = 0;
	bool uno = false;
	bool dos = false;
	bool tres = false;

	for (int i = 0; i < largo; i++) {

		if (vector[i] == 1) {
			uno = true;
			dos = false;
			tres = false;
		}
		else if (vector[i] == 2 && uno) {
			dos = true;
			tres = false;

		}
		else if (vector[i] == 2 && !uno) {
			tres = false;
			dos = false;

		}
		else if (vector[i] == 3 && !dos) {
			uno = false;
			dos = false;
			tres = false;

		}
		else if(vector[i] == 3 && dos) {
			cantidadOcurrencias++;
			uno = false; 
			dos = false;
			tres = true;

		}

			}

	return cantidadOcurrencias;
}

int maximoNumero(unsigned int n) {
	int mayor;
	for (int i = 0; i < n; i++) {
		
		int num;
		cin >> num;

		if (i == 0) {
			mayor = num;
		}
		else if(num > mayor) {
			mayor = num;
		}


		}

return mayor;
}

void ordenarVecInt(int* vec, int largoVec) {
	for (int i = 0; i < largoVec - 1; i++) { 
		for (int j = largoVec - 1; j > i; j--) {
			if (vec[j - 1] > vec[j]) {
				int temp = vec[j - 1];
				vec[j - 1] = vec[j];
				vec[j] = temp;
			}
		}
	}
}

int* copiarint(int* aCopiar, int largoV) {
	int* copiado = new int[largoV];
	for (int i = 0; i < largoV; i++) {
		copiado[i] = aCopiar[i];
	}
	return copiado;
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){
	int* vecRetorno = new int[l1+l2];

	if (l1 == 0 && l2 == 0) {
		vecRetorno = NULL;
	}else if (l1 == 0) {
		vecRetorno = copiarint(v2, l2);
	}
	else if (l2 == 0) {
		vecRetorno = copiarint(v1, l1);
	}
	else {

	
	
	int vec1 = 0;
	int vec2 = 0;
	int contador = 0;

	while (vec1 < l1 && vec2 < l2) {
		if (v1[vec1] <= v2[vec2]) {

			vecRetorno[contador] = v1[vec1];
			vec1++;
			contador++;
		}
		else {
			vecRetorno[contador] = v2[vec2];
			vec2++;
			contador++;
		}
	}
	while (vec1 < l1) {
		vecRetorno[contador++] = v1[vec1++];
	}

	while (vec2 < l2) {
		vecRetorno[contador++] = v2[vec2++];
	}

	}
	return vecRetorno;
}

bool Esta(int elemento, int* vector, int largo) {
	bool retorno = false;
	for (int i = 0; i < largo; i++) {
		if (vector[i] == elemento) {
			retorno = true;
		}
	}
	return retorno;
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2)
{

	bool retorno = true;


		for (int i = 0; i < l1; i++) {
			if (!Esta(v1[i], v2, l2)) {
				retorno = false;
			}
			}


	
	return retorno;
}

int largoVector(char* vector) {
	int contador = 0;
	while (*vector != '\0') {
		contador++;
		vector++;
	}
	return contador;
}

char* copiarChar(char* aCopiar) {
	int largoV = largoVector(aCopiar);

	char* copiado = new char[largoV+1];
	for (int i = 0; i < largoV; i++) {
		copiado[i] = aCopiar[i];
	}
	copiado[largoV] = '\0';
	return copiado;
}

char* invertirCase(char* str)
{
	char* strNuevo = copiarChar(str);
	int largo =largoVector(str);
	int contador = 0;

	for (int i = 0; i < largo; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			strNuevo[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			strNuevo[i] = strNuevo[i] + 32;
		}
	}
	return strNuevo;
}

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr)
{
	// IMPLEMENTAR SOLUCION
    return NULL;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
