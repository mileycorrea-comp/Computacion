#include <stdio.h>
int main(){
    float cant_doc = 0.0; float tamano_doc = 0.0; float cant_imag = 0.0; 
    float tamano_imag = 0.0; float cant_videos = 0.0; float tamano_videos = 0.0;
    float cant_program = 0.0; float tamano_program = 0.0; float capacidad_disco_GB = 0.0; 
    float espacio_doc = 0.0; float espacio_imag = 0.0; float espacio_videos = 0.0;
    float espacio_program = 0.0; float espacio_total = 0.0; float GB_usados = 0.0; 
    float porcentaje = 0.0; 

printf("Por favor ingresa la cantidad de documentos: ");   
scanf("%f", &cant_doc);                                    
printf("Por favor ingresa el tamaño de los documentos: ");
scanf("%f", &tamano_doc);
printf("Por favor ingresa la cantidad de imágenes: ");      
scanf("%f", &cant_imag);                                   
printf("Por favor ingresa el tamaño de los imágenes: ");
scanf("%f", &tamano_imag);
printf("Por favor ingresa la cantidad de videos: ");        
scanf("%f", &cant_videos);                                 
printf("Por favor ingresa el tamaño de los videos: ");
scanf("%f", &tamano_videos);
printf("Por favor ingresa la cantidad de programas: ");     
scanf("%f", &cant_program);                                
printf("Por favor ingresa el tamaño de los programas: ");
scanf("%f", &tamano_program);
printf("Por favor ingresa la capacidad del disco en GB: "); 
scanf("%f", &capacidad_disco_GB); 

espacio_doc = (cant_doc * tamano_doc);
espacio_imag= (cant_imag * tamano_imag);
espacio_videos= (cant_videos * tamano_videos);
espacio_program= (cant_program * tamano_program);
espacio_total= (espacio_doc + espacio_imag + espacio_videos + espacio_program);
GB_usados = (espacio_total / 1024);
porcentaje= ((GB_usados / capacidad_disco_GB) * 100);

printf("El espacio total de la cantidad de archivos: %f\n", espacio_total);
printf("El porcentaje de almacenamiento utilizado es: %f\n", porcentaje);
}
