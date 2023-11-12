#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "newton.h"

int main(){
    
    crear(5,4,2,7,1,0);
    derivar();
  double x =  newtonRapson(10);
  printf("%.21f",x);
    
}