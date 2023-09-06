#pragma once
#include <SDL2/SDL.h>
#define SDLK_SCANCODE_MASK (1<<30)
#define SDL_SCANCODE_TO_KEYCODE(X)  (X | SDLK_SCANCODE_MASK)

//this is a wrapper to the sdl_keycode enum 
//able to change values/input library if needed
typedef enum
{

    R2R_UNKNOWN = 0,

    R2R_RETURN = '\r',
    R2R_ESCAPE = '\x1B',
    R2R_BACKSPACE = '\b',
    R2R_TAB = '\t',
    R2R_SPACE = ' ',
    R2R_EXCLAIM = '!',
    R2R_QUOTEDBL = '"',
    R2R_HASH = '#',
    R2R_PERCENT = '%',
    R2R_DOLLAR = '$',
    R2R_AMPERSAND = '&',
    R2R_QUOTE = '\'',
    R2R_LEFTPAREN = '(',
    R2R_RIGHTPAREN = ')',
    R2R_ASTERISK = '*',
    R2R_PLUS = '+',
    R2R_COMMA = ',',
    R2R_MINUS = '-',
    R2R_PERIOD = '.',
    R2R_SLASH = '/',
    R2R_0 = '0',
    R2R_1 = '1',
    R2R_2 = '2',
    R2R_3 = '3',
    R2R_4 = '4',
    R2R_5 = '5',
    R2R_6 = '6',
    R2R_7 = '7',
    R2R_8 = '8',
    R2R_9 = '9',
    R2R_COLON = ':',
    R2R_SEMICOLON = ';',
    R2R_LESS = '<',
    R2R_EQUALS = '=',
    R2R_GREATER = '>',
    R2R_QUESTION = '?',
    R2R_AT = '@',

    /*
       Skip uppercase letters
     */

    R2R_LEFTBRACKET = '[',
    R2R_BACKSLASH = '\\',
    R2R_RIGHTBRACKET = ']',
    R2R_CARET = '^',
    R2R_UNDERSCORE = '_',
    R2R_BACKQUOTE = '`',
    R2R_a = 'a',
    R2R_b = 'b',
    R2R_c = 'c',
    R2R_d = 'd',
    R2R_e = 'e',
    R2R_f = 'f',
    R2R_g = 'g',
    R2R_h = 'h',
    R2R_i = 'i',
    R2R_j = 'j',
    R2R_k = 'k',
    R2R_l = 'l',
    R2R_m = 'm',
    R2R_n = 'n',
    R2R_o = 'o',
    R2R_p = 'p',
    R2R_q = 'q',
    R2R_r = 'r',
    R2R_s = 's',
    R2R_t = 't',
    R2R_u = 'u',
    R2R_v = 'v',
    R2R_w = 'w',
    R2R_x = 'x',
    R2R_y = 'y',
    R2R_z = 'z',

    R2R_CAPSLOCK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CAPSLOCK),

    R2R_F1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F1),
    R2R_F2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F2),
    R2R_F3 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F3),
    R2R_F4 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F4),
    R2R_F5 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F5),
    R2R_F6 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F6),
    R2R_F7 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F7),
    R2R_F8 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F8),
    R2R_F9 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F9),
    R2R_F10 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F10),
    R2R_F11 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F11),
    R2R_F12 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F12),

    R2R_PRINTSCREEN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRINTSCREEN),
    R2R_SCROLLLOCK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SCROLLLOCK),
    R2R_PAUSE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAUSE),
    R2R_INSERT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_INSERT),
    R2R_HOME = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HOME),
    R2R_PAGEUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEUP),
    R2R_DELETE = '\x7F',
    R2R_END = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_END),
    R2R_PAGEDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEDOWN),
    R2R_RIGHT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RIGHT),
    R2R_LEFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LEFT),
    R2R_DOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DOWN),
    R2R_UP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UP),

    R2R_NUMLOCKCLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_NUMLOCKCLEAR),
    R2R_KP_DIVIDE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DIVIDE),
    R2R_KP_MULTIPLY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MULTIPLY),
    R2R_KP_MINUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MINUS),
    R2R_KP_PLUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUS),
    R2R_KP_ENTER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_ENTER),
    R2R_KP_1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_1),
    R2R_KP_2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_2),
    R2R_KP_3 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_3),
    R2R_KP_4 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_4),
    R2R_KP_5 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_5),
    R2R_KP_6 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_6),
    R2R_KP_7 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_7),
    R2R_KP_8 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_8),
    R2R_KP_9 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_9),
    R2R_KP_0 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_0),
    R2R_KP_PERIOD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERIOD),

    R2R_APPLICATION = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APPLICATION),
    R2R_POWER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_POWER),
    R2R_KP_EQUALS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALS),
    R2R_F13 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F13),
    R2R_F14 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F14),
    R2R_F15 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F15),
    R2R_F16 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F16),
    R2R_F17 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F17),
    R2R_F18 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F18),
    R2R_F19 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F19),
    R2R_F20 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F20),
    R2R_F21 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F21),
    R2R_F22 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F22),
    R2R_F23 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F23),
    R2R_F24 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F24),
    R2R_EXECUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXECUTE),
    R2R_HELP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HELP),
    R2R_MENU = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MENU),
    R2R_SELECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SELECT),
    R2R_STOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_STOP),
    R2R_AGAIN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AGAIN),
    R2R_UNDO = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UNDO),
    R2R_CUT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CUT),
    R2R_COPY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COPY),
    R2R_PASTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PASTE),
    R2R_FIND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_FIND),
    R2R_MUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MUTE),
    R2R_VOLUMEUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEUP),
    R2R_VOLUMEDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEDOWN),
    R2R_KP_COMMA = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COMMA),
    R2R_KP_EQUALSAS400 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALSAS400),

    R2R_ALTERASE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_ALTERASE),
    R2R_SYSREQ = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SYSREQ),
    R2R_CANCEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CANCEL),
    R2R_CLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEAR),
    R2R_PRIOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRIOR),
    R2R_RETURN2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RETURN2),
    R2R_SEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SEPARATOR),
    R2R_OUT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OUT),
    R2R_OPER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OPER),
    R2R_CLEARAGAIN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEARAGAIN),
    R2R_CRSEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CRSEL),
    R2R_EXSEL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXSEL),

    R2R_KP_00 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_00),
    R2R_KP_000 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_000),
    R2R_THOUSANDSSEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_THOUSANDSSEPARATOR),
    R2R_DECIMALSEPARATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DECIMALSEPARATOR),
    R2R_CURRENCYUNIT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYUNIT),
    R2R_CURRENCYSUBUNIT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYSUBUNIT),
    R2R_KP_LEFTPAREN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTPAREN),

    R2R_KP_RIGHTPAREN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTPAREN),
    R2R_KP_LEFTBRACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTBRACE),
    R2R_KP_RIGHTBRACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTBRACE),
    R2R_KP_TAB = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_TAB),
    R2R_KP_BACKSPACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BACKSPACE),
    R2R_KP_A = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_A),
    R2R_KP_B = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_B),
    R2R_KP_C = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_C),
    R2R_KP_D = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_D),
    R2R_KP_E = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_E),
    R2R_KP_F = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_F),
    R2R_KP_XOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_XOR),
    R2R_KP_POWER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_POWER),
    R2R_KP_PERCENT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERCENT),
    R2R_KP_LESS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LESS),
    R2R_KP_GREATER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_GREATER),
    R2R_KP_AMPERSAND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AMPERSAND),
    R2R_KP_DBLAMPERSAND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLAMPERSAND),
    R2R_KP_VERTICALBAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_VERTICALBAR),
    R2R_KP_DBLVERTICALBAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLVERTICALBAR),
    R2R_KP_COLON = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COLON),
    R2R_KP_HASH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HASH),
    R2R_KP_SPACE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_SPACE),
    R2R_KP_AT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AT),
    R2R_KP_EXCLAM = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EXCLAM),
    R2R_KP_MEMSTORE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSTORE),
    R2R_KP_MEMRECALL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMRECALL),
    R2R_KP_MEMCLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMCLEAR),
    R2R_KP_MEMADD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMADD),
    R2R_KP_MEMSUBTRACT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSUBTRACT),
    R2R_KP_MEMMULTIPLY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMMULTIPLY),
    R2R_KP_MEMDIVIDE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMDIVIDE),
    R2R_KP_PLUSMINUS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUSMINUS),
    R2R_KP_CLEAR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEAR),
    R2R_KP_CLEARENTRY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEARENTRY),
    R2R_KP_BINARY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BINARY),
    R2R_KP_OCTAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_OCTAL),
    R2R_KP_DECIMAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DECIMAL),
    R2R_KP_HEXADECIMAL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HEXADECIMAL),

    R2R_LCTRL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LCTRL),
    R2R_LSHIFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LSHIFT),
    R2R_LALT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LALT),
    R2R_LGUI = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LGUI),
    R2R_RCTRL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RCTRL),
    R2R_RSHIFT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RSHIFT),
    R2R_RALT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RALT),
    R2R_RGUI = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RGUI),

    R2R_MODE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MODE),

    R2R_AUDIONEXT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIONEXT),
    R2R_AUDIOPREV = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPREV),
    R2R_AUDIOSTOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOSTOP),
    R2R_AUDIOPLAY = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPLAY),
    R2R_AUDIOMUTE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOMUTE),
    R2R_MEDIASELECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MEDIASELECT),
    R2R_WWW = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_WWW),
    R2R_MAIL = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MAIL),
    R2R_CALCULATOR = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CALCULATOR),
    R2R_COMPUTER = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COMPUTER),
    R2R_AC_SEARCH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_SEARCH),
    R2R_AC_HOME = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_HOME),
    R2R_AC_BACK = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BACK),
    R2R_AC_FORWARD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_FORWARD),
    R2R_AC_STOP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_STOP),
    R2R_AC_REFRESH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_REFRESH),
    R2R_AC_BOOKMARKS = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BOOKMARKS),

    R2R_BRIGHTNESSDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSDOWN),
    R2R_BRIGHTNESSUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSUP),
    R2R_DISPLAYSWITCH = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DISPLAYSWITCH),
    R2R_KBDILLUMTOGGLE = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMTOGGLE),
    R2R_KBDILLUMDOWN = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMDOWN),
    R2R_KBDILLUMUP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMUP),
    R2R_EJECT = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EJECT),
    R2R_SLEEP = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SLEEP),
    R2R_APP1 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APP1),
    R2R_APP2 = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APP2),

    R2R_AUDIOREWIND = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOREWIND),
    R2R_AUDIOFASTFORWARD = SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOFASTFORWARD)

} R2R_keycode;