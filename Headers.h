
#ifndef HEADERS_H
#define HEADERS_H

#ifdef __cplusplus

#endif

int suma(int a, int b);
int resta(int a, int b);
char primer_caracter(char* cadena);
double area_circulo(int radio);  

float pi= 3.14159;

int suma (int a, int b){
return a+b;    
}
int resta (int a, int b){
return a-b;    
}
char primer_caracter(char* cadena){
return cadena [0];     
} 
double area_circulo(int radio){
return pi*radio*radio;    
}

#ifdef __cplusplus
}
#endif

#endif /* HEADERS_H */

