#include <QCoreApplication>

class Punto2D
{
public:
    double x,y;
    Punto2D() {
        x = 0;
        y = 0;
    }
    Punto2D(double x, double y) {
        this->x = x;
        this->y = y;
    }
    ~Punto2D(){
        qDebug() << "Deleted point ( " << x <<", " << y << " )";
    }

    void printPoint(){
        qDebug() << "( " << x <<", " << y << " )";
    }

};

Punto2D operator+(const Punto2D & p1, const Punto2D & p2){
    return Punto2D(p1.x+p2.y,p1.y+p2.y);
}
Punto2D operator-(Punto2D p1, Punto2D p2){
    return Punto2D(p1.x-p2.y,p1.y-p2.y);
}
Punto2D operator*(Punto2D p1, Punto2D p2){
    return Punto2D(p1.x*p2.y,p1.y*p2.y);
}
Punto2D operator/(const Punto2D &p1,const Punto2D & p2){
    return Punto2D(p1.x/p2.y,p1.y/p2.y);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Punto2D *p1 = new Punto2D(1,2);
    Punto2D *p2 = new Punto2D(3,4);


    *p1+*p2;

    delete p1;
    delete p2;

    return a.exec();
}
