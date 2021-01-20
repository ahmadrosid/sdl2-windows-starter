@echo off
 gcc .\main.c -I.\SDL2\include\ -L.\SDL2\lib\x64 -lSDL2 -lSDL2main -o app.exe