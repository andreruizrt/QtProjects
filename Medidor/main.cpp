#include <QCoreApplication>
#include <QTextStream>
#include <QProcess>
#include <QDebug>
#include <QTime>
#include <QFile>


int main(int argc, char *argv[])
{
    if (argc == 1) {
        qDebug() << "medidor: missing file operand." <<
                        "\nTry 'medidor --help' for more information.";
        return 1;
    }

    if (argc == 2) {
        QString param = argv[1];

        if (param == "--help") {
            qDebug() << QString("Use [filename] program.exe");
//            qDebug() << QString("Use '%1' program.exe").arg(argv[1]);
            return 1;
        }
    }

    int res; // resultado
    QTime inicio;
    QFile arch;
    QTextStream io;
    QProcess proc; // processo

    QString program = argv[1];
    QString resultado = program;
    resultado.append("_resultado.txt");
    QCoreApplication a(argc, argv);

    inicio = QTime::currentTime();
    proc.start(program);
    proc.waitForFinished();
    res = inicio.msecsTo(QTime::currentTime());
    arch.setFileName(resultado);
    arch.open(QIODevice::WriteOnly | QIODevice::Text);
    io.setDevice(&arch);
    io << "O programa: " << program << " executou durante "
       << res << " milisegundos";
    arch.flush();
    arch.close();

    qDebug() << "Pressione Ctrl+C para terminar...";

    return a.exec();
}
