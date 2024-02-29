#include <QCoreApplication>

struct Punto2D
{
    double x,y;

    void inicializa(double, double);
    Punto2D suma(const Punto2D &);
    void printPunto();
};

void Punto2D::inicializa(double x, double y){
    this->x = x;
    this->y = y;
}

Punto2D Punto2D::suma(const Punto2D &p){
    Punto2D pAux;

    pAux.x = x + p.x;
    pAux.y = y + p.y;

   return pAux;
}

void Punto2D::printPunto(){
    qDebug() << x;
    qDebug() << y;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Punto2D p1,p2,p3;

    p1.inicializa(1,1);
    p2.inicializa(2,2);
    p3.inicializa(3,3);

    p1.suma(p3).printPunto();


    return a.exec();
}
