#include "laskin.h"
#include "ui_laskin.h"

laskin::laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::laskin)
{
    ui->setupUi(this);
}

laskin::~laskin()
{
    delete ui;
}

void laskin::AddNum(const QString &digit)
{
    if (nub == 0) {
        QString currentText = ui->luku1->text();
        ui->luku1->setText(currentText + digit);
    } else if (nub == 1) {
        QString currentText = ui->luku2->text();
        ui->luku2->setText(currentText + digit);
    }
}

void laskin::on_num0_clicked()
{
    qDebug("Num0 clicked");
    QString str = QStringLiteral("0");
    AddNum(str);
}

void laskin::on_num1_clicked()
{
    qDebug("Num1 clicked");
    QString str = QStringLiteral("1");
    AddNum(str);
}


void laskin::on_num2_clicked()
{
    qDebug("Num2 clicked");
    QString str = QStringLiteral("2");
    AddNum(str);
}


void laskin::on_num3_clicked()
{
    qDebug("Num3 clicked");
    QString str = QStringLiteral("3");
    AddNum(str);
}


void laskin::on_num4_clicked()
{
    qDebug("Num4 clicked");
    QString str = QStringLiteral("4");
    AddNum(str);
}


void laskin::on_num5_clicked()
{
    qDebug("Num5 clicked");
    QString str = QStringLiteral("5");
    AddNum(str);
}


void laskin::on_num6_clicked()
{
    qDebug("Num6 clicked");
    QString str = QStringLiteral("6");
    AddNum(str);
}


void laskin::on_num7_clicked()
{
    qDebug("Num7 clicked");
    QString str = QStringLiteral("7");
    AddNum(str);
}


void laskin::on_num8_clicked()
{
    qDebug("Num8 clicked");
    QString str = QStringLiteral("8");
    AddNum(str);
}


void laskin::on_num9_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("9");
    AddNum(str);
}


void laskin::on_clear_clicked()
{
    qDebug("Resetoitu");
    ui->luku1->clear();
    ui->luku2->clear();
    ui->tulos->clear();
    num = 1;
    result = 1;
    nub = 0;
    special = 0;

}


void laskin::on_enter_clicked()
{
    num1 = ui->luku1->text().toFloat();
    num2 = ui->luku2->text().toFloat();
    float n1 = num1;
    float n2 = num2;

    switch(special){
    case 1:
        result = n1 + n2;
        qDebug("%f", result);
        break;
    case 2:
        result = n1 - n2;
        qDebug("%f", result);
        break;
    case 3:
        result = n1 * n2;
        qDebug("%f", result);
        break;
    case 4:
        result = n1 / n2;
        qDebug("%f", result);
        break;
    }
    QString res = QString::number(result);
    ui->tulos->setText(res);

}


void laskin::on_plus_clicked()
{
    qDebug("Plus clicked");
    special = 1;
    nub = 1;
}


void laskin::on_miinus_clicked()
{
    qDebug("Minus clicked");
    special = 2;
    nub = 1;
}


void laskin::on_kerto_clicked()
{
    qDebug("Mult clicked");
    special = 3;
    nub = 1;
}


void laskin::on_jako_clicked()
{
    qDebug("Div clicked");
    special = 4;
    nub = 1;
}

