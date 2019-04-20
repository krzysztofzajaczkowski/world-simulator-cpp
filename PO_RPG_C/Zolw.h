#pragma once
#include <iostream>
#include <cstdlib>
#include "Organizm.h"
#include "Zwierze.h"
#include "Swiat.h"
#include <string>

class Zolw: public Zwierze{
public:
	Zolw(Swiat* swiat, Pozycja pozycja);
	void akcja() override;
	void reagujNaKolizje(Organizm* napastnik) override;
};