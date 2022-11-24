#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    ui->comboBox->addItem("Choose Currency");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/aud-flag"),"AUD (Australian Dollar)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/cad-flag"),"CAD (Canadian Dollar)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/cny-flag"),"CNY (Chinese Yuan)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/euro-flag"),"Euro (EU Currency)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/kuw-flag"),"KWD (Kuwaity Dinar)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/myl-flag"),"MYR (Malaysian Ringgit)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/np-flag"),"Nrs (Nepalese rupee)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/qat-flag"),"QAR (Qatari Riyal)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/Rus-flag"),"Rub (Russian Rouble)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/ind-flag"),"Rupee (Indian Rupee)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/sgd-flag"),"SGD (Singapore Dollar)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/us-flag"),"USD (US Dollars)");
    ui->comboBox->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/jpy-flag"),"Yen (Japanese Currency)");

     ui->comboBox_2->addItem("Choose Currency");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/aud-flag"),"AUD (Australian Dollar)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/cad-flag"),"CAD (Canadian Dollar)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/cny-flag"),"CNY (Chinese Yuan)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/euro-flag"),"Euro (EU Currency)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/kuw-flag"),"KWD (Kuwaity Dinar)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/myl-flag"),"MYR (Malaysian Ringgit)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/np-flag"),"Nrs (Nepalese rupee)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/qat-flag"),"QAR (Qatari Riyal)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/Rus-flag"),"Rub (Russian Rouble)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/ind-flag"),"Rupee (Indian Rupee)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/sgd-flag"),"SGD (Singapore Dollar)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/us-flag"),"USD (US Dollars)");
    ui->comboBox_2->addItem(QIcon("E:/semproject/Project/back up without api/CurrencyConverter/pic/jpy-flag"),"Yen (Japanese Currency)");


    QPixmap pic("E:/semproject/Project/back up without api/CurrencyConverter/pic/ku");
    ui ->label_7 ->setPixmap(pic.scaled(70,70,Qt::KeepAspectRatio));

    QPixmap pix("E:/semproject/Project/back up without api/CurrencyConverter/pic/bg");
    int w =ui ->label_8 ->width() ;
    int h= ui ->label_8 ->height() ;;
    ui ->label_8 ->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pi("E:/semproject/Project/back up without api/CurrencyConverter/pic/robo");
    int l =ui ->label_9 ->width() ;
    int b= ui ->label_9 ->height() ;;
    ui ->label_9 ->setPixmap(pi.scaled(l,b,Qt::KeepAspectRatio));
    ui ->label_9->setStyleSheet("QLabel{ background-color: transparent;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QString first = ui->comboBox->currentText();
    QString  second = ui->comboBox_2->currentText();

     if(first==second){
        QString amount= ui->lineEdit->text();
        ui->lineEdit_2->setText(amount);
}

   else if(first=="Nrs (Nepalese rupee)"){  //(1/10) start of NRs loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Nepalese rupees exchange"
" rate is the Nrs to ......rate.  The currency code for Nepalese rupees is Nrs."
" The currency symbol is Rs.");

  if(second=="Rupee (Indian Rupee)"){
  QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.63;
    ui->lineEdit_2->setText(QString::number(curr));
    }

  else if(second=="Euro (EU Currency)"){
         QString amount= ui->lineEdit->text();
   float n = amount.toFloat();
   float curr;
   curr=n*0.0075;
   ui->lineEdit_2->setText(QString::number(curr));
    }

  else if(second=="USD (US Dollars)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n* 0.0078;
  ui->lineEdit_2->setText(QString::number(curr));
    }

  else if (second == "Yen (Japanese Currency)"){
      QString amount = ui->lineEdit->text();
   float n = amount.toFloat();
   float curr;
   curr = n * 1.08;
   ui->lineEdit_2->setText(QString::number(curr));
    }

  else if (second == "Rub (Russian Rouble)"){
      QString amount = ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr = n * 0.47;
    ui->lineEdit_2->setText(QString::number(curr));
    }

  else if(second=="AUD (Australian Dollar)"){
       QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 0.011;
    ui->lineEdit_2->setText(QString::number(curr));
     }

  else if (second == "CAD (Canadian Dollar)"){
      QString amount = ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr = n * 0.010;
    ui->lineEdit_2->setText(QString::number(curr));
     }

  else if(second=="CNY (Chinese Yuan)"){
      QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.055 ;
    ui->lineEdit_2->setText(QString::number(curr));
      }

  else if(second=="SGD (Singapore Dollar)"){
      QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.011;
    ui->lineEdit_2->setText(QString::number(curr));
     }

  else if(second=="QAR (Qatari Riyal)"){
      QString amount= ui->lineEdit->text();
   float n = amount.toFloat();
   float curr;
   curr=n*0.028 ;
   ui->lineEdit_2->setText(QString::number(curr));
    }

  else if(second=="MYR (Malaysian Ringgit)"){
       QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.035;
    ui->lineEdit_2->setText(QString::number(curr));
     }

  else if(second=="KWD (Kuwaity Dinar)"){
       QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 0.0024;
    ui->lineEdit_2->setText(QString::number(curr));
     }
}                                           // (1/10) end of NRs loop


   else if(first=="USD (US Dollars)"){  //(2/10) start of US loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular US Dollar exchange"
" rate is the USD to ..... rate. The currency code for US Dollars is USD."
" The currency symbol is $.");

  if(second=="Rupee (Indian Rupee)"){
    QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*80.50;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*128.29;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.96;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
      QString amount = ui->lineEdit->text();
   float n = amount.toFloat();
   float curr;
   curr = n * 138.82;
   ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
      QString amount = ui->lineEdit->text();
   float n = amount.toFloat();
   float curr;
   curr = n * 60.55;
   ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 1.50;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if (second == "CAD (Canadian Dollar)") {
        QString amount = ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr = n * 1.34;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="CNY (Chinese Yuan)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*7.12 ;
    ui->lineEdit_2->setText(QString::number(curr));
    }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*1.38;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="QAR (Qatari Riyal)"){
       QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*3.64 ;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="MYR (Malaysian Ringgit)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*4.55;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="KWD (Kuwaity Dinar)"){
         QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.31 ;
    ui->lineEdit_2->setText(QString::number(curr));
  }

}                                          // (2/10) end of US loop


   else if(first=="Rupee (Indian Rupee)"){ // (3/10) start of IND loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular"
" Indian Rupee exchange rate is the INR to ...... rate."
" The currency code for Indian Rupees is INR. The currency symbol is ₹");

        if (second == "Yen (Japanese Currency)"){
                 QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n *1.73 ;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="Nrs (Nepalese rupee)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*1.59;
          ui->lineEdit_2->setText(QString::number(curr));
         }


        else if (second == "Euro (EU Currency)") {
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.012;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "USD (US Dollars)") {
                QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.012;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rub (Russian Rouble)"){
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.75;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="AUD (Australian Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 0.018;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "CAD (Canadian Dollar)") {
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.016;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="CNY (Chinese Yuan)"){
                QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.087 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="SGD (Singapore Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*0.017;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="QAR (Qatari Riyal)"){
              QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.045 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="MYR (Malaysian Ringgit)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*0.056;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="KWD (Kuwaity Dinar)"){
              QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n* 0.0038;
        ui->lineEdit_2->setText(QString::number(curr));
       }

   }                                    //(3/10) end of IND loop

   else if(first=="Euro (EU Currency)"){ // (4/10) start of EU loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular"
" Euro exchange rate is the EUR to...... rate."
" The currency code for Euros is EUR. The currency symbol is €.");

        if (second == "Yen (Japanese Currency)") {
                 QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 143.98;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if (second == "Rupee (Indian Rupee)") {
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 83.41;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="Nrs (Nepalese rupee)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 132.92;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "USD (US Dollars)"){
                         QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 1.04;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rub (Russian Rouble)"){
                  QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 62.74;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="AUD (Australian Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 1.55;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "CAD (Canadian Dollar)"){
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 1.38;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="CNY (Chinese Yuan)"){
                QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*7.37 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="SGD (Singapore Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*1.42;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="QAR (Qatari Riyal)"){
               QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*3.77 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="MYR (Malaysian Ringgit)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*4.71;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="KWD (Kuwaity Dinar)"){
             QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.32 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

   }                                             //(4/10) end of EUR loop


   else if(first=="Yen (Japanese Currency)"){ // (5/10) start of JP loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the"
" most popular Japanese Yen exchange rate is the JPY to ...... rate."
" The currency code for Japanese Yen is JPY. The currency symbol is ¥.");

        if (second == "Euro (EU Currency)"){
                     QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 0.0069;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if (second == "Rupee (Indian Rupee)"){
                  QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.58;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="Nrs (Nepalese rupee)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 0.92;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "USD (US Dollars)")
        {
                QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.0072;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rub (Russian Rouble)") {
                QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.44;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="AUD (Australian Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 0.011;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "CAD (Canadian Dollar)"){
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.0096;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="CNY (Chinese Yuan)"){
             QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.051 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="SGD (Singapore Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*0.0098;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="QAR (Qatari Riyal)"){
             QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.026 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="MYR (Malaysian Ringgit)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*0.032;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="KWD (Kuwaity Dinar)"){
             QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n* 0.0022;
        ui->lineEdit_2->setText(QString::number(curr));
       }

   }                                         //(5/10) End of Jpy loop


   else if(first=="Rub (Russian Rouble)"){ // (6/10) start of RUS loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Russian Ruble"
" exchange rate is the RUB to ...... rate. The currency code for Russian Rubles is RUB. The currency symbol is ₽.");

        if (second == "Yen (Japanese Currency)") {
                QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 2.29 ;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="Nrs (Nepalese rupee)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 2.12;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "Euro (EU Currency)"){
                QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.016;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "USD (US Dollars)"){
                  QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.017;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rupee (Indian Rupee)"){
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 1.33;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="AUD (Australian Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n* 0.021;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if (second == "CAD (Canadian Dollar)") {
                 QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.022;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if(second=="CNY (Chinese Yuan)"){
               QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.12 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="SGD (Singapore Dollar)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*0.023;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="QAR (Qatari Riyal)"){
               QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n*0.060 ;
        ui->lineEdit_2->setText(QString::number(curr));
       }

        else if(second=="MYR (Malaysian Ringgit)"){
              QString amount= ui->lineEdit->text();
          float n = amount.toFloat();
          float curr;
          curr=n*0.075;
          ui->lineEdit_2->setText(QString::number(curr));
         }

        else if(second=="KWD (Kuwaity Dinar)"){
             QString amount= ui->lineEdit->text();
        float n = amount.toFloat();
        float curr;
        curr=n* 0.0051;
        ui->lineEdit_2->setText(QString::number(curr));
       }

   }                                                      //(6/10) end of RUS loop

   else if(first=="AUD (Australian Dollar)"){  //(7/10) start of AUD loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Australian Dollar exchange"
" rate is the AUD to ..... rate. The currency code for Australian Dollars is AUD."
" The currency symbol is A$.");

  if(second=="Rupee (Indian Rupee)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n * 54.41;
 ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*87.16;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 0.67;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.65;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
            QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 93.68;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
            QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 40.62;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "CAD (Canadian Dollar)"){
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 0.90;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="CNY (Chinese Yuan)"){
         QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*4.75 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.92;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="QAR (Qatari Riyal)"){
          QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*2.43 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="MYR (Malaysian Ringgit)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*3.04;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="KWD (Kuwaity Dinar)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n* 0.21;
  ui->lineEdit_2->setText(QString::number(curr));
 }

}                                          // (7/10) end of AUD loop

   else if(first=="CAD (Canadian Dollar)"){  //(8/10) start of CAD loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Canadian Dollar exchange"
" rate is the  to ..... rate. The currency code for Canadian Dollars is CAD."
" The currency symbol is CA$.");

  if(second=="Rupee (Indian Rupee)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n * 60.77;
 ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*97.33;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.75;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
         QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.72;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
           QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 104.61;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
      QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 45.36;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 1.12;
    ui->lineEdit_2->setText(QString::number(curr));
   }
  else if(second=="CNY (Chinese Yuan)"){
          QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*5.31 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*1.03;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="QAR (Qatari Riyal)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*2.71 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="MYR (Malaysian Ringgit)"){
       QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*3.39;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="KWD (Kuwaity Dinar)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n* 0.23;
  ui->lineEdit_2->setText(QString::number(curr));
 }

}                                          // (8/10) end of CAD loop

   else if(first=="CNY (Chinese Yuan)"){  //(9/10) start of CNY loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Chinese yuan exchange"
" rate is the  to ..... rate. The currency code for Chinese yuan is CNY ."
" The currency symbol is CN¥.");

  if(second=="Rupee (Indian Rupee)"){
         QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n * 11.45;
 ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*18.34;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.14;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.14 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 19.71;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
      QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 8.61;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 0.21;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if (second == "CAD (Canadian Dollar)"){
         QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 0.19;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.19;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="QAR (Qatari Riyal)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.51 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="MYR (Malaysian Ringgit)"){
       QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.64;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="KWD (Kuwaity Dinar)"){
       QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n* 0.043;
  ui->lineEdit_2->setText(QString::number(curr));
 }

}                                          // (9/10) end of CNY loop


   else if(first=="SGD (Singapore Dollar)"){  //(10/10) start of SGD loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Singapore dollar exchange"
" rate is the  to ..... rate. The currency code for Chinese yuan is SGD ."
" The currency symbol is S$.");

  if(second=="Rupee (Indian Rupee)"){
     QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n * 59.24;
 ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*94.89;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.73;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.70 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
           QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 101.99;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
           QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 44.22;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 1.09;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if (second == "CAD (Canadian Dollar)"){
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 0.97;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="CNY (Chinese Yuan)"){
       QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*5.17 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="QAR (Qatari Riyal)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*2.65 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="MYR (Malaysian Ringgit)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*3.31;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="KWD (Kuwaity Dinar)"){
       QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.22 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

}                                          // (10/10) end of SGD loop


   else if(first=="QAR (Qatari Riyal)"){  //(11/10) start of QAR loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Qatari Riyal exchange"
" rate is the  to ..... rate. The currency code for Qatari Riyal is QAR ."
" The currency symbol is ر.ق.");

  if(second=="Rupee (Indian Rupee)"){
       QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n * 22.39;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*35.87;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.27;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
       QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.27;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 38.55;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 16.71;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 0.41;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if (second == "CAD (Canadian Dollar)"){
         QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 0.37;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="CNY (Chinese Yuan)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*1.96 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.38;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="MYR (Malaysian Ringgit)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*1.25;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="KWD (Kuwaity Dinar)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n* 0.085;
  ui->lineEdit_2->setText(QString::number(curr));
 }

}                                          // (11/10) end of QAR loop


   else if(first=="MYR (Malaysian Ringgit)"){  //(12/10) start of MYR loop

       ui->label_3->setText("<font color='white'>Our currency rankings show that the most popular Malaysian Ringgit exchange rate is the  to ..... rate. The currency code for Malaysian Ringgit is MYR . The currency symbol is RM.");

  if(second=="Rupee (Indian Rupee)"){
       QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n * 17.90;
 ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*28.67;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.22;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
      QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.21;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)") {
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 30.76;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
          QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 13.36;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 0.33;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if (second == "CAD (Canadian Dollar)"){
         QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 0.29;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="CNY (Chinese Yuan)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*1.56 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*0.30;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="QAR (Qatari Riyal)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.80 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="KWD (Kuwaity Dinar)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n* 0.068;
  ui->lineEdit_2->setText(QString::number(curr));
 }

}                                          // (12/10) end of MYR loop

   else if(first=="KWD (Kuwaity Dinar)"){  //(13/10) start of KWD loop

       ui->label_3->setText("<font color= 'white'>Our currency rankings show that the most popular Kuwaity Dinar exchange"
" rate is the  to ..... rate. The currency code for Kuwaity Dinar is KWD ."
" The currency symbol is د.ك .");

  if(second=="Rupee (Indian Rupee)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n *264.85;
 ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="Nrs (Nepalese rupee)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*424.23;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="USD (US Dollars)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*3.25;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="Euro (EU Currency)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*3.14;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if (second == "Yen (Japanese Currency)"){
            QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 455.96;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)"){
            QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 197.69;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="AUD (Australian Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n* 4.87;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if (second == "CAD (Canadian Dollar)") {
             QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 4.36;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if(second=="CNY (Chinese Yuan)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*23.13 ;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="SGD (Singapore Dollar)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*4.47;
    ui->lineEdit_2->setText(QString::number(curr));
   }

  else if(second=="QAR (Qatari Riyal)"){
        QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*11.83;
  ui->lineEdit_2->setText(QString::number(curr));
 }

  else if(second=="MYR (Malaysian Ringgit)"){
        QString amount= ui->lineEdit->text();
    float n = amount.toFloat();
    float curr;
    curr=n*14.79;
    ui->lineEdit_2->setText(QString::number(curr));
   }
}                                          // (13/10) end of KWD loop


ui->label_5->setText("<font color='white'>Conversion Complete");

}

void MainWindow::on_label_3_linkActivated(const QString &link)
{

}

