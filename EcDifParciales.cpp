//ecuaciones que dependen de mas de 1 variable
//1 ORDEN
//condicion inicial: una funcion
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double deltax = 0.1;
double deltat = 0.01;
double c = 1.0;
int n = (2.0 / deltax) + 1;

//declaracion metodos
double u_inicial(double *u, double x0, int n, double delax);
double uj_1(double *u, int i);
void imprimirU(double *u);
void actualizarU(double *u);

//main
int main()
{

  double T = 0.5;
  double xi = 0;
  
  
  double u[n];
  //se calcula pata t+deltat
  
  u_inicial(u, xi, n, deltax);
  imprimirU(u);

  actualizarU(u);
  actualizarU(u);
  actualizarU(u);
  actualizarU(u);
  actualizarU(u);
  actualizarU(u);
  actualizarU(u);
  
  
  imprimirU(u);
  
  return 0;
}

double u_inicial(double *u, double x0, int n, double deltax)
{
  double x = x0;
  for (int i = 0; i < n; i++)
  {
    if (x >= 0 && x <= 0.75)
    {
      u[i] = 1;
      // cout<<x << " "<<u[i] <<endl;
    } 
    else
    {
      u[i] = 0;
      // cout<<x << " "<<u[i]<<endl;
    }
    x += deltax;
  }
}

double uj_1(double *u, int i)
{
  if (i == n - 1)
  {
    return u[i];
  }
  else
  {
    return u[i] + c*(deltat/deltax)*(u[i+1]-u[i]);
  }
}

void imprimirU(double *u){
  for (int i = 0; i < n; i++)
  {
    u[i] = uj_1(u,i);
    cout << u[i] << " " ;
  }
  cout<<endl;
}


void actualizarU(double *u){
  for (int i = 0; i < n; i++)
  {
    u[i] = uj_1(u,i);
  }
}