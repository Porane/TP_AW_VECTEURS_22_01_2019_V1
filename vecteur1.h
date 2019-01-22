#ifndef VECTEUR1_H_INCLUDED
#define VECTEUR1_H_INCLUDED

typedef struct nA{
    int x;
    int y;
    }nA;

typedef struct nB{
    int x2;
    int y2;
    }nB;

typedef struct vAB{
    nA pointA;
    nB pointB;
    }vAB;

extern void setvAB(vAB var);

#endif // VECTEUR1_H_INCLUDED
