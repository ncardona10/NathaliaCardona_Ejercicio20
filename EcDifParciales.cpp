//ecuaciones que dependen de mas de 1 variable
//1 ORDEN
//condicion inicial: una funcion
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//declaracion metodos
double u_inicial(double x);



//main
int main() {
  double deltax=0.1;
  double deltat=0.01;
  double T=0.5;
  double xi=0;
  double tj=0;
  int n=(max_x-min_x)/deltax+1;
  u=new double [n]
  //se calcula pata t+deltat

  u_inicial(u*,xi,n,deltax);
  for (int i=0;i<=n;i++){  
    double tj-=(deltat*(u[i+1]-u[i]))/deltax;
    cout<<xi<<" "<< tj<<endl;
  }

    return 0;
}

double u_inicial(double u*,double x0, int n;double deltax){
  u[0]=x0;
  for(int i=0;i<=n;i++){
    double x=x0;
    if(x>=0 && x<=0.75){
      return u[i]=1;
    }
    else{
      return u[i]=0;
    }
    x+=deltax;
  }
}
















//metodos
