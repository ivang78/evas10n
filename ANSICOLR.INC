{ ANSI screen attributes }
  _CLS = #27'[2J';
  _ATR = #27'[0m';
  _COFF = #27'[?25l';
  _CON = #27'[?25h';
  _BLACK = #27'[30m';
  _RED = #27'[31m';
  _GREEN = #27'[32m';
  _YELLOW = #27'[33m';
  _BLUE = #27'[34m';
  _MAGENTA = #27'[35m';
  _CYAN = #27'[36m';
  _WHITE = #27'[37m';
  _CR = #13;
  _LF= #10;

type cstr=string[20];
