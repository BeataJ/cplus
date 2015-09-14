//program solve the single quadrupul equastion ax2+bx+c=0
#include<iostream>
using namespace std;
//prototype  declarations 
void wspolczynniki(double*  a,double* b, double* c);
double delta(double a,double b,double c);//
void piewiastki(double a, double b, double c);

//main function
int main() {
wspolczynniki(&a ,&b, &c);
double d=delta(a,b,c);
if (d<0) cout<<" Rownanie kwadratowe nie posiada pierwiastkow  w zbiorze liczb rzeczywistych"<<endl;
else if (d==0) cout <<"Pojedynczy pierwiastek rownania "<<endl;
else if (d>0) cout <<" Dwa pierwiastki rownania : "<<endl;
}
void wspolczynniki(double *a,double *b, double*c) {
  cout <<" Wartosc wspolczynnika a ";
  cin>> *a;
  cout<<" Wartosc wspolczynnika b ";
  cin>>*b;
  cout << " Wartosc wspolczynnika c ";
  cin>> *c;
}
double delta(double a,double b,double c)
{
  return b*b -4*a*c;
}

void piewiastki(double* a, double* b, double* c) {
if (*a==0) {
cout<<" Postac rownania sprowadza sie do postaci liniowej bx+c=0";  
cout<<" Rowzwiazaniem jest : "<<-(*b)/(*c);
}
else 
}
