#include <stdio.h>
#include 'BrazoRobotico.h'
using namespace std


int main(){

        BrazoRobotico b1(4.0,3.0,2.0, FALSE);
        b1.mover(1.0,2.0,3.0);
        b1.coger();
        cout<<"El robot esta en -> x= "<< b1.getX<<
        ", y = "<<b1.getY<<", z = "<< endl;
        if(b1.getObjeto()){
                cout<<"Objeto cogido"<<endl;
        }else{
                cout<<"Sin objeto cogido"<<endl;
}
return 0;
}

