// ComboWidthDemoDlg.h : header file
//

#if !defined(AFX_COMBOWIDTHDEMODLG_H__5E3BB936_0385_11D4_A2E3_0048543D92F7__INCLUDED_)
#define AFX_COMBOWIDTHDEMODLG_H__5E3BB936_0385_11D4_A2E3_0048543D92F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "MyComboBox.h"

/////////////////////////////////////////////////////////////////////////////
// CComboWidthDemoDlg dialog

class CComboWidthDemoDlg : public CDialog
{
// Construction
public:
	CComboWidthDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CComboWidthDemoDlg)
	enum { IDD = IDD_COMBOWIDTHDEMO_DIALOG };
	CMyComboBox	m_Combo;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComboWidthDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CComboWidthDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMBOWIDTHDEMODLG_H__5E3BB936_0385_11D4_A2E3_0048543D92F7__INCLUDED_)
