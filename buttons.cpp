#include "buttons.h"
#include <cstdlib>
#include <unistd.h>
#include <cstdio>
buttons::buttons(QWidget *parent): QWidget(){

    label = new QLabel(parent);
    label->setVisible(true);
    label->setGeometry(190,20,150,20);

    btn1 = new QPushButton(parent);
    btn1->setText("DDV, SLD");
    btn1->setToolTip("for DDV, SLD devices!");
    btn1->setCursor(Qt::PointingHandCursor);
    btn1->setGeometry(40,50,150,30);

    connect(btn1,SIGNAL(clicked()),this,SLOT(flash1()));

    btn2 = new QPushButton(parent);
    btn2->setText("DRG, B2N, CTL, PL2");
    btn2->setToolTip("for DRG, B2N, CTL, PL2 devices!");
    btn2->setCursor(Qt::PointingHandCursor);
    btn2->setGeometry(250,50,150,30);

    connect(btn2,SIGNAL(clicked()),this,SLOT(flash2()));

    kill = new QPushButton(parent);
    kill->setText("X");
    kill->setToolTip("Terminate the program!");
    kill->setGeometry(1,1,30,30);
    connect(kill,SIGNAL(clicked()),qApp,SLOT(quit()));

}
void buttons::flash1(){
    //system("fastboot oem getversions");
    //system("fastboot oem device-info");

    QMessageBox::information(this,"State","Flashing abl_a partition");
    system("fastboot flash abl_a abl.img");
    QMessageBox::information(this,"State","flashing abl_b partition");
    system("fastboot flash abl_b abl.img");
    QMessageBox::information(this,"State","flashing bluetooth_a partition");
    system("fastboot flash bluetooth_a bluetooth.img");
    QMessageBox::information(this,"State","flashing boot_a partition");
    system("fastboot flash boot_a boot.img");
    QMessageBox::information(this,"State","flashing cmnlib_a partition");
    system("fastboot flash cmnlib_a cmnlib.img");
    QMessageBox::information(this,"State","flashing cmnlib64_a partition");
    system("fastboot flash cmnlib64_a cmnlib64.img");
    QMessageBox::information(this,"State","flashing devcfg_a partition");
    system("fastboot flash devcfg_a devcfg.img");
    QMessageBox::information(this,"State","flashing dtbo_a partition");
    system("fastboot flash dtbo_a dtbo.img");
    QMessageBox::information(this,"State","flashing hyp_a partition");
    system("fastboot flash hyp_a hyp.img");
    QMessageBox::information(this,"State","flashing keymaster_a partition");
    system("fastboot flash keymaster_a keymaster.img");
    QMessageBox::information(this,"State","flashing modem_a partition");
    system("fastboot flash modem_a modem.img");
    QMessageBox::information(this,"State","flashing pmic_a partition");
    system("fastboot flash pmic_a pmic.img");
    QMessageBox::information(this,"State","flashing rpm_a partition");
    system("fastboot flash rpm_a rpm.img");
    QMessageBox::information(this,"State","flashing system_a partition");
    system("fastboot flash system_a system.img");
    QMessageBox::information(this,"State","flashing tz_a partition");
    system("fastboot flash tz_a tz.img");
    QMessageBox::information(this,"State","flashing vbmeta_a partition");
    system("fastboot flash vbmeta_a --disable-verity --disable-verification vbmeta.img");
    QMessageBox::information(this,"State","flashing vendor_a partition");
    system("fastboot flash vendor_a vendor.img");
    QMessageBox::information(this,"State","flashing xbl_a partition");
    system("fastboot flash xbl_a xbl.img");
    QMessageBox::information(this,"State","flashing xbl_b partition");
    system("fastboot flash xbl_b xbl.img");
    QMessageBox::information(this,"State","erasing userdata");
    system("fastboot --set-active=a");
    system("fastboot -w");
    QMessageBox::information(this,"State","Done:)\nRebooting in 4 seconds....");
    sleep(4);
    system("fastboot reboot");

}

void buttons::flash2(){
    //system("fastboot oem getversions");
    //system("fastboot oem device-info");

    QMessageBox::information(this,"State","Flashing abl_a partition");
    system("fastboot flash abl_a abl.img");
    QMessageBox::information(this,"State","flashing abl_b partition");
    system("fastboot flash abl_b abl.img");
    QMessageBox::information(this,"State","flashing bluetooth_a partition");
    system("fastboot flash bluetooth_a bluetooth.img");
    QMessageBox::information(this,"State","flashing cda_a partition");
    system("fastboot flash cda_a cda.img");
    QMessageBox::information(this,"State","flashing boot_a partition");
    system("fastboot flash boot_a boot.img");
    QMessageBox::information(this,"State","flashing cmnlib_a partition");
    system("fastboot flash cmnlib_a cmnlib.img");
    QMessageBox::information(this,"State","flashing cmnlib64_a partition");
    system("fastboot flash cmnlib64_a cmnlib64.img");
    QMessageBox::information(this,"State","flashing hidden_a partition");
    system("fastboot flash hidden_a hidden.img");
    QMessageBox::information(this,"State","flashing dsp_a partition");
    system("fastboot flash dsp_a dsp.img");
    QMessageBox::information(this,"State","flashing devcfg_a partition");
    system("fastboot flash devcfg_a devcfg.img");
    QMessageBox::information(this,"State","flashing mdtp_a partition");
    system("fastboot flash mdtp_a mdtp.img");
    QMessageBox::information(this,"State","flashing mdtpsecapp_a partition");
    system("fastboot flash mdtpsecapp_a mdtpsecapp.img");
    QMessageBox::information(this,"State","flashing hyp_a partition");
    system("fastboot flash hyp_a hyp.img");
    QMessageBox::information(this,"State","flashing keymaster_a partition");
    system("fastboot flash keymaster_a keymaster.img");
    QMessageBox::information(this,"State","flashing modem_a partition");
    system("fastboot flash modem_a modem.img");
    QMessageBox::information(this,"State","flashing nvdef_a partition");
    system("fastboot flash nvdef_a nvdef.img");
    QMessageBox::information(this,"State","flashing pmic_a partition");
    system("fastboot flash pmic_a pmic.img");
    QMessageBox::information(this,"State","flashing rpm_a partition");
    system("fastboot flash rpm_a rpm.img");
    QMessageBox::information(this,"State","flashing splash_a partition");
    system("fastboot flash splash_a splash.img");
    QMessageBox::information(this,"State","flashing system_a partition");
    system("fastboot flash system_a system.img");
    QMessageBox::information(this,"State","flashing systeminfo_a partition");
    system("fastboot flash systeminfo_a systeminfo.img");
    QMessageBox::information(this,"State","flashing tz_a partition");
    system("fastboot flash tz_a tz.img");
    QMessageBox::information(this,"State","flashing vendor_a partition");
    system("fastboot flash vendor_a vendor.img");
    QMessageBox::information(this,"State","flashing xbl_a partition");
    system("fastboot flash xbl_a xbl.img");
    QMessageBox::information(this,"State","flashing xbl_b partition");
    system("fastboot flash xbl_b xbl.img");
    QMessageBox::information(this,"State","erasing userdata");
    system("fastboot erase ssd");
    system("fastboot erase misc");
    system("fastboot erase sti");
    system("fastboot erase ddr");
    system("fastboot erase securefs");
    system("fastboot erase box");
    system("fastboot erase boot_b");
    system("fastboot --set-active=a");
    system("fastboot -w");
    QMessageBox::information(this,"State","Done:)\nRebooting in 4 seconds....");
    sleep(4);
    system("fastboot reboot");

}

