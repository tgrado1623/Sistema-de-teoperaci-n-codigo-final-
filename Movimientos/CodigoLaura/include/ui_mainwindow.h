/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Nov 20 21:54:03 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QCheckBox *torque;
    QCheckBox *velocidad;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *q1;
    QCheckBox *q2;
    QCheckBox *q3;
    QCheckBox *q4;
    QCheckBox *q5;
    QCheckBox *q6;
    QCheckBox *q7;
    QCheckBox *q8;
    QCheckBox *q9;
    QCheckBox *q10;
    QCheckBox *q11;
    QCheckBox *q12;
    QCheckBox *q13;
    QCheckBox *q14;
    QCheckBox *q15;
    QCheckBox *q16;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_17;
    QSpinBox *tiempo;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *offset_par;
    QSpinBox *amplitud_par;
    QSpinBox *offset_impar;
    QSpinBox *amplitud_impar;
    QSpinBox *desfase;
    QSpinBox *dtheta_dn;
    QSpinBox *dtheta_dt;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(751, 518);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(100, 0, 441, 481));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 220, 121, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../sw.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(48, 48));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(50, 320, 121, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../he.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon1);
        pushButton_9->setIconSize(QSize(48, 48));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(160, 410, 121, 61));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../ro.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon2);
        pushButton_10->setIconSize(QSize(48, 48));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(270, 320, 121, 61));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../lpha.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon3);
        pushButton_11->setIconSize(QSize(48, 48));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(310, 220, 121, 61));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../lpo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(48, 48));
        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(270, 120, 121, 61));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../lp.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon5);
        pushButton_13->setIconSize(QSize(48, 48));
        pushButton_14 = new QPushButton(groupBox_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(160, 40, 121, 61));
        pushButton_14->setLayoutDirection(Qt::LeftToRight);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../h.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon6);
        pushButton_14->setIconSize(QSize(48, 48));
        pushButton_14->setFlat(false);
        pushButton_15 = new QPushButton(groupBox_2);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(50, 120, 121, 61));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../swl.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon7);
        pushButton_15->setIconSize(QSize(48, 48));
        torque = new QCheckBox(groupBox_2);
        torque->setObjectName(QString::fromUtf8("torque"));
        torque->setGeometry(QRect(20, 400, 121, 21));
        torque->setTristate(false);
        velocidad = new QCheckBox(groupBox_2);
        velocidad->setObjectName(QString::fromUtf8("velocidad"));
        velocidad->setGeometry(QRect(20, 420, 131, 21));
        velocidad->setTristate(false);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 81, 481));
        layoutWidget_4 = new QWidget(groupBox_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 30, 61, 441));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        q1 = new QCheckBox(layoutWidget_4);
        q1->setObjectName(QString::fromUtf8("q1"));
        q1->setTristate(false);

        verticalLayout_3->addWidget(q1);

        q2 = new QCheckBox(layoutWidget_4);
        q2->setObjectName(QString::fromUtf8("q2"));
        q2->setTristate(false);

        verticalLayout_3->addWidget(q2);

        q3 = new QCheckBox(layoutWidget_4);
        q3->setObjectName(QString::fromUtf8("q3"));
        q3->setTristate(false);

        verticalLayout_3->addWidget(q3);

        q4 = new QCheckBox(layoutWidget_4);
        q4->setObjectName(QString::fromUtf8("q4"));
        q4->setTristate(false);

        verticalLayout_3->addWidget(q4);

        q5 = new QCheckBox(layoutWidget_4);
        q5->setObjectName(QString::fromUtf8("q5"));
        q5->setTristate(false);

        verticalLayout_3->addWidget(q5);

        q6 = new QCheckBox(layoutWidget_4);
        q6->setObjectName(QString::fromUtf8("q6"));
        q6->setTristate(false);

        verticalLayout_3->addWidget(q6);

        q7 = new QCheckBox(layoutWidget_4);
        q7->setObjectName(QString::fromUtf8("q7"));
        q7->setTristate(false);

        verticalLayout_3->addWidget(q7);

        q8 = new QCheckBox(layoutWidget_4);
        q8->setObjectName(QString::fromUtf8("q8"));
        q8->setTristate(false);

        verticalLayout_3->addWidget(q8);

        q9 = new QCheckBox(layoutWidget_4);
        q9->setObjectName(QString::fromUtf8("q9"));
        q9->setTristate(false);

        verticalLayout_3->addWidget(q9);

        q10 = new QCheckBox(layoutWidget_4);
        q10->setObjectName(QString::fromUtf8("q10"));
        q10->setTristate(false);

        verticalLayout_3->addWidget(q10);

        q11 = new QCheckBox(layoutWidget_4);
        q11->setObjectName(QString::fromUtf8("q11"));
        q11->setTristate(false);

        verticalLayout_3->addWidget(q11);

        q12 = new QCheckBox(layoutWidget_4);
        q12->setObjectName(QString::fromUtf8("q12"));
        q12->setTristate(false);

        verticalLayout_3->addWidget(q12);

        q13 = new QCheckBox(layoutWidget_4);
        q13->setObjectName(QString::fromUtf8("q13"));
        q13->setTristate(false);

        verticalLayout_3->addWidget(q13);

        q14 = new QCheckBox(layoutWidget_4);
        q14->setObjectName(QString::fromUtf8("q14"));
        q14->setTristate(false);

        verticalLayout_3->addWidget(q14);

        q15 = new QCheckBox(layoutWidget_4);
        q15->setObjectName(QString::fromUtf8("q15"));
        q15->setTristate(false);

        verticalLayout_3->addWidget(q15);

        q16 = new QCheckBox(layoutWidget_4);
        q16->setObjectName(QString::fromUtf8("q16"));
        q16->setTristate(false);

        verticalLayout_3->addWidget(q16);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(550, 230, 191, 231));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 80, 171, 101));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../snake.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon8);
        pushButton_3->setIconSize(QSize(120, 70));
        layoutWidget_3 = new QWidget(groupBox_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(40, 30, 105, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout->addWidget(label_17);

        tiempo = new QSpinBox(layoutWidget_3);
        tiempo->setObjectName(QString::fromUtf8("tiempo"));
        tiempo->setMaximum(100);

        horizontalLayout->addWidget(tiempo);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 200, 61, 31));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(550, 0, 191, 241));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 30, 71, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        offset_par = new QSpinBox(layoutWidget);
        offset_par->setObjectName(QString::fromUtf8("offset_par"));
        offset_par->setMinimum(-120);
        offset_par->setMaximum(120);

        verticalLayout->addWidget(offset_par);

        amplitud_par = new QSpinBox(layoutWidget);
        amplitud_par->setObjectName(QString::fromUtf8("amplitud_par"));
        amplitud_par->setMinimum(-120);
        amplitud_par->setMaximum(120);

        verticalLayout->addWidget(amplitud_par);

        offset_impar = new QSpinBox(layoutWidget);
        offset_impar->setObjectName(QString::fromUtf8("offset_impar"));
        offset_impar->setMinimum(-120);
        offset_impar->setMaximum(120);

        verticalLayout->addWidget(offset_impar);

        amplitud_impar = new QSpinBox(layoutWidget);
        amplitud_impar->setObjectName(QString::fromUtf8("amplitud_impar"));
        amplitud_impar->setMinimum(-120);
        amplitud_impar->setMaximum(120);

        verticalLayout->addWidget(amplitud_impar);

        desfase = new QSpinBox(layoutWidget);
        desfase->setObjectName(QString::fromUtf8("desfase"));
        desfase->setMinimum(-120);
        desfase->setMaximum(120);

        verticalLayout->addWidget(desfase);

        dtheta_dn = new QSpinBox(layoutWidget);
        dtheta_dn->setObjectName(QString::fromUtf8("dtheta_dn"));
        dtheta_dn->setMinimum(-120);
        dtheta_dn->setMaximum(120);

        verticalLayout->addWidget(dtheta_dn);

        dtheta_dt = new QSpinBox(layoutWidget);
        dtheta_dt->setObjectName(QString::fromUtf8("dtheta_dt"));
        dtheta_dt->setMinimum(-120);
        dtheta_dt->setMaximum(120);

        verticalLayout->addWidget(dtheta_dt);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 30, 71, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_14, SIGNAL(clicked()), MainWindow, SLOT(home()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), MainWindow, SLOT(linear()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(linear_offset()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(linear_high()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(rolling()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(helix_rolling()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(sidewinding()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), MainWindow, SLOT(sidewinding_low()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(abrir_about()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(mover()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Parametrized  Snake Gaits", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Predesigned Gaits", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Side-\n"
"winding", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "Helix\n"
"Rolling", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "Lateral\n"
"Rolling", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "Linear\n"
"Prog.\n"
"HighAmp.", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "Linear\n"
"Prog.\n"
"Offset", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "Linear\n"
"Prog.", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "Side-\n"
"Winding\n"
"LowAmp.", 0, QApplication::UnicodeUTF8));
        torque->setText(QApplication::translate("MainWindow", "DAQ Torque", 0, QApplication::UnicodeUTF8));
        velocidad->setText(QApplication::translate("MainWindow", "DAQ Speed", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Joints", 0, QApplication::UnicodeUTF8));
        q1->setText(QApplication::translate("MainWindow", "Q1", 0, QApplication::UnicodeUTF8));
        q2->setText(QApplication::translate("MainWindow", "Q2", 0, QApplication::UnicodeUTF8));
        q3->setText(QApplication::translate("MainWindow", "Q3", 0, QApplication::UnicodeUTF8));
        q4->setText(QApplication::translate("MainWindow", "Q4", 0, QApplication::UnicodeUTF8));
        q5->setText(QApplication::translate("MainWindow", "Q5", 0, QApplication::UnicodeUTF8));
        q6->setText(QApplication::translate("MainWindow", "Q6", 0, QApplication::UnicodeUTF8));
        q7->setText(QApplication::translate("MainWindow", "Q7", 0, QApplication::UnicodeUTF8));
        q8->setText(QApplication::translate("MainWindow", "Q8", 0, QApplication::UnicodeUTF8));
        q9->setText(QApplication::translate("MainWindow", "Q9", 0, QApplication::UnicodeUTF8));
        q10->setText(QApplication::translate("MainWindow", "Q10", 0, QApplication::UnicodeUTF8));
        q11->setText(QApplication::translate("MainWindow", "Q11", 0, QApplication::UnicodeUTF8));
        q12->setText(QApplication::translate("MainWindow", "Q12", 0, QApplication::UnicodeUTF8));
        q13->setText(QApplication::translate("MainWindow", "Q13", 0, QApplication::UnicodeUTF8));
        q14->setText(QApplication::translate("MainWindow", "Q14", 0, QApplication::UnicodeUTF8));
        q15->setText(QApplication::translate("MainWindow", "Q15", 0, QApplication::UnicodeUTF8));
        q16->setText(QApplication::translate("MainWindow", "Q16", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Execution", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Move", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Time (s)", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gait Parameters", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Offset Even", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Amp. Even", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Offset Odd", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Amp. Odd", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Delta", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "dTheta/dn", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "dTheta/dt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
