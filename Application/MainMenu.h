
#ifndef __MAINMENU_H__
#define __MAINMENU_H__

typedef enum __MAINMENU_PAINT_STATUS
{
	MAINMENU_PAINT_NORMAL,
	MAINMENU_PAINT_PENDOWN,
	MAINMENU_PAINT_PENMOVE,
	MAINMENU_PAINT_PENUP,
	MAINMENU_PAINT_MAXSTATUS
} MAINMENU_PAINT_STATUS;

U8 CreateMainMenu(void* pPara);
U8 DeleteMainMenu();
U8 TopMainMenu(WM_HWIN hPreWin);
U8 EnterMainMenu();
U8 ExitMainMenu();

#endif // __MAINMENU_H__

