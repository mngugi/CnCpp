#include <QApplication>

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

class MyWindow : public QWidget
{
public:
    MyWindow()
    {
        // Create a button
        QPushButton *button = new QPushButton("Click Me", this);

        // Set the size and position of the button
        button->setGeometry(50, 50, 200, 50);

        // Connect the button's clicked signal to a slot (function)
        connect(button, &QPushButton::clicked, this, &MyWindow::showMessage);
    }

private slots:
    void showMessage()
    {
        QMessageBox::information(this, "Message", "Button clicked!");
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create the window
    MyWindow window;
    window.setWindowTitle("Basic Qt GUI");
    window.resize(300, 200);
    window.show();

    return app.exec();
}
