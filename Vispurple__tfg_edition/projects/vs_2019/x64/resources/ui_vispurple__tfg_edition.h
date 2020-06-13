/********************************************************************************
** Form generated from reading UI file 'vispurple__tfg_edition.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISPURPLE__TFG_EDITION_H
#define UI_VISPURPLE__TFG_EDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vispurple__tfg_editionClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QPushButton *pushButton;
    QGroupBox *Protanopia;
    QLabel *label_13;
    QLabel *label_14;
    QGroupBox *Protanopia_2;
    QLabel *label_15;
    QLabel *label_16;
    QGroupBox *Protanopia_3;
    QLabel *label_17;
    QLabel *label_18;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *tab_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Vispurple__tfg_editionClass)
    {
        if (Vispurple__tfg_editionClass->objectName().isEmpty())
            Vispurple__tfg_editionClass->setObjectName(QString::fromUtf8("Vispurple__tfg_editionClass"));
        Vispurple__tfg_editionClass->resize(1264, 858);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Vispurple__tfg_editionClass->sizePolicy().hasHeightForWidth());
        Vispurple__tfg_editionClass->setSizePolicy(sizePolicy);
        Vispurple__tfg_editionClass->setToolTipDuration(-1);
        Vispurple__tfg_editionClass->setAutoFillBackground(false);
        Vispurple__tfg_editionClass->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(Vispurple__tfg_editionClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1261, 811));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        tabWidget->setPalette(palette);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(820, 10, 421, 761));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 720, 91, 23));
        Protanopia = new QGroupBox(groupBox_4);
        Protanopia->setObjectName(QString::fromUtf8("Protanopia"));
        Protanopia->setGeometry(QRect(20, 30, 381, 221));
        label_13 = new QLabel(Protanopia);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 30, 351, 151));
        label_14 = new QLabel(Protanopia);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 190, 101, 21));
        Protanopia_2 = new QGroupBox(groupBox_4);
        Protanopia_2->setObjectName(QString::fromUtf8("Protanopia_2"));
        Protanopia_2->setGeometry(QRect(20, 260, 381, 221));
        label_15 = new QLabel(Protanopia_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 30, 351, 151));
        label_16 = new QLabel(Protanopia_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 190, 101, 21));
        Protanopia_3 = new QGroupBox(groupBox_4);
        Protanopia_3->setObjectName(QString::fromUtf8("Protanopia_3"));
        Protanopia_3->setGeometry(QRect(20, 490, 381, 221));
        label_17 = new QLabel(Protanopia_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 30, 351, 151));
        label_18 = new QLabel(Protanopia_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 190, 101, 21));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 10, 791, 581));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(19, 60, 301, 21));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 110, 61, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 150, 741, 401));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        label->setPalette(palette1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 60, 75, 23));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 301, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 90, 301, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 110, 281, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        Vispurple__tfg_editionClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Vispurple__tfg_editionClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Vispurple__tfg_editionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Vispurple__tfg_editionClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Vispurple__tfg_editionClass->setStatusBar(statusBar);

        retranslateUi(Vispurple__tfg_editionClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Vispurple__tfg_editionClass);
    } // setupUi

    void retranslateUi(QMainWindow *Vispurple__tfg_editionClass)
    {
        Vispurple__tfg_editionClass->setWindowTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Vispurple__tfg_edition", nullptr));
#if QT_CONFIG(tooltip)
        Vispurple__tfg_editionClass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_4->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Accessibility Report", nullptr));
        pushButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Export Report", nullptr));
        Protanopia->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanopia", nullptr));
        label_13->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        Protanopia_2->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranopia", nullptr));
        label_15->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        Protanopia_3->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanopia", nullptr));
        label_17->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Previsualization", nullptr));
        label->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Load Image", nullptr));
        label_8->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Window", nullptr));
        label_9->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "FPS", nullptr));
        label_10->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Warning: high rates could affect app or system perform", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Vispurple__tfg_editionClass", "Analyze", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Vispurple__tfg_editionClass", "Simulate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vispurple__tfg_editionClass: public Ui_Vispurple__tfg_editionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISPURPLE__TFG_EDITION_H
