//#include "stdafx.h"

/******************************************************************************* 
* 1、 文件名称： PowerOff
* 2、 版　　本： Version 1.0
* 3、 描    述： 控制机器关机、重启、注销、休眠（保存数据）和强制关机、重启、注销（不保存数据）
* 4、 程序设计： 阿毛
* 5、 开发日期： 2011-9-9 11:17:17
* 6、 备      注：  Win32工程，只用到了系统sdk
* 7、 修改日期： 
********************************************************************************/ 

BOOL Reboot();    //重新启动计算机

BOOL ShutDown();  //关闭计算机

BOOL Logoff();    //注销log off

BOOL Hibernate();       //待机休眠

BOOL ForceLogoff();     //强制注销forced

BOOL ForceShutDown();   //强制关机

BOOL ForceReboot();     //强制重启