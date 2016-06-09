/********************************************************************************
** Form generated from reading UI file 'noveldownload.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVELDOWNLOAD_H
#define UI_NOVELDOWNLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NovelDownloadClass
{
public:
    QWidget *centralWidget;
    QLineEdit *Urlget;
    QPushButton *downloadButton;
    QLabel *label;
    QProgressBar *progressBar;
    QTextBrowser *textBrowser;
    QCheckBox *checkBox;
    QLineEdit *setCLineEdit;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NovelDownloadClass)
    {
        if (NovelDownloadClass->objectName().isEmpty())
            NovelDownloadClass->setObjectName(QStringLiteral("NovelDownloadClass"));
        NovelDownloadClass->resize(518, 318);
        centralWidget = new QWidget(NovelDownloadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Urlget = new QLineEdit(centralWidget);
        Urlget->setObjectName(QStringLiteral("Urlget"));
        Urlget->setGeometry(QRect(10, 30, 311, 21));
        downloadButton = new QPushButton(centralWidget);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setGeometry(QRect(330, 30, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 241, 16));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 260, 481, 23));
        progressBar->setValue(0);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 60, 481, 192));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(190, 10, 291, 20));
        setCLineEdit = new QLineEdit(centralWidget);
        setCLineEdit->setObjectName(QStringLiteral("setCLineEdit"));
        setCLineEdit->setGeometry(QRect(450, 30, 61, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 30, 31, 16));
        NovelDownloadClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(NovelDownloadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NovelDownloadClass->setStatusBar(statusBar);

        retranslateUi(NovelDownloadClass);

        QMetaObject::connectSlotsByName(NovelDownloadClass);
    } // setupUi

    void retranslateUi(QMainWindow *NovelDownloadClass)
    {
        NovelDownloadClass->setWindowTitle(QApplication::translate("NovelDownloadClass", "\345\260\217\350\257\264\344\270\213\350\275\275\345\231\250", 0));
        downloadButton->setText(QApplication::translate("NovelDownloadClass", "\345\210\206\346\236\220\345\271\266\344\270\213\350\275\275", 0));
        label->setText(QApplication::translate("NovelDownloadClass", "\350\257\267\350\276\223\345\205\245\345\260\217\350\257\264\347\233\256\345\275\225\347\232\204\345\205\250\347\275\221\345\235\200\357\274\232", 0));
        checkBox->setText(QApplication::translate("NovelDownloadClass", "\346\232\264\345\212\233\344\270\213\350\275\275\357\274\210\344\270\213\350\275\275\346\211\200\346\234\211\346\226\207\345\255\227\357\274\214\344\270\215\350\277\233\350\241\214\345\210\206\346\236\220\350\257\206\345\210\253\357\274\211", 0));
        setCLineEdit->setText(QApplication::translate("NovelDownloadClass", "utf8", 0));
        label_2->setText(QApplication::translate("NovelDownloadClass", "\347\274\226\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class NovelDownloadClass: public Ui_NovelDownloadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVELDOWNLOAD_H
