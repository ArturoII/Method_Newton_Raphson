#ifndef NEWTON_H
#define NEWTON_H

#ifdef __cplusplus
extern "C" {
#endif

void derivar();
void crear(double, double, double, double, double, double);
double newtonRapson(double);

#ifdef __cplusplus
}
#endif

#endif /* NEWTON_H */