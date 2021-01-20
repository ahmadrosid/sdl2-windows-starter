# SDL2 Project Starter for Windows

# Build
Build for 64 bit
```bash
gcc .\main.c -I.\SDL2\include\ -L.\SDL2\lib\x64 -lSDL2 -lSDL2main -o app.exe
```

Build for 32 bit
```bash
gcc .\main.c -I.\SDL2\include\ -L.\SDL2\lib\x86 -lSDL2 -lSDL2main -o app.exe
```