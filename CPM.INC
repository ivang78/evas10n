Procedure SetTextColor(c: cstr);
begin
    if terminal = 1 then
        begin
            write(c);
        end;
end;

{ emulate missing CRT functions }
function ReadKey : Char;
begin
    ReadKey := Chr(Bios(2)); {ConIn}
end;

{ ANSI CursorOff }
procedure CursorOff;
begin
  { \e[?25l }
  Write(#27); { \e }
  Write(#91); { [  }
  Write(#63); { ?  }
  Write(#50); { 2  }
  Write(#53); { 5  }
  Write(#108); { l }
end;

{ ANSI CursorOn }
procedure CursorOn;
begin
  { \e[?25h }
  Write(#27); { \e }
  Write(#91); { [  }
  Write(#63); { ?  }
  Write(#50); { 2  }
  Write(#53); { 5  }
  Write(#104); { h }
end;
