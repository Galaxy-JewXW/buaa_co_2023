@echo off
title BUAA CO P7
cd %~dp0
set inputfile=%1
if not "%~1"=="" goto skip
set /p inputfile=�뽫.asm�ļ���ק���ˣ���·���д��ڿո���������ţ�: 
:skip
cmd /c "%cd%/bin/main" %inputfile%
if not %errorlevel%==0 echo �ܱ�Ǹ����������з����������������ϵ���ߣ�
pause
exit /b