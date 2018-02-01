/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionConfigure;
    QAction *actionClear;
    QAction *actionQuit;
    QAction *actionLaunch_Control_Window;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *ttl_button_1;
    QLineEdit *ttl_display_1;
    QPushButton *pushButton;
    QPushButton *ttl_button_2;
    QPushButton *ttl_button_3;
    QPushButton *ttl_button_4;
    QPushButton *ttl_button_5;
    QPushButton *ttl_button_6;
    QPushButton *ttl_button_7;
    QLineEdit *ttl_display_2;
    QLineEdit *ttl_display_3;
    QLineEdit *ttl_display_4;
    QLineEdit *ttl_display_5;
    QLineEdit *ttl_display_6;
    QLineEdit *ttl_display_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QDial *cycleDelay;
    QLabel *label;
    QLineEdit *cycleDelayWindow;
    QSlider *slider_dac_1;
    QProgressBar *display_dac_1;
    QLabel *label_dac_1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(908, 812);
        MainWindow->setAnimated(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        actionLaunch_Control_Window = new QAction(MainWindow);
        actionLaunch_Control_Window->setObjectName(QStringLiteral("actionLaunch_Control_Window"));
        actionLaunch_Control_Window->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 908, 22));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QStringLiteral("menuCalls"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(591, 719));
        dockWidget->setFeatures(QDockWidget::DockWidgetMovable);
        dockWidget->setWindowTitle(QStringLiteral(""));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        ttl_button_1 = new QPushButton(dockWidgetContents);
        ttl_button_1->setObjectName(QStringLiteral("ttl_button_1"));
        ttl_button_1->setGeometry(QRect(0, 50, 76, 32));
        ttl_display_1 = new QLineEdit(dockWidgetContents);
        ttl_display_1->setObjectName(QStringLiteral("ttl_display_1"));
        ttl_display_1->setGeometry(QRect(70, 50, 51, 31));
        ttl_display_1->setMaxLength(5);
        ttl_display_1->setReadOnly(true);
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 101, 32));
        ttl_button_2 = new QPushButton(dockWidgetContents);
        ttl_button_2->setObjectName(QStringLiteral("ttl_button_2"));
        ttl_button_2->setGeometry(QRect(0, 90, 76, 32));
        ttl_button_3 = new QPushButton(dockWidgetContents);
        ttl_button_3->setObjectName(QStringLiteral("ttl_button_3"));
        ttl_button_3->setGeometry(QRect(0, 130, 76, 32));
        ttl_button_4 = new QPushButton(dockWidgetContents);
        ttl_button_4->setObjectName(QStringLiteral("ttl_button_4"));
        ttl_button_4->setGeometry(QRect(0, 170, 76, 32));
        ttl_button_5 = new QPushButton(dockWidgetContents);
        ttl_button_5->setObjectName(QStringLiteral("ttl_button_5"));
        ttl_button_5->setGeometry(QRect(0, 210, 76, 32));
        ttl_button_6 = new QPushButton(dockWidgetContents);
        ttl_button_6->setObjectName(QStringLiteral("ttl_button_6"));
        ttl_button_6->setGeometry(QRect(0, 250, 76, 32));
        ttl_button_7 = new QPushButton(dockWidgetContents);
        ttl_button_7->setObjectName(QStringLiteral("ttl_button_7"));
        ttl_button_7->setGeometry(QRect(0, 290, 76, 32));
        ttl_display_2 = new QLineEdit(dockWidgetContents);
        ttl_display_2->setObjectName(QStringLiteral("ttl_display_2"));
        ttl_display_2->setGeometry(QRect(70, 90, 51, 31));
        ttl_display_2->setMaxLength(5);
        ttl_display_2->setReadOnly(true);
        ttl_display_3 = new QLineEdit(dockWidgetContents);
        ttl_display_3->setObjectName(QStringLiteral("ttl_display_3"));
        ttl_display_3->setGeometry(QRect(70, 130, 51, 31));
        ttl_display_3->setMaxLength(5);
        ttl_display_3->setReadOnly(true);
        ttl_display_4 = new QLineEdit(dockWidgetContents);
        ttl_display_4->setObjectName(QStringLiteral("ttl_display_4"));
        ttl_display_4->setGeometry(QRect(70, 170, 51, 31));
        ttl_display_4->setMaxLength(5);
        ttl_display_4->setReadOnly(true);
        ttl_display_5 = new QLineEdit(dockWidgetContents);
        ttl_display_5->setObjectName(QStringLiteral("ttl_display_5"));
        ttl_display_5->setGeometry(QRect(70, 210, 51, 31));
        ttl_display_5->setMaxLength(5);
        ttl_display_5->setReadOnly(true);
        ttl_display_6 = new QLineEdit(dockWidgetContents);
        ttl_display_6->setObjectName(QStringLiteral("ttl_display_6"));
        ttl_display_6->setGeometry(QRect(70, 250, 51, 31));
        ttl_display_6->setMaxLength(5);
        ttl_display_6->setReadOnly(true);
        ttl_display_7 = new QLineEdit(dockWidgetContents);
        ttl_display_7->setObjectName(QStringLiteral("ttl_display_7"));
        ttl_display_7->setGeometry(QRect(70, 290, 51, 31));
        ttl_display_7->setMaxLength(5);
        ttl_display_7->setReadOnly(true);
        pushButton_2 = new QPushButton(dockWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 10, 101, 32));
        pushButton_3 = new QPushButton(dockWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 10, 61, 32));
        pushButton_4 = new QPushButton(dockWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 70, 113, 32));
        cycleDelay = new QDial(dockWidgetContents);
        cycleDelay->setObjectName(QStringLiteral("cycleDelay"));
        cycleDelay->setGeometry(QRect(530, 10, 50, 64));
        cycleDelay->setMinimum(1);
        cycleDelay->setMaximum(5000);
        cycleDelay->setValue(30);
        cycleDelay->setNotchTarget(30);
        cycleDelay->setNotchesVisible(true);
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 111, 16));
        cycleDelayWindow = new QLineEdit(dockWidgetContents);
        cycleDelayWindow->setObjectName(QStringLiteral("cycleDelayWindow"));
        cycleDelayWindow->setGeometry(QRect(410, 40, 91, 21));
        cycleDelayWindow->setReadOnly(false);
        slider_dac_1 = new QSlider(dockWidgetContents);
        slider_dac_1->setObjectName(QStringLiteral("slider_dac_1"));
        slider_dac_1->setGeometry(QRect(60, 340, 160, 22));
        slider_dac_1->setMinimum(1);
        slider_dac_1->setMaximum(65535);
        slider_dac_1->setOrientation(Qt::Horizontal);
        display_dac_1 = new QProgressBar(dockWidgetContents);
        display_dac_1->setObjectName(QStringLiteral("display_dac_1"));
        display_dac_1->setEnabled(true);
        display_dac_1->setGeometry(QRect(230, 340, 95, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(34, 255, 14, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(16, 123, 36, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(40, 200, 40, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        display_dac_1->setPalette(palette);
        display_dac_1->setMinimum(1);
        display_dac_1->setMaximum(65535);
        display_dac_1->setValue(1);
        display_dac_1->setTextVisible(true);
        display_dac_1->setInvertedAppearance(false);
        label_dac_1 = new QLabel(dockWidgetContents);
        label_dac_1->setObjectName(QStringLiteral("label_dac_1"));
        label_dac_1->setGeometry(QRect(10, 340, 60, 16));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menuCalls->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addSeparator();
        menuCalls->addAction(actionQuit);
        menuTools->addAction(actionConfigure);
        menuTools->addAction(actionClear);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionLaunch_Control_Window);

        retranslateUi(MainWindow);
        QObject::connect(slider_dac_1, SIGNAL(valueChanged(int)), display_dac_1, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ARC Triggerscope Serial Terminal", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About program", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
        actionConnect->setText(QApplication::translate("MainWindow", "C&onnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect to serial port", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionDisconnect->setText(QApplication::translate("MainWindow", "&Disconnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect from serial port", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDisconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionConfigure->setText(QApplication::translate("MainWindow", "&Configure", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConfigure->setToolTip(QApplication::translate("MainWindow", "Configure serial port", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionConfigure->setShortcut(QApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MainWindow", "C&lear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear data", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("MainWindow", "Alt+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionLaunch_Control_Window->setText(QApplication::translate("MainWindow", "Launch Control Window", nullptr));
        menuCalls->setTitle(QApplication::translate("MainWindow", "Calls", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        ttl_button_1->setText(QApplication::translate("MainWindow", "TTL 1", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Get Status", nullptr));
        ttl_button_2->setText(QApplication::translate("MainWindow", "TTL 2", nullptr));
        ttl_button_3->setText(QApplication::translate("MainWindow", "TTL 3", nullptr));
        ttl_button_4->setText(QApplication::translate("MainWindow", "TTL 4", nullptr));
        ttl_button_5->setText(QApplication::translate("MainWindow", "TTL 5", nullptr));
        ttl_button_6->setText(QApplication::translate("MainWindow", "TTL 6", nullptr));
        ttl_button_7->setText(QApplication::translate("MainWindow", "TTL 7", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Get Version", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "ARM", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Cycle Test", nullptr));
#ifndef QT_NO_TOOLTIP
        cycleDelay->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Control test cycle time delay</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "Cycle Delay (ms)", nullptr));
        label_dac_1->setText(QApplication::translate("MainWindow", "DAC 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
