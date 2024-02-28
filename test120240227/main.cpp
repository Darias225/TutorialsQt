#include <QCoreApplication>
#include <QDebug>

enum enumArray{
    NORMAL,
    INVERSO,
};

void printArray(int v[], int tam, enumArray forma){
    int *p = v;
    if(forma == NORMAL){
        for(int i=0; i < tam; i++){
            qDebug() << *(p+i);
        }
    }else if(forma == INVERSO) {
        for(int i=tam-1; i >= 0 ; i--){
            qDebug() << *(p+i);
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int v[] ={1,2,3,4,5};

    printArray(v,5,INVERSO);

    return a.exec();
}
