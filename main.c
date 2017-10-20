//-----------------------------------------------------------------------------
// Ass1.c
//
// check triangels
//
// Group: 17208 study assistant ?
//
// Authors: Resch Florian 1631077 und Breitenthaler Jonathan
//
// Latest Changes: 10.10.2017 (by Resch Florian and Breitenthaler Jonathan)
//-----------------------------------------------------------------------------
//

#include <stdio.h>

#define UCHAR_MAX 1

struct triangel_
{
    double a_;
    double b_;
    double c_;
};

int main()
{
  struct triangel_ triangels[UCHAR_MAX - 1];

  return 0;
}

// Würde vorschlage das wir ein Feld mit structuren übegen
// Rückgabe ist die Anzahl der eingelesenen trinagel und 0 wenn keins einglesen wurde.
int input(struct triangel_ *triangels[])
{
  return 0;
}

// ausgabe der Fehlermelldung und wenn err gleich 0 das Feld ausgeben
void output(int err)
{
  printf("ausgabe");
}

//bei ausgabe aufrufen und überprüfen ob es ein bestimmter typ ist (dann gleich hier ausgeben)
void checkType(struct triangel_ triangel)
{
  printf("ausgabe bei bestimmten type");
}

//Dreiecksungleichung überprüfen -> return o wenn es eins ist und 1 wenn es keines ist
int checkIfTriangel(struct triangel_ triangel)
{
  return 0;
}

// sortiert unser Feld mit triangels
void sort(struct triangel_ *triangels[])
{
  printf("sortieren");
}

