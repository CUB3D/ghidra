int main() {
	asm("AT S1E1R, x0");
	asm("AT S1E1W, x0");
	asm("AT S1E0R, x0");
	asm("AT S1E0W, x0");
	asm("AT S1E1RP, x0");
	asm("AT S1E1WP, x0");
	asm("AT S1E1A, x0");
	asm("AT S1E2R, x0");
	asm("AT S1E2W, x0");
	asm("AT S1E2A, x0");
	asm("AT S12E1R, x0");
	asm("AT S12E1W, x0");
	asm("AT S12E0R, x0");
	asm("AT S12E0W, x0");
	asm("AT S1E3R, x0");
	asm("AT S1E3W, x0");
	asm("AT S1E3A, x0");

	asm("BRB IALL");
	asm("BRB INJ");


asm("DC IVAC, x0");
asm("DC ISW, x0");
asm("DC IGVAC, x0");
asm("DC IGSW, x0");
asm("DC IGDVAC, x0");
asm("DC IGDSW, x0");
asm("DC CSW, x0");
asm("DC CGSW, x0");
asm("DC CGDSW, x0");
asm("DC CISW, x0");
asm("DC CIGSW, x0");
asm("DC CIGDSW, x0");
asm("DC ZVA, x0");
asm("DC GVA, x0");
asm("DC GZVA, x0");
asm("DC CVAC, x0");
asm("DC CGVAC, x0");
asm("DC CGDVAC, x0");
asm("DC CVAU, x0");
asm("DC CVAP, x0");
asm("DC CGVAP, x0");
asm("DC CGDVAP, x0");
asm("DC CVADP, x0");
asm("DC CGVADP, x0");
asm("DC CGDVADP, x0");
asm("DC CIVAC, x0");
asm("DC CIGVAC, x0");
asm("DC CIGDVAC, x0");
asm("DC CIPAE, x0");
asm("DC CIGDPAE, x0");
asm("DC CIPAPA, x0");
asm("DC CIGDPAPA, x0");
asm("DC CIVAPS, x0");
asm("DC CIGDVAPS, x0");
}
