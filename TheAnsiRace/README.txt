COMO EJECUTAR LOS AUTOGRADERS - Ejemplo para el capitulo 1

Correr todos y guardar resultado en debug.txt
./autograder-Chap01.sh 2 > debug.txt


Correr todos y ver resultado en pantalla
./autograder-Chap01.sh


Autograder para un archivo individual
./nameoftheexercise.c.autograder


El output tiene que coincidir en espacios, tabuladores y newlines, por lo tanto se les provee una funcion printf() que ya lleva el formato correcto. No cambien el interior de estas funciones! (los que necesitan varias lineas, tambien incluyen un esqueleto del ciclo)	




ME DIO ALGUN ERROR DE PERMISOS!

Ir a la carpeta de los autograders y ejecutar la siguiente instruccion para dar permiso de ejecucion a todos los archivos
chmod u+x *
