// Fichier dans lequel vous écrirez les expressions à évaluer
#include "definitionsFonctions.cpp"
#define EVAL(exp) cout << "Valeur de " << (#exp) <<" : "<< (exp) << endl


int main()
{
  srand(time(NULL));
  boolalpha(cout);

  cout << "\n=================================================================\n ";

  // Expressions à évaluer
  cout << "\n==== Prise en main =======\n";
  // commande pour évaluer l'expression 3+4
  EVAL( 3+4 );
  // A vous :
  EVAL( true || false);
  EVAL( 3*4 );
  EVAL( abs(-3) );
  //EVAL(2/(1-1));
  
  cout << "\n============Exercices============\n";
  cout << "\n";
  
  EVAL(8/2);
  EVAL(9/2);
  EVAL(8%4);
  EVAL(9%4);
  EVAL(8.5 + 1);
  EVAL(8.2/4.1);
  EVAL(pow(3,2));
  EVAL(sqrt(25));
  EVAL(sqrt(pow(12.3,2)));

  cout << "\n============Exercices 2============\n";
  cout << "\n";

  EVAL(true);
  EVAL(2>3);
  EVAL(!(2>3));
  EVAL((2>3) && true);
  EVAL((2>3) || true);
  EVAL( true || ((2/0)>1));
  EVAL(2>3? 5 : 7);
  EVAL(sqrt(2)>1.4? 5 : 7);

  cout << "\n============Exercices 2bis============\n";
  cout << "\n";

  EVAL(moyenne(2.3 , 8));
  EVAL(max3(3,9,2.5));
  EVAL(multiple (2,0));
  EVAL(multiple (0,2));
  EVAL(multiple (0,0));
  EVAL(triangleEqui(2,5,3));
  EVAL(triangle(2,5,3));
  EVAL(triangle(3,10,5));
  EVAL(triangleIso(2,5,3));
  EVAL(triangleRect(3,5,4));
  EVAL(ouExcl(true,false));
  EVAL(ouExcl(true,true));
  EVAL(mul2ou3(3));
  EVAL(mul2ou3(12));
  EVAL(memeDizaine(922,929));
  EVAL(memeDizaine(128,135));
  EVAL(memeParite(922,962));
  EVAL(memeParite(921,963));
  EVAL(memeParite(922,969));
  EVAL(gainRoulette(100,675,500));
  EVAL(gainRoulette(100,675,672));
  EVAL(gainRoulette(100,675,675));

  cout << "\n============Exercices 3============\n";
  cout << "\n";

  EVAL(estPair(2));
  EVAL(estPair(-2));
  EVAL(estPair(-1));
  EVAL(existeMul11(2,10));
  EVAL(existeMul11(22,22));
  EVAL(existeMul11(22,2));
  EVAL(maxMul11(3,43));
  EVAL(maxMul11(3,4));
  EVAL(nbMul11(3,43));
  EVAL(nbMul11(3,4));
  EVAL(somMul11(3,54));
  EVAL(somMul11(3,4));
  
  
  cout << "\n=================================================================\n ";
  return 0;
}

