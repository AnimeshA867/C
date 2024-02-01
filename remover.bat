@echo off
setlocal enabledelayedexpansion

set "extension=.cpp"
set "search= "
set "replace=_"

for %%F in (*%extension%) do (
    set "filename=%%~nF"
    set "filename=!filename:%search%=%replace%!"
    ren "%%F" "!filename!%extension%"
)

endlocal