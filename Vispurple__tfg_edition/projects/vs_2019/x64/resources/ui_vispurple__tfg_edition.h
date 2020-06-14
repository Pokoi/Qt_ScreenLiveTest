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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *calculateReportButton;
    QLabel *label_11;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *protanopiaLabel;
    QLabel *protanopiaIndexLabel;
    QTextEdit *protanopiaObservations;
    QWidget *tab_4;
    QTextEdit *deuteranopiaObservations;
    QLabel *deuteranopiaLabel;
    QLabel *deuteranopiaIndexLabel;
    QWidget *tab_5;
    QTextEdit *tritanopiaObservations;
    QLabel *tritanopiaLabel;
    QLabel *tritanopiaIndexLabel;
    QWidget *tab_6;
    QTextEdit *achromatopsiaObservations;
    QLabel *achromatopsiaLabel;
    QLabel *achromatopsiaIndexLabel;
    QWidget *tab_7;
    QTextEdit *protanomalyObservations;
    QLabel *protanomalyLabel;
    QLabel *protanomalyIndexLabel;
    QWidget *tab_8;
    QTextEdit *deuteranomalyObservations;
    QLabel *deuteranomalyLabel;
    QLabel *deuteranomalyIndexLabel;
    QWidget *tab_9;
    QTextEdit *tritanomalyObservations;
    QLabel *tritanomalyLabel;
    QLabel *tritanomalyIndexLabel;
    QWidget *tab_10;
    QTextEdit *achromatomalyObservations;
    QLabel *achromatomalyLabel;
    QLabel *achromatomalyIndexLabel;
    QWidget *tab_2;
    QPushButton *saveImageButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *normalSimulation;
    QRadioButton *protanopiaSimulation;
    QRadioButton *deuteranopiaSimulation;
    QRadioButton *tritanopiaSimulation;
    QRadioButton *achromatopsiaSimulation;
    QRadioButton *protanomalySimulation;
    QRadioButton *deuteranomalySimulation;
    QRadioButton *tritanomalySimulation;
    QRadioButton *achromatomalySimulation;
    QRadioButton *protanopiaCorrection;
    QRadioButton *deuteranopiaCorrection;
    QCheckBox *edgeDetectionCheck;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Vispurple__tfg_editionClass)
    {
        if (Vispurple__tfg_editionClass->objectName().isEmpty())
            Vispurple__tfg_editionClass->setObjectName(QString::fromUtf8("Vispurple__tfg_editionClass"));
        Vispurple__tfg_editionClass->resize(1260, 824);
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
        calculateReportButton = new QPushButton(tab);
        calculateReportButton->setObjectName(QString::fromUtf8("calculateReportButton"));
        calculateReportButton->setGeometry(QRect(10, 700, 91, 23));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 730, 321, 16));
        label_11->setFont(font);
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 401, 641));
        tabWidget_2->setTabPosition(QTabWidget::East);
        tabWidget_2->setUsesScrollButtons(true);
        tabWidget_2->setDocumentMode(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        protanopiaLabel = new QLabel(tab_3);
        protanopiaLabel->setObjectName(QString::fromUtf8("protanopiaLabel"));
        protanopiaLabel->setGeometry(QRect(10, 10, 351, 221));
        protanopiaIndexLabel = new QLabel(tab_3);
        protanopiaIndexLabel->setObjectName(QString::fromUtf8("protanopiaIndexLabel"));
        protanopiaIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        protanopiaObservations = new QTextEdit(tab_3);
        protanopiaObservations->setObjectName(QString::fromUtf8("protanopiaObservations"));
        protanopiaObservations->setGeometry(QRect(10, 300, 361, 181));
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
        protanopiaObservations->setPalette(palette3);
        protanopiaObservations->setFrameShape(QFrame::StyledPanel);
        protanopiaObservations->setFrameShadow(QFrame::Raised);
        protanopiaObservations->setLineWidth(2);
        protanopiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        protanopiaObservations->setAcceptRichText(true);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        deuteranopiaObservations = new QTextEdit(tab_4);
        deuteranopiaObservations->setObjectName(QString::fromUtf8("deuteranopiaObservations"));
        deuteranopiaObservations->setGeometry(QRect(10, 300, 361, 181));
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
        deuteranopiaObservations->setPalette(palette4);
        deuteranopiaObservations->setFrameShape(QFrame::StyledPanel);
        deuteranopiaObservations->setFrameShadow(QFrame::Raised);
        deuteranopiaObservations->setLineWidth(2);
        deuteranopiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        deuteranopiaObservations->setAcceptRichText(true);
        deuteranopiaLabel = new QLabel(tab_4);
        deuteranopiaLabel->setObjectName(QString::fromUtf8("deuteranopiaLabel"));
        deuteranopiaLabel->setGeometry(QRect(10, 10, 351, 221));
        deuteranopiaIndexLabel = new QLabel(tab_4);
        deuteranopiaIndexLabel->setObjectName(QString::fromUtf8("deuteranopiaIndexLabel"));
        deuteranopiaIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tritanopiaObservations = new QTextEdit(tab_5);
        tritanopiaObservations->setObjectName(QString::fromUtf8("tritanopiaObservations"));
        tritanopiaObservations->setGeometry(QRect(10, 300, 361, 181));
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
        tritanopiaObservations->setPalette(palette5);
        tritanopiaObservations->setFrameShape(QFrame::StyledPanel);
        tritanopiaObservations->setFrameShadow(QFrame::Raised);
        tritanopiaObservations->setLineWidth(2);
        tritanopiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tritanopiaObservations->setAcceptRichText(true);
        tritanopiaLabel = new QLabel(tab_5);
        tritanopiaLabel->setObjectName(QString::fromUtf8("tritanopiaLabel"));
        tritanopiaLabel->setGeometry(QRect(10, 10, 351, 221));
        tritanopiaIndexLabel = new QLabel(tab_5);
        tritanopiaIndexLabel->setObjectName(QString::fromUtf8("tritanopiaIndexLabel"));
        tritanopiaIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        achromatopsiaObservations = new QTextEdit(tab_6);
        achromatopsiaObservations->setObjectName(QString::fromUtf8("achromatopsiaObservations"));
        achromatopsiaObservations->setGeometry(QRect(10, 300, 361, 181));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        achromatopsiaObservations->setPalette(palette6);
        achromatopsiaObservations->setFrameShape(QFrame::StyledPanel);
        achromatopsiaObservations->setFrameShadow(QFrame::Raised);
        achromatopsiaObservations->setLineWidth(2);
        achromatopsiaObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        achromatopsiaObservations->setAcceptRichText(true);
        achromatopsiaLabel = new QLabel(tab_6);
        achromatopsiaLabel->setObjectName(QString::fromUtf8("achromatopsiaLabel"));
        achromatopsiaLabel->setGeometry(QRect(10, 10, 351, 221));
        achromatopsiaIndexLabel = new QLabel(tab_6);
        achromatopsiaIndexLabel->setObjectName(QString::fromUtf8("achromatopsiaIndexLabel"));
        achromatopsiaIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        protanomalyObservations = new QTextEdit(tab_7);
        protanomalyObservations->setObjectName(QString::fromUtf8("protanomalyObservations"));
        protanomalyObservations->setGeometry(QRect(10, 300, 361, 181));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        protanomalyObservations->setPalette(palette7);
        protanomalyObservations->setFrameShape(QFrame::StyledPanel);
        protanomalyObservations->setFrameShadow(QFrame::Raised);
        protanomalyObservations->setLineWidth(2);
        protanomalyObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        protanomalyObservations->setAcceptRichText(true);
        protanomalyLabel = new QLabel(tab_7);
        protanomalyLabel->setObjectName(QString::fromUtf8("protanomalyLabel"));
        protanomalyLabel->setGeometry(QRect(10, 10, 351, 221));
        protanomalyIndexLabel = new QLabel(tab_7);
        protanomalyIndexLabel->setObjectName(QString::fromUtf8("protanomalyIndexLabel"));
        protanomalyIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        deuteranomalyObservations = new QTextEdit(tab_8);
        deuteranomalyObservations->setObjectName(QString::fromUtf8("deuteranomalyObservations"));
        deuteranomalyObservations->setGeometry(QRect(10, 300, 361, 181));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        deuteranomalyObservations->setPalette(palette8);
        deuteranomalyObservations->setFrameShape(QFrame::StyledPanel);
        deuteranomalyObservations->setFrameShadow(QFrame::Raised);
        deuteranomalyObservations->setLineWidth(2);
        deuteranomalyObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        deuteranomalyObservations->setAcceptRichText(true);
        deuteranomalyLabel = new QLabel(tab_8);
        deuteranomalyLabel->setObjectName(QString::fromUtf8("deuteranomalyLabel"));
        deuteranomalyLabel->setGeometry(QRect(10, 10, 351, 221));
        deuteranomalyIndexLabel = new QLabel(tab_8);
        deuteranomalyIndexLabel->setObjectName(QString::fromUtf8("deuteranomalyIndexLabel"));
        deuteranomalyIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tritanomalyObservations = new QTextEdit(tab_9);
        tritanomalyObservations->setObjectName(QString::fromUtf8("tritanomalyObservations"));
        tritanomalyObservations->setGeometry(QRect(10, 300, 361, 181));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        tritanomalyObservations->setPalette(palette9);
        tritanomalyObservations->setFrameShape(QFrame::StyledPanel);
        tritanomalyObservations->setFrameShadow(QFrame::Raised);
        tritanomalyObservations->setLineWidth(2);
        tritanomalyObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tritanomalyObservations->setAcceptRichText(true);
        tritanomalyLabel = new QLabel(tab_9);
        tritanomalyLabel->setObjectName(QString::fromUtf8("tritanomalyLabel"));
        tritanomalyLabel->setGeometry(QRect(10, 10, 351, 221));
        tritanomalyIndexLabel = new QLabel(tab_9);
        tritanomalyIndexLabel->setObjectName(QString::fromUtf8("tritanomalyIndexLabel"));
        tritanomalyIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        achromatomalyObservations = new QTextEdit(tab_10);
        achromatomalyObservations->setObjectName(QString::fromUtf8("achromatomalyObservations"));
        achromatomalyObservations->setGeometry(QRect(10, 300, 361, 181));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        achromatomalyObservations->setPalette(palette10);
        achromatomalyObservations->setFrameShape(QFrame::StyledPanel);
        achromatomalyObservations->setFrameShadow(QFrame::Raised);
        achromatomalyObservations->setLineWidth(2);
        achromatomalyObservations->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        achromatomalyObservations->setAcceptRichText(true);
        achromatomalyLabel = new QLabel(tab_10);
        achromatomalyLabel->setObjectName(QString::fromUtf8("achromatomalyLabel"));
        achromatomalyLabel->setGeometry(QRect(10, 10, 351, 221));
        achromatomalyIndexLabel = new QLabel(tab_10);
        achromatomalyIndexLabel->setObjectName(QString::fromUtf8("achromatomalyIndexLabel"));
        achromatomalyIndexLabel->setGeometry(QRect(10, 240, 361, 41));
        tabWidget_2->addTab(tab_10, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        saveImageButton = new QPushButton(tab_2);
        saveImageButton->setObjectName(QString::fromUtf8("saveImageButton"));
        saveImageButton->setGeometry(QRect(330, 730, 75, 23));
        saveImageButton->setCheckable(false);
        saveImageButton->setAutoDefault(false);
        saveImageButton->setFlat(false);
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 381, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        normalSimulation = new QRadioButton(verticalLayoutWidget);
        normalSimulation->setObjectName(QString::fromUtf8("normalSimulation"));
        normalSimulation->setChecked(true);

        verticalLayout->addWidget(normalSimulation);

        protanopiaSimulation = new QRadioButton(verticalLayoutWidget);
        protanopiaSimulation->setObjectName(QString::fromUtf8("protanopiaSimulation"));

        verticalLayout->addWidget(protanopiaSimulation);

        deuteranopiaSimulation = new QRadioButton(verticalLayoutWidget);
        deuteranopiaSimulation->setObjectName(QString::fromUtf8("deuteranopiaSimulation"));

        verticalLayout->addWidget(deuteranopiaSimulation);

        tritanopiaSimulation = new QRadioButton(verticalLayoutWidget);
        tritanopiaSimulation->setObjectName(QString::fromUtf8("tritanopiaSimulation"));

        verticalLayout->addWidget(tritanopiaSimulation);

        achromatopsiaSimulation = new QRadioButton(verticalLayoutWidget);
        achromatopsiaSimulation->setObjectName(QString::fromUtf8("achromatopsiaSimulation"));

        verticalLayout->addWidget(achromatopsiaSimulation);

        protanomalySimulation = new QRadioButton(verticalLayoutWidget);
        protanomalySimulation->setObjectName(QString::fromUtf8("protanomalySimulation"));

        verticalLayout->addWidget(protanomalySimulation);

        deuteranomalySimulation = new QRadioButton(verticalLayoutWidget);
        deuteranomalySimulation->setObjectName(QString::fromUtf8("deuteranomalySimulation"));

        verticalLayout->addWidget(deuteranomalySimulation);

        tritanomalySimulation = new QRadioButton(verticalLayoutWidget);
        tritanomalySimulation->setObjectName(QString::fromUtf8("tritanomalySimulation"));

        verticalLayout->addWidget(tritanomalySimulation);

        achromatomalySimulation = new QRadioButton(verticalLayoutWidget);
        achromatomalySimulation->setObjectName(QString::fromUtf8("achromatomalySimulation"));

        verticalLayout->addWidget(achromatomalySimulation);

        protanopiaCorrection = new QRadioButton(verticalLayoutWidget);
        protanopiaCorrection->setObjectName(QString::fromUtf8("protanopiaCorrection"));

        verticalLayout->addWidget(protanopiaCorrection);

        deuteranopiaCorrection = new QRadioButton(verticalLayoutWidget);
        deuteranopiaCorrection->setObjectName(QString::fromUtf8("deuteranopiaCorrection"));

        verticalLayout->addWidget(deuteranopiaCorrection);

        edgeDetectionCheck = new QCheckBox(tab_2);
        edgeDetectionCheck->setObjectName(QString::fromUtf8("edgeDetectionCheck"));
        edgeDetectionCheck->setGeometry(QRect(20, 40, 211, 17));
        tabWidget->addTab(tab_2, QString());
        verticalLayoutWidget->raise();
        edgeDetectionCheck->raise();
        saveImageButton->raise();
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
        QObject::connect(saveImageButton, SIGNAL(clicked()), Vispurple__tfg_editionClass, SLOT(save_image()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        saveImageButton->setDefault(false);


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
        calculateReportButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Calculate", nullptr));
        label_11->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Warning: this proccess can last a few seconds", nullptr));
        protanopiaLabel->setText(QString());
        protanopiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        protanopiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanopia", nullptr));
        deuteranopiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        deuteranopiaLabel->setText(QString());
        deuteranopiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranopia", nullptr));
        tritanopiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        tritanopiaLabel->setText(QString());
        tritanopiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanopia", nullptr));
        achromatopsiaObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        achromatopsiaLabel->setText(QString());
        achromatopsiaIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("Vispurple__tfg_editionClass", "Achromatopsia", nullptr));
        protanomalyObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        protanomalyLabel->setText(QString());
        protanomalyIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanomaly", nullptr));
        deuteranomalyObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        deuteranomalyLabel->setText(QString());
        deuteranomalyIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranomaly", nullptr));
        tritanomalyObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        tritanomalyLabel->setText(QString());
        tritanomalyIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanomaly", nullptr));
        achromatomalyObservations->setPlaceholderText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Write here the observations", nullptr));
        achromatomalyLabel->setText(QString());
        achromatomalyIndexLabel->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "TextLabel", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("Vispurple__tfg_editionClass", "Achromatomaly", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Vispurple__tfg_editionClass", "Visual Accessibility Report", nullptr));
        saveImageButton->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Save Image", nullptr));
        normalSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Standard vision", nullptr));
        protanopiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanopia simulation", nullptr));
        deuteranopiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranopia simulation", nullptr));
        tritanopiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanopia simulation", nullptr));
        achromatopsiaSimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Achromatopsia simulation", nullptr));
        protanomalySimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanomaly simulation", nullptr));
        deuteranomalySimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranomaly simulation", nullptr));
        tritanomalySimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Tritanomaly simulation", nullptr));
        achromatomalySimulation->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Achromatomaly simulation", nullptr));
        protanopiaCorrection->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Protanopia Correction", nullptr));
        deuteranopiaCorrection->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Deuteranopia Correction", nullptr));
        edgeDetectionCheck->setText(QCoreApplication::translate("Vispurple__tfg_editionClass", "Edge detection", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Vispurple__tfg_editionClass", "Simulation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vispurple__tfg_editionClass: public Ui_Vispurple__tfg_editionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISPURPLE__TFG_EDITION_H
