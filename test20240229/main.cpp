#include <QCoreApplication>

class Persona
{
    static int idAct;
protected:
    int id;
    QString name;

public:
    Persona() {
        idAct++;
        id = idAct;
        name = "";
    }
    Persona(const QString &name) {
        idAct++;
        id = idAct;
        this->name = name;
        qDebug() <<"Creando Persona :" <<id;
    }
    ~Persona(){
        qDebug() <<"Deleted Persona :" <<id;
    }
    virtual void printPersona() const = 0;

};

int Persona::idAct = 0;

class Empleado : Persona
{
public:
    Empleado() {
                this->name = name;
    }
    ~Empleado() {
        qDebug() <<"Deleted Empleado :" <<id;
    }

    void printPersona() const override{
        qDebug() <<"Empeado : " << name <<" ";
    }

};
class Jefe : Persona
{
public:
    Jefe() {
    }
    Jefe(const QString &name) {
        this->name = name;
    }
    ~Jefe(){
        qDebug() <<"Deleted Empleado :" <<id;
    }

    void printPersona() const override{
        qDebug() <<"Jefe : " << name <<" ";
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Jefe *jefe1 = new Jefe("ffff");

    jefe1->printPersona();

    return a.exec();
}
