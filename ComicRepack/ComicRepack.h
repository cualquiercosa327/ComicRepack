
// ComicRepack.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CComicRepackApp: 
// �йش����ʵ�֣������ ComicRepack.cpp
//

class CComicRepackApp : public CWinApp
{
public:
	CComicRepackApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CComicRepackApp theApp;