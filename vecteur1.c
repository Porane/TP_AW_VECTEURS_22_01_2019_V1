#include <stdio.h>
#include "vecteur1.h"

void setvAB(vAB var)
{
    printf("Coordonnees de vecteur AB: \n");
    printf("x en Point A : ");
    scanf("%d", &var.pointA.x);
    printf("y en Point A : ");
    scanf("%d", &var.pointA.y);
    printf("x en Point B : ");
    scanf("%d", &var.pointB.x2);
    printf("y en Point B : ");
    scanf("%d", &var.pointB.y2);
}
