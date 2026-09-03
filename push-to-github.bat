@echo off
REM ============================================================
REM  Commit + push whatever folder this script sits in.
REM  Copy this file into any future project folder to reuse it -
REM  it always operates on its own folder, never a hard-coded path.
REM  Double-click this file to run it.
REM ============================================================
setlocal
cd /d "%~dp0"

echo Working in: %cd%
echo.

git remote get-url origin >nul 2>&1
if errorlevel 1 (
    echo No GitHub remote is set up for this folder yet.
    echo.
    echo One-time setup, only needed once per project:
    echo   1. Create an empty repo at https://github.com/new
    echo   2. Run these two commands here ~once~:
    echo        git remote add origin https://github.com/egorgusev1/REPO-NAME.git
    echo        git branch -M main
    echo   3. Then re-run this script.
    echo.
    pause
    exit /b 1
)

echo Current status:
git status
echo.

set /p commitmsg="Commit message (what changed, and why): "
if "%commitmsg%"=="" (
    echo No message entered - aborting so you don't end up with a blank commit.
    pause
    exit /b 1
)

git add .
git commit -m "%commitmsg%"
if errorlevel 1 (
    echo Nothing to commit, or commit failed - check the messages above.
    pause
    exit /b 1
)

git push origin main

echo.
echo Recent history:
git log --oneline -5
echo.
pause
