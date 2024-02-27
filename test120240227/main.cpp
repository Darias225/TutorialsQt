#include <QCoreApplication>
#include <QDebug>
#include <algorithm>

void printVector(int v[], int tam){
    int *p = v;
    for(int i = 0; i< tam; i++){
        qDebug() << *p;
        p++;
    }
}

bool comparacion(int a, int b){
    return a<b;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int v[] = {1,-2,3,-4,5,-6};

    int *pInicio = v;
    int *pFin = v + sizeof(v)/sizeof(int);

    printVector(v, sizeof(v)/sizeof(int));

    qDebug() << "\n------------------------- \n";

    std::sort(pInicio, pFin, comparacion);

    printVector(v, sizeof(v)/sizeof(int));

    return a.exec();
}
