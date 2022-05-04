if exist Build (
    rd /s /Q Build
    md Build
) else (
    md Build
)

cd Build 
%~dp0\Third\CMake\bin\cmake.exe ..
cd ..