/********************************************************************************
** Form generated from reading UI file 'occQt.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCCQT_H
#define UI_OCCQT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_occQtClass
{
public:
    QAction *actionExit;
    QAction *actionZoom;
    QAction *actionPan;
    QAction *actionRotate;
    QAction *actionReset;
    QAction *actionFitAll;
    QAction *actionAbout;
    QAction *actionBox;
    QAction *actionCone;
    QAction *actionSphere;
    QAction *actionCylinder;
    QAction *actionTorus;
    QAction *actionFillet;
    QAction *actionChamfer;
    QAction *actionExtrude;
    QAction *actionRevolve;
    QAction *actionLoft;
    QAction *actionCut;
    QAction *actionFuse;
    QAction *actionCommon;
    QAction *actionHelix;
    QWidget *centralWidget;
    QWidget *widget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuPrimitive;
    QMenu *menuModeling;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *occQtClass)
    {
        if (occQtClass->objectName().isEmpty())
            occQtClass->setObjectName(QString::fromUtf8("occQtClass"));
        occQtClass->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/lamp.png"), QSize(), QIcon::Normal, QIcon::Off);
        occQtClass->setWindowIcon(icon);
        actionExit = new QAction(occQtClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionZoom = new QAction(occQtClass);
        actionZoom->setObjectName(QString::fromUtf8("actionZoom"));
        actionZoom->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom->setIcon(icon1);
        actionPan = new QAction(occQtClass);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        actionPan->setCheckable(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Pan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPan->setIcon(icon2);
        actionRotate = new QAction(occQtClass);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        actionRotate->setCheckable(false);
        actionRotate->setChecked(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate->setIcon(icon3);
        actionReset = new QAction(occQtClass);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon4);
        actionFitAll = new QAction(occQtClass);
        actionFitAll->setObjectName(QString::fromUtf8("actionFitAll"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/FitAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFitAll->setIcon(icon5);
        actionAbout = new QAction(occQtClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setIcon(icon);
        actionBox = new QAction(occQtClass);
        actionBox->setObjectName(QString::fromUtf8("actionBox"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBox->setIcon(icon6);
        actionCone = new QAction(occQtClass);
        actionCone->setObjectName(QString::fromUtf8("actionCone"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/cone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCone->setIcon(icon7);
        actionSphere = new QAction(occQtClass);
        actionSphere->setObjectName(QString::fromUtf8("actionSphere"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSphere->setIcon(icon8);
        actionCylinder = new QAction(occQtClass);
        actionCylinder->setObjectName(QString::fromUtf8("actionCylinder"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/cylinder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCylinder->setIcon(icon9);
        actionTorus = new QAction(occQtClass);
        actionTorus->setObjectName(QString::fromUtf8("actionTorus"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/torus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTorus->setIcon(icon10);
        actionFillet = new QAction(occQtClass);
        actionFillet->setObjectName(QString::fromUtf8("actionFillet"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/fillet.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFillet->setIcon(icon11);
        actionChamfer = new QAction(occQtClass);
        actionChamfer->setObjectName(QString::fromUtf8("actionChamfer"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/chamfer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChamfer->setIcon(icon12);
        actionExtrude = new QAction(occQtClass);
        actionExtrude->setObjectName(QString::fromUtf8("actionExtrude"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/extrude.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtrude->setIcon(icon13);
        actionRevolve = new QAction(occQtClass);
        actionRevolve->setObjectName(QString::fromUtf8("actionRevolve"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/revolve.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRevolve->setIcon(icon14);
        actionLoft = new QAction(occQtClass);
        actionLoft->setObjectName(QString::fromUtf8("actionLoft"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Resources/loft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoft->setIcon(icon15);
        actionCut = new QAction(occQtClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon16);
        actionFuse = new QAction(occQtClass);
        actionFuse->setObjectName(QString::fromUtf8("actionFuse"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Resources/fuse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFuse->setIcon(icon17);
        actionCommon = new QAction(occQtClass);
        actionCommon->setObjectName(QString::fromUtf8("actionCommon"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Resources/common.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCommon->setIcon(icon18);
        actionHelix = new QAction(occQtClass);
        actionHelix->setObjectName(QString::fromUtf8("actionHelix"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Resources/helix.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelix->setIcon(icon19);
        centralWidget = new QWidget(occQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 120, 80));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(210, 120, 501, 361));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        occQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(occQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuPrimitive = new QMenu(menuBar);
        menuPrimitive->setObjectName(QString::fromUtf8("menuPrimitive"));
        menuModeling = new QMenu(menuBar);
        menuModeling->setObjectName(QString::fromUtf8("menuModeling"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        occQtClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(occQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        occQtClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuPrimitive->menuAction());
        menuBar->addAction(menuModeling->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuView->addAction(actionZoom);
        menuView->addAction(actionPan);
        menuView->addAction(actionRotate);
        menuView->addSeparator();
        menuView->addAction(actionReset);
        menuView->addAction(actionFitAll);
        menuPrimitive->addAction(actionBox);
        menuPrimitive->addAction(actionCone);
        menuPrimitive->addAction(actionSphere);
        menuPrimitive->addAction(actionCylinder);
        menuPrimitive->addAction(actionTorus);
        menuModeling->addAction(actionFillet);
        menuModeling->addAction(actionChamfer);
        menuModeling->addAction(actionExtrude);
        menuModeling->addAction(actionRevolve);
        menuModeling->addAction(actionLoft);
        menuModeling->addSeparator();
        menuModeling->addAction(actionCut);
        menuModeling->addAction(actionFuse);
        menuModeling->addAction(actionCommon);
        menuModeling->addSeparator();
        menuModeling->addAction(actionHelix);
        menuHelp->addAction(actionAbout);

        retranslateUi(occQtClass);

        QMetaObject::connectSlotsByName(occQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *occQtClass)
    {
        occQtClass->setWindowTitle(QCoreApplication::translate("occQtClass", "occQt", nullptr));
        actionExit->setText(QCoreApplication::translate("occQtClass", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("occQtClass", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom->setText(QCoreApplication::translate("occQtClass", "Zoom", nullptr));
        actionPan->setText(QCoreApplication::translate("occQtClass", "Pan", nullptr));
        actionRotate->setText(QCoreApplication::translate("occQtClass", "Rotate", nullptr));
        actionReset->setText(QCoreApplication::translate("occQtClass", "Reset", nullptr));
        actionFitAll->setText(QCoreApplication::translate("occQtClass", "FitAll", nullptr));
        actionAbout->setText(QCoreApplication::translate("occQtClass", "About", nullptr));
        actionBox->setText(QCoreApplication::translate("occQtClass", "Box", nullptr));
        actionCone->setText(QCoreApplication::translate("occQtClass", "Cone", nullptr));
        actionSphere->setText(QCoreApplication::translate("occQtClass", "Sphere", nullptr));
        actionCylinder->setText(QCoreApplication::translate("occQtClass", "Cylinder", nullptr));
        actionTorus->setText(QCoreApplication::translate("occQtClass", "Torus", nullptr));
        actionFillet->setText(QCoreApplication::translate("occQtClass", "Fillet", nullptr));
        actionChamfer->setText(QCoreApplication::translate("occQtClass", "Chamfer", nullptr));
        actionExtrude->setText(QCoreApplication::translate("occQtClass", "Extrude", nullptr));
        actionRevolve->setText(QCoreApplication::translate("occQtClass", "Rovelve", nullptr));
        actionLoft->setText(QCoreApplication::translate("occQtClass", "Loft", nullptr));
        actionCut->setText(QCoreApplication::translate("occQtClass", "Cut", nullptr));
        actionFuse->setText(QCoreApplication::translate("occQtClass", "Fuse", nullptr));
        actionCommon->setText(QCoreApplication::translate("occQtClass", "Common", nullptr));
        actionHelix->setText(QCoreApplication::translate("occQtClass", "Helix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("occQtClass", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("occQtClass", "Tab 2", nullptr));
        menuFile->setTitle(QCoreApplication::translate("occQtClass", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("occQtClass", "View", nullptr));
        menuPrimitive->setTitle(QCoreApplication::translate("occQtClass", "Primitive", nullptr));
        menuModeling->setTitle(QCoreApplication::translate("occQtClass", "Modeling", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("occQtClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class occQtClass: public Ui_occQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCCQT_H
