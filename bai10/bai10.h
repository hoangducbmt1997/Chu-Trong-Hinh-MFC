
// bai10.h : main header file for the bai10 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// Cbai10App:
// See bai10.cpp for the implementation of this class
//

class Cbai10App : public CWinApp
{
public:
	Cbai10App();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cbai10App theApp;
