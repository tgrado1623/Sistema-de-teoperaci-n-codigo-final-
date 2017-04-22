/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Sun Nov 20 21:35:57 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *tab_4;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(289, 368);
        label_4 = new QLabel(about);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 60, 53, 20));
        pushButton = new QPushButton(about);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 330, 96, 30));
        label_3 = new QLabel(about);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 30, 101, 21));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_5 = new QLabel(about);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 70, 151, 21));
        label_2 = new QLabel(about);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 131, 21));
        label_2->setFont(font);
        tabWidget = new QTabWidget(about);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 110, 271, 221));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 170, 271, 21));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 150, 251, 16));
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 90, 211, 16));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 20, 241, 16));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(0, 40, 221, 16));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 40, 171, 21));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 20, 171, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_22->setFont(font1);
        label_23 = new QLabel(tab_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 110, 121, 16));
        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 90, 91, 16));
        label_24->setFont(font1);
        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 170, 271, 21));
        tabWidget->addTab(tab_4, QString());
        pushButton_2 = new QPushButton(about);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 121, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../sirp.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(100, 150));
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 30, 54, 15));

        retranslateUi(about);
        QObject::connect(pushButton, SIGNAL(clicked()), about, SLOT(close_about()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QWidget *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("about", "Version 2", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("about", "Close", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("about", "Snake Gaits", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("about", "Using and IDE Qt Creator", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("about", "Parametrized ", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("about", "http://creativecommons.org/licenses/by-sa/3.0/", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("about", "Creative Commons Attribution 3.0 License", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("about", "Build on Nov 03 2011 at 18:10", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("about", "Parametrized gait programming interface", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("about", "for modular snake robots", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("about", "About", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("about", "Developer", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("about", "Laura Isabel P\303\241ez", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("about", "Project Director", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("about", "Kamilo Melo", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("about", "http://www.gruposirp.org/", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("about", "Authors", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
