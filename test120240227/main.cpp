#include <QCoreApplication>
#include <QDebug>

#define INCREMENTA(arg) arg++;

#define IMPRIME_HOLA qDebug() << "Hola";

#define INCREMENTA3(a,b,c) a++; b++; c++;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num = 0;
    int x=0,y=1,z=2;

    INCREMENTA(num)
    IMPRIME_HOLA;
    INCREMENTA3(x,y,z)

    qDebug() << x;
    qDebug() << y;
    qDebug() << z;

    return a.exec();
}
