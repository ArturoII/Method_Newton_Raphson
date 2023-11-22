    /*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   newton.c
 * Author: brand
 *
 * Created on 31 de octubre de 2023, 8:49 p. m.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * 
 */
double a, b, d, e, g, h, x;
double resul, resul_anterior;
double da, db, dd, de, dg, dh;
char c, f;
void crear(double a1,double b1,double d1,double e1,double g1, double h1) {
    a = a1;
    b = b1;
    d = d1;
    e = e1;
    g = g1;
    h = h1;
    
    printf("La función ingresada es: %.2lf * x^%.2lf  %.2lf * x^%.2lf  %.2lf * x^%.2lf\n", a, b, d, e, g, h);
}

void derivar() {
    da = a * b;
    db = b - 1;
    dd = d * e;
    de = e - 1;
    dg = g * h;
    dh = h - 1;

    printf("La derivada de la función ingresada es: %.2lf * x^%.2lf  %.2lf * x^%.2lf  %.2lf * x^%.2lf\n", da, db,  dd, de, dg, dh);    
}

double newtonRapson(double x1) {
    x = x1;
    resul= (x - ((a * pow(x, b) + d * pow(x, e) + g * pow(x, h)) / (da * pow(x, db) + dd * pow(x, de) + dg * pow(x, dh))));
    for (int i = 0; i < 100; i++) {
        resul_anterior = resul;
        resul = (resul_anterior - ((a * pow(resul_anterior, b) + d * pow(resul_anterior, e) + g * pow(resul_anterior, h)) / (da * pow(resul_anterior, db) + dd * pow(resul_anterior, de) + dg * pow(resul_anterior, dh))));
        printf("El Newton en la iteracion %d es: %.2lf\n", i, resul);

        if(resul == resul_anterior){
            return resul;
            break;
        }
    }    
    return resul;
    
}