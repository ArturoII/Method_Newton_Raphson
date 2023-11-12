/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   newton.h
 * Author: Valentina Plaza Azcarate
 *
 * Created on 31 de octubre de 2023, 8:53 p. m.
 */

#ifdef NEWTON_H
#define NEWTON_H

#ifdef __cplusplus
extern "C" {
#endif

void derivar();
void crear(double,double,double,double,double,double);
double newtonRapson(double);

#ifdef __cplusplus
}
#endif

#endif /* NEWTON_H */
