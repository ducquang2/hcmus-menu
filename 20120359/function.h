#pragma once
#ifndef _HEADER_H
#define _HEADER_H

int Mainmenu();
int Submenu1();
int Submenu2();
int SelectCommand(int Lenh);
int RunMainMenu(int Lenh);
int RunSubMenu1(int Lenh);
int RunSubMenu2(int Lenh);
void InputTwoNums(int& a, int& b);
void InputOneNum(int& a);
int isPrime(int n);
int isSquareNum(int n);
int isPerfectNum(int n);

#endif