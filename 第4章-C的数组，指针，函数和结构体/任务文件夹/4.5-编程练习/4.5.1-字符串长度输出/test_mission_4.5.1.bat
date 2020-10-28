@echo off
setlocal enabledelayedexpansion
::元数据段
::data_version=202010252051
set bat_version=1.1.1beta 
set interactive=0
set mission_name=mission_4.5.1
set para[0]=123111
set para[1]=Apple-pie
set para[2]=asdfg123:::
set para[3]=awsl
set para[4]=farbig
set para[5]=999900001
set para[6]=mxnajuwnq
set para[7]=maximun
set para[8]=wqwq
set para[9]=QAQ
set paralist=0,1,9
set maxwaittime=5

::::::::::::::::::::::::::::::::::::::::::::::::::::::::若无意外下面的代码不用改动！::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
chcp 65001 1>nul
title %mission_name%自动测试脚本

@REM 标题头段
@echo on
@echo %mission_name% 自动测试脚本。

@echo 内核版本 %bat_version%
@echo.
@echo 程序会用几组数据检查标准程序 %mission_name%_reference.exe 和你的程序 %mission_name%.exe 输出的差异。
@echo.


@REM 误差警告
@if not %interactive%==1 goto NOWARN

@echo 注意，目前这个版本的脚本在测试交互性输入时，显示和手动输入有差异。

@echo 唯一的判断标准是，你的程序和我的范例程序在面对同一组数据的时反应是否存在差异。

@echo 如果某一次检查中停了下来，意味着你的程序输出与我不同。而"所有测试数据通过"即意味着全部一致。
@echo.
:NOWARN


@REM 检查存在性
@if not exist %mission_name%.exe (
    @echo 你的程序 %mission_name%.exe 不存在，脚本自动退出...
    goto END
)

@if not exist %mission_name%_reference.exe (
    @echo 参考程序 %mission_name%_reference.exe 不存在，脚本自动退出...
    goto END
)

@REM 终止已存在程序

@echo 本测试脚本即将终止正在打开的你的程序以及参考程序进程
@pause

@tasklist /fo CSV | findstr -i "%mission_name%.exe"
@IF !ERRORLEVEL!==0 (
taskkill /im %mission_name%.exe > nul
)

@tasklist /fo CSV | findstr -i "%mission_name%_reference.exe"
@IF !ERRORLEVEL!==0 (
taskkill /im %mission_name%_reference.exe > nul
)

@tasklist /fo CSV /fi "WINDOWTITLE eq test_%mission_name%_timer*"| findstr -i "cmd.exe"
@IF !ERRORLEVEL!==0 (
taskkill /fi "WINDOWTITLE eq test_%mission_name%_timer*" > nul
)

@tasklist /fo CSV /fi "WINDOWTITLE eq test_%mission_name%_timer*"| findstr -i "cmd.exe"
@IF !ERRORLEVEL!==0 (
taskkill /fi "WINDOWTITLE eq test_%mission_name%_timer*" > nul
)

@echo on

@REM 计时器准备


@set rand=%RANDOM%

@REM 检查主体
@chcp 936 > nul
@echo off
@FOR /L %%n in (%paralist%) do ( 
    @echo on
    @echo Trial No.%%n
    @echo Data:!para[%%n]!
    @echo @setlocal enabledelayedexpansion > test_%mission_name%_timer.bat
    @echo @set rand=%%RANDOM%% >> test_%mission_name%_timer.bat
    @echo @set maxwait=%maxwaittime%  >> test_%mission_name%_timer.bat
    @echo @set waitcount=0 >> test_%mission_name%_timer.bat

    @echo @echo @echo !para[%%n]! ^^^^^| %mission_name% ^^^^^> your_output ^> program_wrapper.bat^ >> test_%mission_name%_timer.bat
    @echo @echo @exit ^>^> program_wrapper.bat >> test_%mission_name%_timer.bat

    @echo @echo off >> test_%mission_name%_timer.bat
    @echo start /min "test_%mission_name%_timer_%%rand%%" program_wrapper.bat  >> test_%mission_name%_timer.bat

    @echo :WAIT >> test_%mission_name%_timer.bat
    @echo if %%waitcount%% GEQ %%maxwait%% goto KILL_IT >> test_%mission_name%_timer.bat

    @echo timeout /T 1 ^> nul >> test_%mission_name%_timer.bat
    @echo set /a waitcount+=1 >> test_%mission_name%_timer.bat
    @echo tasklist /FI "WindowTitle eq test_%mission_name%_timer_%%rand%%*" /FO CSV ^| findstr -i "cmd.exe" ^>nul >> test_%mission_name%_timer.bat
    @echo if ^^!ERRORLEVEL^^!==1 goto RUN_DONE >> test_%mission_name%_timer.bat
    @echo goto WAIT >> test_%mission_name%_timer.bat

    @echo :KILL_IT >> test_%mission_name%_timer.bat
    @echo taskkill /FI "WindowTitle eq test_%mission_name%_timer_%%rand%%*" /F /T ^>nul >> test_%mission_name%_timer.bat
    @echo exit /b 1 >> test_%mission_name%_timer.bat

    @echo :RUN_DONE >> test_%mission_name%_timer.bat
    @echo exit /b 0 >> test_%mission_name%_timer.bat
    
    @call "test_%mission_name%_timer" test_%mission_name%_timer.bat
    @if !ERRORLEVEL!==1 (
    @echo Your Program runs longer than %maxwaittime% seconds
    @goto END
    )
    @echo !para[%%n]! | %mission_name%_reference.exe > reference_output
    @fc reference_output your_output /N /L /LB3 >nul
    @IF !ERRORLEVEL!==1 (
    @echo.
    @echo difference found
    @echo ----------Here is a full report about the difference----------------
    @echo -This is the reference output:
    @type reference_output
    @echo -End of the standard output-
    @echo -This is your output:
    @type your_output
    @echo -End of your output-
    @echo ----------------------End of the whole report----------------------
    goto END
    )
    @echo.
    @echo No difference found
    @echo ----------------------------------------------------------------------
    @echo off
) 

chcp 65001 1>nul

@echo on
@echo 所有测试数据通过
@echo off

:END
@echo off
if exist your_output del your_output
if exist reference_output del reference_output
if exist test_%mission_name%_timer.bat del test_%mission_name%_timer.bat
if exist program_wrapper.bat del program_wrapper.bat
pause