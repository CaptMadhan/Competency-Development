@echo off

mkdir build
cd build
cmake .. -T v142  -G "Visual Studio 16" -A x64

if errorlevel 1 pause & exit /b

echo.
echo Finished! Your Visual Studio Solution has been created in 'build' directory
pause