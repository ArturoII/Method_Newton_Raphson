#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "newton.h"

int main(){
    
    crear(2,2,2,1,-3,0);
    derivar();
  double x =  newtonRapson(10);
  printf("%.21f",x);
    
    
}
