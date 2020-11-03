// Fichier dans lequel vous écrirez les fonctions que l'on vous demandera de définir

#include "listesEtTableaux.cpp"

// Fonction moyenne
// Données: a : nombre réel, b : nombre réel
// Résultat: Nombreréel, la moyenne de a et b
float moyenne(float a, float b)
{
  return (a+b)/2;
}

float max3(float a, float b, float c)
{
  return max(a,max(b,c));
}

bool multiple (int x, int y)
{
  return y==0 ? (x==0) : (x%y==0? true : false);
}

bool triangleEqui (float a, float b, float c)
{
  return a==b && b==c;
}

bool triangle (float a, float b, float c)
{
  return a+b<c ? false : (a+c<b ? false : !(b+c<a));
}

bool triangleRect (float a, float b, float c)
{
  return a*a+b*b==c*c ? true : (a*a+c*c==b*b ? true : b*b+c*c==a*a);
}

bool triangleIso (float a, float b, float c)
{
  return a==b? (b==c ? true : a==c): false;
}

bool ouExcl (bool a, bool b)
{
  return (a && !b) || (!a && b);
}

bool mul2ou3 (int n)
{
  return ouExcl( (n % 3 == 0) || (n % 2 == 0), (n % 6 == 0) );
}

bool memeDizaine (int n, int m)
{
  return (n / 10) == (m / 10);
}

bool memeParite (int n, int m)
{
  return ( (n % 2 == 0) && (m % 2 == 0) ) || ( !(n % 2 == 0) && !(m % 2 == 0) );
}

int gainRoulette(int mise, int numJoue, int numSorti)
{
  return (numJoue==numSorti ? mise*20 : (memeDizaine(numJoue,numSorti) ? mise*5 : (memeParite(numJoue,numSorti) ? mise*2 : 0)));
}

bool estPair(int n)
{
  return
    n==0 ? true : (n>0 ? !estPair(n-1) : !estPair(n+1));
}

//3.2

bool existeMul11 (int a, int b)
{
  return a>b ? false : (a % 11 == 0 ? true : existeMul11(a+1, b));
}

int maxMul11 (int a, int b)
{
  return a>b ? -1 : (b % 11 == 0 ? b : maxMul11(a, b-1));
}

int nbMul11 (int a, int b)
{
  return a>b ? 0 : (a % 11 == 0 ? 1+nbMul11(a+1,b) : nbMul11(a+1,b));
}

int somMul11 (int a, int b)
{
  return a>b ? 0 : (a % 11 == 0 ? a+somMul11(a+1,b) : somMul11(a+1,b));
}
