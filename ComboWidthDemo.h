// ComboWidthDemo.h : main header file for the COMBOWIDTHDEMO application
//

#if !defined(AFX_COMBOWIDTHDEMO_H__5E3BB934_0385_11D4_A2E3_0048543D92F7__INCLUDED_)
#define AFX_COMBOWIDTHDEMO_H__5E3BB934_0385_11D4_A2E3_0048543D92F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CComboWidthDemoApp:
// See ComboWidthDemo.cpp for the implementation of this class
//

class CComboWidthDemoApp : public CWinApp
{
public:
	CComboWidthDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComboWidthDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CComboWidthDemoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMBOWIDTHDEMO_H__5E3BB934_0385_11D4_A2E3_0048543D92F7__INCLUDED_)
