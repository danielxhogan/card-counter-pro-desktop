#include <CardCounterPRO.h>

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CardCounterPRO w;
	w.show();

	return a.exec();
}
