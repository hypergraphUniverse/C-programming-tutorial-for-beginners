@echo off
::元数据段
setlocal enabledelayedexpansion
set bat_version=0.2beta 
set interactive=0
set mission_name=mission_3.7.2
set para[0]=1
set para[1]=0
set para[2]=2000
set para[3]=1700
set para[4]=3200
set para[5]=982
set para[6]=213
set para[7]=381
set para[8]=921
set para[9]=-1
set paralist=0,1,9


::::::::::::::::::::::::::::::::::::::::::::::::::::::::若无意外下面的代码不用改动！::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
chcp 65001 1>nul
title %mission_name%自动测试脚本


::标题头段
@echo on
@echo %mission_name% 自动测试脚本。

@echo 内核版本 %bat_version%
@echo.
@echo 程序会用几组数据检查标准程序 %mission_name%_reference.exe 和你的程序 %mission_name%.exe 输出的差异。
@echo.


::误差警告
@if not %interactive%==1 goto NOWARN

@echo 注意，目前这个版本的脚本在测试交互性输入时，显示和手动输入有差异。

@echo 唯一的判断标准是，你的程序和我的范例程序在面对同一组数据的时反应是否存在差异。

@echo 如果某一次检查中停了下来，意味着你的程序输出与我不同。而"所有测试数据通过"即意味着全部一致。
@echo.
:NOWARN


::检查存在性
@if not exist %mission_name%.exe (
    @echo 你的程序 %mission_name%.exe 不存在，脚本自动退出...
    goto END
)

@if not exist %mission_name%_reference.exe (
    @echo 参考程序 %mission_name%_reference.exe 不存在，脚本自动退出...
    goto END
)

@echo off
pause


::检查主体
chcp 936 1>nul
for /L %%n in (%paralist%) do ( 
@echo on
    @echo !para[%%n]! | %mission_name%.exe > your_output
    @echo !para[%%n]! | %mission_name%_reference.exe > reference_output
    @echo Trial No.%%n
    @echo Data:!para[%%n]!
    @fc reference_output your_output /N /L /LB3 
@echo off

    IF !ERRORLEVEL!==1 (
        goto END    
    )
)

chcp 65001 1>nul
cls
@echo on
@echo 所有测试数据通过
@echo off

:END
@echo off
if exist your_output del your_output
if exist reference_output del reference_output
pause