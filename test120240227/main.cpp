#include <QCoreApplication>
#include <QDebug>

void printVector(int v[], int tam){
    int *p = v;
    for(int i = 0; i< tam; i++){
        qDebug() << *p;
        p++;
    }
}

void inicializar(int v[], int t){
    int *p = v;
    for(int i= 0; i<t ; i++)
        *(p + i) = 0;

}

void sumarVector(int v[], int t, int sumando){
    int *p = v;

    for(int i= 0; i<t ; i++)
        *(p + i) = *(p + i) + sumando;

}

int  *sumar2Vectores(int v[],int v2[], int v3[], int t){
    int *p = v;
    int *p2 = v2;

    int *vfinal = v3;

    for(int i= 0; i<t ; i++)
        *(vfinal+i) = *(p + i) + *(p2 + i);

    return vfinal;
}

int  *sumar2VectoresB(int v[],int v2[], int t){
    int *p = v;
    int *p2 = v2;

    int *vfinal;

    for(int i= 0; i<t ; i++)
        *(vfinal+i) = *(p + i) + *(p2 + i);

    return vfinal;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int v[] = {1,2,3,4,5,6};
    int v2[] = {1,2,3,4,5,6};
    int v3[] = {1,2,3,4,5,6};


    int *pfin;

  //  printVector(v,sizeof(v)/sizeof(int));

   // inicializar(v, sizeof(v)/sizeof(int));
   // inicializar(v2, sizeof(v)/sizeof(int));

   // printVector(v,sizeof(v)/sizeof(int));

 //   sumarVector(v, sizeof(v)/sizeof(int), 5);

 //   printVector(v,sizeof(v)/sizeof(int));

    pfin = sumar2Vectores(v,v2,v3,sizeof(v)/sizeof(int));

    printVector(pfin,sizeof(v)/sizeof(int));

    return a.exec();
}
