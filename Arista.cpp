#include <iostream>
using namespace std;
#include "Vertice.cpp"

class Arista {
  
  private:
    
    Vertice vi;
    Vertice vj;
  
  public:
  
    Arista(Vertice i, Vertice j){
      vi = i;
      vj = j;
    }
  
    Vertice getvi(){
      return vj;
    }
  
    Vertice getvj(){
      return vj;
    }
  
    void setvi(Vertice v){
      vi = v;
    }
  
    void setvj(Vertice v){
      vj = v;
    }
  
  Return 0;
  
}
