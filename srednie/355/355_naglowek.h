#include<iostream>
#ifndef _355_NAGLOWEK_H_
#define _355_NAGLOWEK_H_
using namespace std;
vector<double> pole_figury(vector<vector<double>> dlugosci, vector<vector<double>> tab);
vector<vector<double>> string_to_double(vector<string> tab);
vector<double> srodek(vector< vector<double> > tab, int (*f)(vector<double>, int), int (*g)(vector<double>, int));
int minimum(vector<double> tab, int p);
int maksimum(vector<double> tab, int p);
vector<vector<double>> dlugosc_boku(vector<vector<double>> tab, vector<double> tab2);
#endif // 355_NAGLOWEK_H
