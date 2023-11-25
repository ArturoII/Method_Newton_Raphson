# Method_Newton_Raphson
Esta libreria se hizo para que se puedan escribir un polinomio de tres monomios cada uno de la forma a*x^b
Esta calculara todo.

## Proceso

primero que todo se hace la compilacion de la libreria
```
gcc -c newton.c -o newton.o
```
luego con el newton.o ya se podria utilizar para el resto de la compilacion ya con un main
```
gcc -o app app.c newton.c -lm
```
