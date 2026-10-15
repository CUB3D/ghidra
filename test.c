int main() {
	asm("AT S1E1A, x0");
	asm("AT S1E2A, x0");
	asm("AT S1E3A, x0");

	asm("BRB IALL");
	asm("BRB INJ");


    asm("DC CVADP, x0");
    asm("DC CIPAE, x0");
    asm("DC CIGDPAE, x0");
    asm("DC CIPAPA, x0");
    asm("DC CIGDPAPA, x0");
    asm("DC CIVAPS, x0");
    asm("DC CIGDVAPS, x0");

    asm("IC IALLUIS");

//TODO: remove existing
asm("TLBI VMALLE1OS");
asm("TLBI VAE1OS, x0");
asm("TLBI ASIDE1OS, x0");
asm("TLBI VAAE1OS, x0");
asm("TLBI VALE1OS, x0");
asm("TLBI VAALE1OS, x0");
asm("TLBI RVAE1IS, x0");
asm("TLBI RVAAE1IS, x0");
asm("TLBI RVALE1IS, x0");
asm("TLBI RVAALE1IS, x0");
asm("TLBI VMALLE1IS");
asm("TLBI VAE1IS, x0");
asm("TLBI ASIDE1IS, x0");
asm("TLBI VAAE1IS, x0");
asm("TLBI VALE1IS, x0");
asm("TLBI VAALE1IS, x0");
asm("TLBI RVAE1OS, x0");
asm("TLBI RVAAE1OS, x0");
asm("TLBI RVALE1OS, x0");
asm("TLBI RVAALE1OS, x0");

asm("TLBI RVAE1, x0");
asm("TLBI RVAAE1, x0");
asm("TLBI RVALE1, x0");
asm("TLBI RVAALE1, x0");
asm("TLBI VMALLE1");
asm("TLBI VAE1, x0");
asm("TLBI ASIDE1, x0");
asm("TLBI VAAE1, x0");
asm("TLBI VALE1, x0");
asm("TLBI VAALE1, x0");
asm("TLBI VMALLE1OSNXS, x0");
asm("TLBI VAE1OSNXS, x0");
asm("TLBI ASIDE1OSNXS, x0");
asm("TLBI VAAE1OSNXS, x0");
asm("TLBI VALE1OSNXS, x0");
asm("TLBI VAALE1OSNXS, x0");
asm("TLBI RVAE1ISNXS, x0");
asm("TLBI RVAAE1ISNXS, x0");
asm("TLBI RVALE1ISNXS, x0");
asm("TLBI RVAALE1ISNXS, x0");
asm("TLBI VMALLE1ISNXS, x0");
asm("TLBI VAE1ISNXS, x0");
asm("TLBI ASIDE1ISNXS, x0");
asm("TLBI VAAE1ISNXS, x0");
asm("TLBI VALE1ISNXS, x0");
asm("TLBI VAALE1ISNXS, x0");
asm("TLBI RVAE1OSNXS, x0");
asm("TLBI RVAAE1OSNXS, x0");
asm("TLBI RVALE1OSNXS, x0");
asm("TLBI RVAALE1OSNXS, x0");
asm("TLBI RVAE1NXS, x0");
asm("TLBI RVAAE1NXS, x0");
asm("TLBI RVALE1NXS, x0");
asm("TLBI RVAALE1NXS, x0");
asm("TLBI VMALLE1NXS");
asm("TLBI VAE1NXS, x0");
asm("TLBI ASIDE1NXS, x0");
asm("TLBI VAAE1NXS, x0");
asm("TLBI VALE1NXS, x0");
asm("TLBI VAALE1NXS, x0");
asm("TLBI IPAS2E1IS, x0");
asm("TLBI RIPAS2E1IS, x0");
asm("TLBI IPAS2LE1IS, x0");
asm("TLBI RIPAS2LE1IS, x0");
asm("TLBI ALLE2OS, x0");
asm("TLBI VAE2OS, x0");
asm("TLBI ALLE1OS, x0");
asm("TLBI VALE2OS, x0");
asm("TLBI VMALLS12E1OS, x0");
asm("TLBI RVAE2IS, x0");
asm("TLBI RVALE2IS, x0");
asm("TLBI ALLE2IS, x0");
asm("TLBI VAE2IS, x0");
asm("TLBI ALLE1IS, x0");
asm("TLBI VALE2IS, x0");
asm("TLBI VMALLS12E1IS, x0");
asm("TLBI IPAS2E1OS, x0");
asm("TLBI IPAS2E1, x0");
asm("TLBI RIPAS2E1, x0");
asm("TLBI RIPAS2E1OS, x0");
asm("TLBI IPAS2LE1OS, x0");
asm("TLBI IPAS2LE1, x0");
asm("TLBI RIPAS2LE1, x0");
asm("TLBI RIPAS2LE1OS, x0");
asm("TLBI RVAE2OS, x0");
asm("TLBI RVALE2OS, x0");


}
