#INCLUDE system.h
#INCLUDE gdiplusconstants.h

#DEFINE BI_RGB 0x00
#DEFINE DIB_RGB_COLORS 0
#DEFINE OBJ_BITMAP	7

#DEFINE ENUM_BASECLASS		"Empty"

#DEFINE EMPTY_FLOAT			0h00000000
#DEFINE EMPTY_LONG			0h00000000
#DEFINE EMPTY_SHORT			0h0000
#DEFINE EMPTY_RECTANGLE		EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG
#DEFINE EMPTY_RECTANGLEF	EMPTY_FLOAT+EMPTY_FLOAT+EMPTY_FLOAT+EMPTY_FLOAT
#DEFINE EMPTY_POINT			EMPTY_LONG+EMPTY_LONG
#DEFINE EMPTY_POINTF		EMPTY_FLOAT+EMPTY_FLOAT
#DEFINE EMPTY_SIZE			EMPTY_LONG+EMPTY_LONG
#DEFINE EMPTY_SIZEF			EMPTY_FLOAT+EMPTY_FLOAT
#DEFINE EMPTY_METAFILEHEADER  EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+;
								EMPTY_FLOAT+EMPTY_FLOAT+;
								EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+;
								EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG
#DEFINE EMPTY_ICONINFO		EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG
#DEFINE EMPTY_BITMAP		EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_SHORT+EMPTY_SHORT+EMPTY_LONG

#DEFINE LF_FACESIZE			30
#DEFINE EMPTY_LOGFONT		EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+EMPTY_LONG+;
							0h0000000000000000+REPLICATE(0h00,LF_FACESIZE)

#DEFINE SIZEOF_WORD			2
#DEFINE SIZEOF_FLOAT		4
#DEFINE SIZEOF_LONG			4
#DEFINE SIZEOF_RECTANGLE	16
#DEFINE SIZEOF_RECTANGLEF	16
#DEFINE SIZEOF_POINT		8
#DEFINE SIZEOF_POINTF		8
#DEFINE SIZEOF_SIZE			8
#DEFINE SIZEOF_SIZEF		8
#DEFINE SIZEOF_PTR			SIZEOF_LONG

#DEFINE SIZEOF_BITMAPINFOHEADER	(4+4+4+2+2+4+4+4+4+4+4)
#DEFINE SIZEOF_BITMAP (4+4+4+4+2+2+4)
#DEFINE SIZEOF_BITMAPFILEHEADER (2+4+4+4)

#DEFINE SIZEOF_ENCODERPARAMETER (SIZEOF_GUID+SIZEOF_LONG+SIZEOF_LONG+SIZEOF_PTR)

#DEFINE DEFAULT_PALETTE 15

#DEFINE COLOR_SCROLLBAR         0
#DEFINE COLOR_BACKGROUND        1
#DEFINE COLOR_ACTIVECAPTION     2
#DEFINE COLOR_INACTIVECAPTION   3
#DEFINE COLOR_MENU              4
#DEFINE COLOR_WINDOW            5
#DEFINE COLOR_WINDOWFRAME       6
#DEFINE COLOR_MENUTEXT          7
#DEFINE COLOR_WINDOWTEXT        8
#DEFINE COLOR_CAPTIONTEXT       9
#DEFINE COLOR_ACTIVEBORDER      10
#DEFINE COLOR_INACTIVEBORDER    11
#DEFINE COLOR_APPWORKSPACE      12
#DEFINE COLOR_HIGHLIGHT         13
#DEFINE COLOR_HIGHLIGHTTEXT     14
#DEFINE COLOR_BTNFACE           15
#DEFINE COLOR_BTNSHADOW         16
#DEFINE COLOR_GRAYTEXT          17
#DEFINE COLOR_BTNTEXT           18
#DEFINE COLOR_INACTIVECAPTIONTEXT 19
#DEFINE COLOR_BTNHIGHLIGHT      20
#DEFINE COLOR_3DDKSHADOW        21
#DEFINE COLOR_3DLIGHT           22
#DEFINE COLOR_INFOTEXT          23
#DEFINE COLOR_INFOBK            24
#DEFINE COLOR_DESKTOP           COLOR_BACKGROUND
#DEFINE COLOR_3DFACE            COLOR_BTNFACE
#DEFINE COLOR_3DSHADOW          COLOR_BTNSHADOW
#DEFINE COLOR_3DHIGHLIGHT       COLOR_BTNHIGHLIGHT
#DEFINE COLOR_3DHILIGHT         COLOR_BTNHIGHLIGHT
#DEFINE COLOR_BTNHILIGHT        COLOR_BTNHIGHLIGHT
#DEFINE COLOR_HOTLIGHT 			26
#DEFINE COLOR_MENUBAR			30
#DEFINE COLOR_MENUHILIGHT   	29

#DEFINE IDI_APPLICATION    32512 
#DEFINE IDI_ASTERISK       32516 
#DEFINE IDI_ERROR          32513 
#DEFINE IDI_EXCLAMATION    32515 
#DEFINE IDI_QUESTION       32514 
#DEFINE IDI_WINLOGO        32517 
#DEFINE IDI_WARNING        IDI_EXCLAMATION 
#DEFINE IDI_HAND           IDI_ERROR 
#DEFINE IDI_INFORMATION    IDI_ASTERISK 

#DEFINE GDIP_EMFPLUSFLAGS_DISPLAY  0x00000001