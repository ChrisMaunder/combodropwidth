; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CComboWidthDemoDlg
LastTemplate=CComboBox
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ComboWidthDemo.h"

ClassCount=4
Class1=CComboWidthDemoApp
Class2=CComboWidthDemoDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_COMBOWIDTHDEMO_DIALOG
Resource4=IDD_ABOUTBOX (English (U.S.))
Class4=CMyComboBox
Resource5=IDD_COMBOWIDTHDEMO_DIALOG (English (U.S.))

[CLS:CComboWidthDemoApp]
Type=0
HeaderFile=ComboWidthDemo.h
ImplementationFile=ComboWidthDemo.cpp
Filter=N

[CLS:CComboWidthDemoDlg]
Type=0
HeaderFile=ComboWidthDemoDlg.h
ImplementationFile=ComboWidthDemoDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CComboWidthDemoDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=ComboWidthDemoDlg.h
ImplementationFile=ComboWidthDemoDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_COMBOWIDTHDEMO_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=CComboWidthDemoDlg

[DLG:IDD_COMBOWIDTHDEMO_DIALOG (English (U.S.))]
Type=1
Class=CComboWidthDemoDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDC_COMBO,combobox,1344339970

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[CLS:CMyComboBox]
Type=0
HeaderFile=MyComboBox.h
ImplementationFile=MyComboBox.cpp
BaseClass=CComboBox
Filter=W
VirtualFilter=cWC
LastObject=CMyComboBox

