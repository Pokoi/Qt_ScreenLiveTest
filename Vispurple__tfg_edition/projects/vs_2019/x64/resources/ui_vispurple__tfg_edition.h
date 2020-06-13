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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vispurple__tfg_editionClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *availableWindowsComboBox;
    QComboBox *availableFPSComboBox;
    QLabel *previsualizationLabel;
    QPushButton *loadImageButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *refreshAvailableWindowsButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *exportReportButton;
    QGroupBox *Tritanopia;
    QLabel *tritanopiaLabel;
    QLabel *tritanopiaIndexLabel;
    QTextEdit *tritanopiaObservations;
    QGroupBox *Protanopia;
    QLabel *protanopiaLabel;
    QLabel *protanopiaIndexLabel;
    QTextEdit *protanopiaObservations;
    QGroupBox *Deuteranopia;
    QLabel *deuteranopiaLabel;
    QLabel *deuteranopiaIndexLabel;
    QTextEdit *deuteranopiaObservations;
    QPushButton *calculateReportButton;
    QLabel *label_11;
    QWidget *tab_2;
    QRadioButton *protanopiaSimulation;
    QRadioButton *deuteranopiaSimulation;
    QRadioButton *tritanopiaSimulation;
    QPushButton *saveImageButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Vispurple__tfg_editionClass)
    {
        if (Vispurple__tfg_editionClass->objectName().isEmpty())
            Vispurple__tfg_editionClass->setObjectName(QString::fromUtf8("Vispurple__tfg_editionClass"));
        Vispurple__tfg_editionClass->resize(1269, 824);
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
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 791, 651));
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
        groupBox->setPalette(palette);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        availableWindowsComboBox = new QComboBox(groupBox);
        availableWindowsComboBox->setObjectName(QString::fromUtf8("availableWindowsComboBox"));
        availableWindowsComboBox->setGeometry(QRect(19, 60, 301, 21));
        availableWindowsComboBox->setMaxVisibleItems(50);
        availableWindowsComboBox->setFrame(true);
        availableFPSComboBox = new QComboBox(groupBox);
        availableFPSComboBox->setObjectName(QString::fromUtf8("availableFPSComboBox"));
        availableFPSComboBox->setGeometry(QRect(20, 110, 61, 21));
        previsualizationLabel = new QLabel(groupBox);
        previsualizationLabel->setObjectName(QString::fromUtf8("previsualizationLabel"));
        previsualizationLabel->setGeometry(QRect(30, 210, 741, 401));
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
        previsualizationLabel->setPalette(palette1);
        loadImageButton = new QPushButton(groupBox);
        loadImageButton->setObjectName(QString::fromUtf8("loadImageButton"));
        loadImageButton->setGeometry(QRect(690, 60, 75, 23));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 301, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 90, 301, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 110, 321, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label_10->setFont(font);
        refreshAvailableWindowsButton = new QPushButton(groupBox);
        refreshAvailableWindowsButton->setObjectName(QString::fromUtf8("refreshAvailableWindowsButton"));
        refreshAvailableWindowsButton->setGeometry(QRect(20, 150, 75, 23));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(810, 20, 441, 771));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        tabWidget->setPalette(palette2);
        tabWidget->setMouseTracking(false);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::East);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setAutoFillBackground(false);
        exportReportButton = new QPushButton(tab);
        exportReportButton->setObjectName(QString::fromUtf8("exportReportButton"));
        exportReportButton->setGeometry(QRect(300, 700, 91, 23));
        Tritanopia = new QGroupBox(tab);
        Tritanopia->setObjectName(QString::fromUtf8("Tritanopia"));
        Tritanopia->setGeometry(QRect(10, 470, 381, 221));
        tritanopiaLabel = new QLabel(Tritanopia);
        tritanopiaLabel->setObjectName(QString::fromUtf8("tritanopiaLabel"));
        tritanopiaLabel->setGeometry(QRect(10, 30, 211, 151));
        tritanopiaIndexLabel = new QLabel(Tritanopia);
        tritanopiaIndexLabel->setObjectName(QString::fromUtf8("tritanopiaIndexLabel"));
        tritanopiaIndexLabel->setGeometry(QRect(10, 190, 101, 21));
        tritanopiaObservations = new QTextEdit(Tritanopia);
        tritanopiaObservations->setObjectName(QString::fromUtf8("tritanopiaObservations"));
        tritanopiaObservations->setGeometry(QRect(240, 20, 131, 181));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        tritanopiaObservations->setPalette(palette3);
        tritanopiaObservations->setFrameShape(QFrame::StyledPanel);
        tritanopiaObservations->setFrameShadow(QFrame::Raised);
        tritanopiaObservations->setLineWidth(2);
        tritanopiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tritanopiaObservations->setAcceptRichText(true);
        Protanopia = new QGroupBox(tab);
        Protanopia->setObjectName(QString::fromUtf8("Protanopia"));
        Protanopia->setGeometry(QRect(10, 10, 381, 221));
        protanopiaLabel = new QLabel(Protanopia);
        protanopiaLabel->setObjectName(QString::fromUtf8("protanopiaLabel"));
        protanopiaLabel->setGeometry(QRect(10, 30, 211, 151));
        protanopiaIndexLabel = new QLabel(Protanopia);
        protanopiaIndexLabel->setObjectName(QString::fromUtf8("protanopiaIndexLabel"));
        protanopiaIndexLabel->setGeometry(QRect(10, 190, 101, 21));
        protanopiaObservations = new QTextEdit(Protanopia);
        protanopiaObservations->setObjectName(QString::fromUtf8("protanopiaObservations"));
        protanopiaObservations->setGeometry(QRect(240, 20, 131, 181));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        protanopiaObservations->setPalette(palette4);
        protanopiaObservations->setFrameShape(QFrame::StyledPanel);
        protanopiaObservations->setFrameShadow(QFrame::Raised);
        protanopiaObservations->setLineWidth(2);
        protanopiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        protanopiaObservations->setAcceptRichText(true);
        Deuteranopia = new QGroupBox(tab);
        Deuteranopia->setObjectName(QString::fromUtf8("Deuteranopia"));
        Deuteranopia->setGeometry(QRect(10, 240, 381, 221));
        deuteranopiaLabel = new QLabel(Deuteranopia);
        deuteranopiaLabel->setObjectName(QString::fromUtf8("deuteranopiaLabel"));
        deuteranopiaLabel->setGeometry(QRect(10, 30, 211, 151));
        deuteranopiaIndexLabel = new QLabel(Deuteranopia);
        deuteranopiaIndexLabel->setObjectName(QString::fromUtf8("deuteranopiaIndexLabel"));
        deuteranopiaIndexLabel->setGeometry(QRect(10, 190, 101, 21));
        deuteranopiaObservations = new QTextEdit(Deuteranopia);
        deuteranopiaObservations->setObjectName(QString::fromUtf8("deuteranopiaObservations"));
        deuteranopiaObservations->setGeometry(QRect(240, 20, 131, 181));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        deuteranopiaObservations->setPalette(palette5);
        deuteranopiaObservations->setFrameShape(QFrame::StyledPanel);
        deuteranopiaObservations->setFrameShadow(QFrame::Raised);
        deuteranopiaObservations->setLineWidth(2);
        deuteranopiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        deuteranopiaObservations->setAcceptRichText(true);
        calculateReportButton = new QPushButton(tab);
        calculateReportButton->setObjectName(QString::fromUtf8("calculateReportButton"));
        calculateReportButton->setGeometry(QRect(10, 700, 91, 23));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 730, 321, 16));
        label_11->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        protanopiaSimulation = new QRadioButton(tab_2);
        protanopiaSimulation->setObjectName(QString::fromUtf8("protanopiaSimulation"));
        protanopiaSimulation->setGeometry(QRect(20, 30, 261, 31));
        deuteranopiaSimulation = new QRadioButton(tab_2);
        deuteranopiaSimulation->setObjectName(QString::fromUtf8("deuteranopiaSimulation"));
        deuteranopiaSimulation->setGeometry(QRect(20, 70, 261, 31));
        tritanopiaSimulation = new QRadioButton(tab_2);
        tritanopiaSimulation->setObjectName(QString::fromUtf8("tritanopiaSimulation"));
        tritanopiaSimulation->setGeometry(QRect(20, 110, 261, 31));
        saveImageButton = new QPushButton(tab_2);
        saveImageButton->setObjectName(QString::fromUtf8("saveImageButton"));
        saveImageButton->setGeometry(QRect(330, 730, 75, 23));
        tabWidget->addTab(tab_2, QString());
        Vispurple__tfg_editionClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Vispurple__tfg_editionClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Vispurple__tfg_editionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Vispurple__tfg_editionClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Vispurple__tfg_editionClass->setStatusBar(statusBar);

        retranslateUi(Vispurple__tfg_editionClass);
        QObject::connect(refreshAvailableWindowsButton, SIGNAL(clicked()), Vispurple__tfg_editionClass, SLOT(update_available_windows()));
        QObject::connect(availableFPSComboBox, SIGNAL(currentIndexChanged(int)), Vispurple__tfg_editionClass, SLOT(set_delta_time()));
        QObject::connect(loadImageButton, SIGNAL(clicked()), Vispurple__tfg_editionClass, SLOT(load_image()));
        QObject::connect(exportReportButton, SIGNAL(clicked()), Vispurple__tfg_editionClass, SLOT(export_report()));
        QObject::connect(refreshAvailableWindowsButton, SIGNAL(clicked()), Vispurple__tfg_editionClass, SLOT(set_delta_time()));
        QObject::connect(calculateReportButton, SIGNAL(clicked()), Vispurple__tfg_editionClass, SLOT(update_accessibility_index()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Vispurple__tfg_editionClass);
    } // setupUi

    void retranslateUi(QMainWindow *Vispurple__tfg_editionClass)
    {
        Vispurple__tfg_editionClass->setWindowTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Vispurple__tfg_edition", nullptr));
#if QT_CONFIG(tooltip)
        Vispurple__tfg_editionClass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Previsualization", nullptr));
        previsualizationLabel->setText(QString());
        loadImageButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Load Image", nullptr));
        label_8->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Window", nullptr));
        label_9->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "FPS", nullptr));
        label_10->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Warning: high rates could affect app or system perform", nullptr));
        refreshAvailableWindowsButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Confirm", nullptr));
        exportReportButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Export Report", nullptr));
        Tritanopia->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanopia", nullptr));
        tritanopiaLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tritanopiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tritanopiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        Protanopia->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanopia", nullptr));
        protanopiaLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        protanopiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        protanopiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        Deuteranopia->setTitle(QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranopia", nullptr));
        deuteranopiaLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        deuteranopiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        deuteranopiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        calculateReportButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Calculate", nullptr));
        label_11->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Warning: this proccess can last a few seconds", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Vispurple__tfg_editionClass", "Visual Accessibility Report", nullptr));
        protanopiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanopia simulation", nullptr));
        deuteranopiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranopia simulation", nullptr));
        tritanopiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanopia simulation", nullptr));
        saveImageButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Save Image", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Vispurple__tfg_editionClass", "Simulation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vispurple__tfg_editionClass: public Ui_Vispurple__tfg_editionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISPURPLE__TFG_EDITION_H
