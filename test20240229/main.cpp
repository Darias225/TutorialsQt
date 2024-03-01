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
    virtual ~Persona(){
        qDebug() <<"Deleted Persona :" <<id;
    }

    virtual void printPersona() const = 0;
};

void Persona::printPersona() const{
    qDebug() <<"Persona :" <<id << " name : " <<name ;
}

int Persona::idAct = 0;

class Empleado : public Persona
{
public:
    Empleado() {
                this->name = "";
    }
    Empleado(QString name) {
        this->name = name;
    }
    ~Empleado() {
        qDebug() <<"Deleted Empleado :" <<id;
    }

    void printPersona() const override{
        qDebug()<<"ID : " << id <<" " <<"Empleado : " << name ;
    }

};
class Jefe : public Persona
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
        qDebug()<<"ID : " << id <<" " <<"Jefe : " << name ;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Persona *persona1 = new Jefe("Dani");

    Jefe *jefe1 = new Jefe("Dani2");
    Empleado *empleado1 = new Empleado("Dani3");
    Jefe *jefe2 = new Jefe("Dani4");

    persona1->printPersona();
    jefe1->printPersona();
    empleado1->printPersona();
    jefe2->printPersona();

    delete jefe1;
    delete jefe2;
    delete empleado1;
    delete persona1;


    return a.exec();
}
