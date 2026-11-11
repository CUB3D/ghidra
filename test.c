int main() {
	asm("FMLALB V0.8H, V1.16B, V2.B[1]");
	asm("FMLALT V0.8H, V1.16B, V2.B[1]");
	asm("FMLALB V0.8H, V1.16B, V2.16B");
	asm("FMLALT V0.8H, V1.16B, V2.16B");

	asm("fmlallbb V0.4s, V1.16B, V2.B[1]");
	asm("fmlallbt V0.4s, V1.16B, V2.B[1]");
	asm("fmlalltb V0.4s, V1.16B, V2.B[1]");
	asm("fmlalltt V0.4s, V1.16B, V2.B[1]");

	asm("fmlallbb V0.4s, V1.16B, V2.16B");
	asm("fmlallbt V0.4s, V1.16B, V2.16B");
	asm("fmlalltb V0.4s, V1.16B, V2.16B");
	asm("fmlalltt V0.4s, V1.16B, V2.16B");

	asm("fmlalb z0.h, z1.B, z2.B");
	asm("fmlalb z0.h, z1.B, z2.B[3]");

	asm("fmlallbb z0.s, z1.B, z2.B");
	asm("fmlallbb z0.s, z1.B, z2.B[3]");

	asm("fmlallbt z0.s, z1.B, z2.B");
	asm("fmlallbt z0.s, z1.B, z2.B[3]");

	asm("fmlalltb z0.s, z1.B, z2.B");
	asm("fmlalltb z0.s, z1.B, z2.B[3]");

	asm("fmlalltt z0.s, z1.B, z2.B");
	asm("fmlalltt z0.s, z1.B, z2.B[3]");

	asm("fmlalt z0.h, z1.B, z2.B");
	asm("fmlalt z0.h, z1.B, z2.B[3]");
}
