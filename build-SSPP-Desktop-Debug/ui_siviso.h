/********************************************************************************
** Form generated from reading UI file 'siviso.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIVISO_H
#define UI_SIVISO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_siviso
{
public:
    QWidget *centralWidget;
    QFrame *frame_3;
    QLabel *label_4;
    QLabel *label_2;
    QSpinBox *dt;
    QLabel *label;
    QSpinBox *it;
    QSlider *frecuencia;
    QDoubleSpinBox *bw;
    QLabel *label_3;
    QDoubleSpinBox *prob_deteccion;
    QDoubleSpinBox *prob_falsa;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *tipo_norte;
    QDoubleSpinBox *escala_ppi;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *escala_despliegue_tactico;
    QSpinBox *gan_sen;
    QLabel *label_17;
    QSpinBox *edo_mar;
    QLabel *label_58;
    QLabel *label_60;
    QGroupBox *groupBox;
    QRadioButton *origen_target;
    QRadioButton *origen_buque;
    QFrame *frame;
    QPushButton *play;
    QPushButton *rec;
    QFrame *frame_10;
    QPushButton *etiquetar_blanco;
    QComboBox *Clasificar_blanco;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame_2;
    QPushButton *vol_dw;
    QPushButton *vol_up;
    QLabel *label_57;
    QPushButton *ppi;
    QPushButton *nb;
    QPushButton *wf;
    QPushButton *bb;
    QFrame *frame_4;
    QPlainTextEdit *textTestGrap;
    QPlainTextEdit *textTestSend;
    QPlainTextEdit *view;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_5;
    QLabel *DespTac;
    QFrame *frame_8;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_32;
    QFrame *frame_12;
    QLabel *label_61;
    QLabel *logo;
    QLabel *logo_siviso;
    QFrame *frame_7;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_36;
    QLabel *label_38;
    QLabel *label_39;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *siviso)
    {
        if (siviso->objectName().isEmpty())
            siviso->setObjectName(QStringLiteral("siviso"));
        siviso->resize(1024, 768);
        centralWidget = new QWidget(siviso);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 701, 231));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        frame_3->setFont(font);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 10, 61, 16));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 10, 51, 16));
        dt = new QSpinBox(frame_3);
        dt->setObjectName(QStringLiteral("dt"));
        dt->setGeometry(QRect(440, 30, 51, 41));
        QFont font1;
        font1.setPointSize(12);
        dt->setFont(font1);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 61, 16));
        it = new QSpinBox(frame_3);
        it->setObjectName(QStringLiteral("it"));
        it->setGeometry(QRect(340, 30, 71, 41));
        it->setFont(font1);
        it->setMinimum(1);
        it->setMaximum(10);
        frecuencia = new QSlider(frame_3);
        frecuencia->setObjectName(QStringLiteral("frecuencia"));
        frecuencia->setGeometry(QRect(8, 50, 231, 19));
        frecuencia->setOrientation(Qt::Horizontal);
        bw = new QDoubleSpinBox(frame_3);
        bw->setObjectName(QStringLiteral("bw"));
        bw->setGeometry(QRect(245, 30, 71, 41));
        bw->setFont(font1);
        bw->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 10, 81, 16));
        prob_deteccion = new QDoubleSpinBox(frame_3);
        prob_deteccion->setObjectName(QStringLiteral("prob_deteccion"));
        prob_deteccion->setGeometry(QRect(310, 110, 81, 41));
        prob_deteccion->setFont(font1);
        prob_deteccion->setMaximum(1);
        prob_deteccion->setSingleStep(0.01);
        prob_falsa = new QDoubleSpinBox(frame_3);
        prob_falsa->setObjectName(QStringLiteral("prob_falsa"));
        prob_falsa->setGeometry(QRect(210, 110, 81, 41));
        prob_falsa->setFont(font1);
        prob_falsa->setMaximum(1);
        prob_falsa->setSingleStep(0.01);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(317, 90, 71, 21));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(210, 90, 81, 21));
        tipo_norte = new QPushButton(frame_3);
        tipo_norte->setObjectName(QStringLiteral("tipo_norte"));
        tipo_norte->setGeometry(QRect(505, 30, 101, 41));
        escala_ppi = new QDoubleSpinBox(frame_3);
        escala_ppi->setObjectName(QStringLiteral("escala_ppi"));
        escala_ppi->setGeometry(QRect(410, 110, 81, 41));
        escala_ppi->setFont(font1);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(410, 90, 71, 20));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(497, 90, 101, 21));
        escala_despliegue_tactico = new QDoubleSpinBox(frame_3);
        escala_despliegue_tactico->setObjectName(QStringLiteral("escala_despliegue_tactico"));
        escala_despliegue_tactico->setGeometry(QRect(510, 110, 81, 41));
        escala_despliegue_tactico->setFont(font1);
        gan_sen = new QSpinBox(frame_3);
        gan_sen->setObjectName(QStringLiteral("gan_sen"));
        gan_sen->setGeometry(QRect(610, 110, 81, 41));
        gan_sen->setFont(font1);
        gan_sen->setMaximum(12);
        gan_sen->setSingleStep(3);
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(606, 90, 81, 20));
        edo_mar = new QSpinBox(frame_3);
        edo_mar->setObjectName(QStringLiteral("edo_mar"));
        edo_mar->setGeometry(QRect(140, 110, 51, 41));
        edo_mar->setFont(font1);
        edo_mar->setMinimum(1);
        edo_mar->setMaximum(9);
        label_58 = new QLabel(frame_3);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(130, 86, 71, 31));
        label_60 = new QLabel(frame_3);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(485, 4, 141, 31));
        groupBox = new QGroupBox(frame_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(615, 10, 81, 80));
        origen_target = new QRadioButton(groupBox);
        origen_target->setObjectName(QStringLiteral("origen_target"));
        origen_target->setGeometry(QRect(0, 50, 82, 17));
        origen_buque = new QRadioButton(groupBox);
        origen_buque->setObjectName(QStringLiteral("origen_buque"));
        origen_buque->setGeometry(QRect(0, 30, 82, 17));
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(140, 160, 151, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        play = new QPushButton(frame);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(80, 20, 61, 31));
        rec = new QPushButton(frame);
        rec->setObjectName(QStringLiteral("rec"));
        rec->setGeometry(QRect(10, 20, 61, 31));
        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(460, 160, 231, 61));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        etiquetar_blanco = new QPushButton(frame_10);
        etiquetar_blanco->setObjectName(QStringLiteral("etiquetar_blanco"));
        etiquetar_blanco->setGeometry(QRect(10, 30, 91, 23));
        Clasificar_blanco = new QComboBox(frame_10);
        Clasificar_blanco->setObjectName(QStringLiteral("Clasificar_blanco"));
        Clasificar_blanco->setGeometry(QRect(110, 30, 111, 22));
        label_5 = new QLabel(frame_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 10, 71, 20));
        label_6 = new QLabel(frame_10);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(66, 0, 71, 20));
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(310, 160, 131, 61));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        vol_dw = new QPushButton(frame_2);
        vol_dw->setObjectName(QStringLiteral("vol_dw"));
        vol_dw->setGeometry(QRect(10, 20, 51, 31));
        vol_dw->setFont(font1);
        vol_up = new QPushButton(frame_2);
        vol_up->setObjectName(QStringLiteral("vol_up"));
        vol_up->setGeometry(QRect(70, 20, 51, 31));
        vol_up->setFont(font1);
        label_57 = new QLabel(frame_2);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(30, 0, 71, 16));
        ppi = new QPushButton(frame_3);
        ppi->setObjectName(QStringLiteral("ppi"));
        ppi->setGeometry(QRect(75, 170, 51, 51));
        ppi->setFont(font1);
        nb = new QPushButton(frame_3);
        nb->setObjectName(QStringLiteral("nb"));
        nb->setGeometry(QRect(75, 110, 51, 51));
        nb->setFont(font1);
        wf = new QPushButton(frame_3);
        wf->setObjectName(QStringLiteral("wf"));
        wf->setGeometry(QRect(15, 170, 51, 51));
        wf->setFont(font1);
        bb = new QPushButton(frame_3);
        bb->setObjectName(QStringLiteral("bb"));
        bb->setGeometry(QRect(15, 110, 51, 51));
        bb->setFont(font1);
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 250, 481, 451));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        textTestGrap = new QPlainTextEdit(frame_4);
        textTestGrap->setObjectName(QStringLiteral("textTestGrap"));
        textTestGrap->setGeometry(QRect(10, 10, 221, 301));
        textTestSend = new QPlainTextEdit(frame_4);
        textTestSend->setObjectName(QStringLiteral("textTestSend"));
        textTestSend->setGeometry(QRect(250, 10, 221, 301));
        view = new QPlainTextEdit(frame_4);
        view->setObjectName(QStringLiteral("view"));
        view->setEnabled(true);
        view->setGeometry(QRect(230, 340, 241, 101));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 360, 111, 27));
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 400, 93, 27));
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(500, 250, 521, 451));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        DespTac = new QLabel(frame_5);
        DespTac->setObjectName(QStringLiteral("DespTac"));
        DespTac->setGeometry(QRect(-7, -4, 531, 461));
        DespTac->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/costa.JPG")));
        frame_8 = new QFrame(centralWidget);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(870, 90, 141, 151));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_8);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 10, 91, 16));
        label_25 = new QLabel(frame_8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 30, 47, 13));
        label_26 = new QLabel(frame_8);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 49, 61, 16));
        label_27 = new QLabel(frame_8);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 74, 47, 13));
        label_28 = new QLabel(frame_8);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 97, 51, 16));
        label_32 = new QLabel(frame_8);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 120, 111, 16));
        frame_12 = new QFrame(centralWidget);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(730, 10, 271, 71));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        label_61 = new QLabel(frame_12);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(80, 30, 101, 21));
        logo = new QLabel(frame_12);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(10, 6, 61, 61));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/logo.png")));
        logo->setScaledContents(true);
        logo_siviso = new QLabel(frame_12);
        logo_siviso->setObjectName(QStringLiteral("logo_siviso"));
        logo_siviso->setGeometry(QRect(210, 4, 51, 61));
        logo_siviso->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/siviso.jpg")));
        logo_siviso->setScaledContents(true);
        frame_7 = new QFrame(centralWidget);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(720, 90, 141, 151));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_33 = new QLabel(frame_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(50, 10, 61, 16));
        label_34 = new QLabel(frame_7);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 30, 47, 13));
        label_36 = new QLabel(frame_7);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 90, 91, 16));
        label_38 = new QLabel(frame_7);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(10, 120, 121, 16));
        label_39 = new QLabel(frame_7);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(10, 60, 47, 13));
        siviso->setCentralWidget(centralWidget);
        frame_3->raise();
        frame_4->raise();
        frame_5->raise();
        frame_12->raise();
        frame_7->raise();
        frame_8->raise();
        menuBar = new QMenuBar(siviso);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 25));
        siviso->setMenuBar(menuBar);
        mainToolBar = new QToolBar(siviso);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        siviso->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(siviso);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        siviso->setStatusBar(statusBar);

        retranslateUi(siviso);

        QMetaObject::connectSlotsByName(siviso);
    } // setupUi

    void retranslateUi(QMainWindow *siviso)
    {
        siviso->setWindowTitle(QApplication::translate("siviso", "siviso", 0));
#ifndef QT_NO_TOOLTIP
        siviso->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        siviso->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        siviso->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        siviso->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Display time</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">bandwidth</span></p></body></html>", 0));
        label->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Frecuencia</span></p></body></html>", 0));
#ifndef QT_NO_ACCESSIBILITY
        bw->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        bw->setSpecialValueText(QString());
        label_3->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Integration time</span></p></body></html>", 0));
        label_12->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Probabilidad<br/>de detecci\303\263n</span></p></body></html>", 0));
        label_13->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Probabilidad<br/>de falsa alarma</span></p></body></html>", 0));
        tipo_norte->setText(QApplication::translate("siviso", "Norte\n"
"Verdadero", 0));
        label_15->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Escala PPI</span></p></body></html>", 0));
        label_16->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Escala <br/>despliegue T\303\241ctico</span></p></body></html>", 0));
        label_17->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Ganancia</span></p></body></html>", 0));
        label_58->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Estado <br/>de la mar</span></p></body></html>", 0));
        label_60->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">alternar Norte<br/>Verdadero/Relativo</span></p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("siviso", "Origen", 0));
        origen_target->setText(QApplication::translate("siviso", "Blanco", 0));
        origen_buque->setText(QApplication::translate("siviso", "Buque", 0));
        play->setText(QApplication::translate("siviso", "Play", 0));
        rec->setText(QApplication::translate("siviso", "Rec", 0));
        etiquetar_blanco->setText(QApplication::translate("siviso", "Etiquetar", 0));
        Clasificar_blanco->clear();
        Clasificar_blanco->insertItems(0, QStringList()
         << QApplication::translate("siviso", "Desconocido", 0)
         << QApplication::translate("siviso", "Amigo", 0)
         << QApplication::translate("siviso", "Enemigo", 0)
         << QApplication::translate("siviso", "Neutral", 0)
        );
        label_5->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Clasificar</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Blancos</span></p></body></html>", 0));
        vol_dw->setText(QApplication::translate("siviso", "-", 0));
        vol_up->setText(QApplication::translate("siviso", "+", 0));
        label_57->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">Volumen</span></p></body></html>", 0));
        ppi->setText(QApplication::translate("siviso", "PPI", 0));
        nb->setText(QApplication::translate("siviso", "Nb", 0));
        wf->setText(QApplication::translate("siviso", "WF", 0));
        bb->setText(QApplication::translate("siviso", "Bb", 0));
        pushButton_2->setText(QApplication::translate("siviso", "ver info signal", 0));
        pushButton_3->setText(QApplication::translate("siviso", "send", 0));
        DespTac->setText(QString());
        label_24->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt; font-weight:600;\">Plataforma</span></p></body></html>", 0));
        label_25->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Nombre:</span></p></body></html>", 0));
        label_26->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Profundidad:</span></p></body></html>", 0));
        label_27->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Latitud:</span></p></body></html>", 0));
        label_28->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Longitud:</span></p></body></html>", 0));
        label_32->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Carga de la bateria:</span></p></body></html>", 0));
        label_61->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">SIVISO<br/>ARMADA DE M\303\211XICO</span></p></body></html>", 0));
        logo->setText(QString());
        logo_siviso->setText(QString());
        label_33->setText(QApplication::translate("siviso", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt; font-weight:600;\">Blancos</span></p></body></html>", 0));
        label_34->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">id blanco:</span></p></body></html>", 0));
        label_36->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Etiqueta blanco:</span></p></body></html>", 0));
        label_38->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Clasificaci\303\263n de blanco:</span></p></body></html>", 0));
        label_39->setText(QApplication::translate("siviso", "<html><head/><body><p><span style=\" font-size:6pt;\">Direcci\303\263n:</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class siviso: public Ui_siviso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIVISO_H
