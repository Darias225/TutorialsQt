#include <QCoreApplication>
#include <QDebug>

struct Pos2D
{
protected:
    double x;
    double y;


    Pos2D() {
        this->x = 0;
        this->y = 0;
    }
    Pos2D(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void printPos(){
        qDebug() <<
            "Pos X : " << x << "\n"
            "Pos Y : " << y << "\n";
    }
    ~Pos2D(){
    }

};

struct Nacionalidad {


protected:
    QString name;

    Nacionalidad(){
        this->name = "";
    }

    Nacionalidad(QString name){
        this->name = name;

    }
    ~Nacionalidad(){
    }

    void printNacion(){
        qDebug() << "nacion : " << name;
    }
};

struct Persona : Pos2D, Nacionalidad {

private:
    static int nPerson;
    int nPersonAct;

public:

    int edad;

    Persona()
    : Pos2D(), Nacionalidad()
    {
        edad = 0;
        nPersonAct = 0;
        if(nPersonAct>=0)
        {
            nPerson ++;
            nPersonAct = nPerson;
        }
        }

    Persona(int edad, int x, int y,QString name)
    :  Pos2D(x, y), Nacionalidad(name)
    {
        this->edad = edad;
        nPersonAct = 0;
        if(nPersonAct>=0)
        {
            nPerson ++;
            nPersonAct = nPerson;
        }
    }

    int getNPersona(){
        return this->nPerson;
    }

    void printPersona(){
        printPos();
        qDebug()
            << "Edad" << edad <<"\n";
        printNacion();
        qDebug()
            << "Num persona" << nPersonAct;
    }

};

int Persona::nPerson = 0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Persona p1 = Persona(26,0,0,"ff");
    Persona p2 = Persona(30,0,0,"ff");

    p1.printPersona();
    p2.printPersona();

    return a.exec();
}
