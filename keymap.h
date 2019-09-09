#ifndef _KEYMAP_H
#define _KEYMAP_H

#define KEY_NEXT        XK_Tab
#define KEY_NEXTSCREEN  XK_s
#define KEY_NEW         XK_Return
#define KEY_TOPLEFT     XK_y
#define KEY_TOPRIGHT    XK_u
#define KEY_BOTTOMLEFT  XK_n
#define KEY_BOTTOMRIGHT XK_m
#define KEY_LEFT        XK_h
#define KEY_RIGHT       XK_l
#define KEY_DOWN        XK_j
#define KEY_UP          XK_k
#define KEY_LOWER       XK_p
#define KEY_ALTLOWER    XK_KP_Insert
#define KEY_INFO        XK_i
#define KEY_MAXVERT     XK_equal
#define KEY_MAXHORZ     XK_minus
#define KEY_MAX         XK_x
#define KEY_CENTER      XK_o
#define KEY_DOCK_TOGGLE XK_d
#define KEY_QUITFROMWM  XK_q
#ifdef VWM
# define KEY_FIX        XK_f
# define KEY_PREVDESK   XK_Left
# define KEY_NEXTDESK   XK_Right
# define KEY_TOGGLEDESK XK_a
#endif
/* Mixtures of Ctrl, Alt an Escape are used for things like VMWare and
 * XFree86/Cygwin, so the KILL key is an option in the Makefile  */
#ifndef KEY_KILL
# define KEY_KILL       XK_Escape
#endif

#endif
