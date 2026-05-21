@echo off
g++ main.cpp src/Customer.cpp src/Admin.cpp src/FoodStall.cpp -I. -o main
if %errorlevel% equ 0 (
    echo Build successful!
    main.exe
) else (
    echo Build failed!
)
