
// ComicRepackDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CComicRepackDlg �Ի���
class CComicRepackDlg : public CDialogEx
{
// ����
public:
	CComicRepackDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMICREPACK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	BOOL EditCopy(CString & strInfo);
public:
	afx_msg void OnBnClickedButton1();
	CEdit m_oPath;
	afx_msg void OnBnClickedPack();
	CComboBox m_oVolNum;
	CButton m_oIgnoreFirst;
	CButton m_oPackButton;
	CStatic m_oInfo;
	CEdit m_oLog;
	afx_msg void OnBnClickedGetLog();
	CEdit m_oStartChapter;
};
