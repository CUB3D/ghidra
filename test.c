int main() {
	asm("cfltgt #1, w0, #1");
	asm("cfltge #1, w0, #1");
	asm("cflthi #1, w0, #1");
	asm("cflths #1, w0, #1");
	asm("cflteq #1, w0, #1");
	asm("cfltne #1, w0, #1");
	asm("cfltgt #1, x0, #1");
	asm("cfltge #1, x0, #1");
	asm("cflthi #1, x0, #1");
	asm("cflths #1, x0, #1");
	asm("cflteq #1, x0, #1");
	asm("cfltne #1, x0, #1");


	asm("cfltgt #1, w0, WSP");
	asm("cfltge #1, w0, WSP");
	asm("cflthi #1, w0, WSP");
	asm("cflths #1, w0, WSP");
	asm("cflteq #1, w0, WSP");
	asm("cfltne #1, w0, WSP");
	asm("cfltgt #1, x0, SP");
	asm("cfltge #1, x0, SP");
	asm("cflthi #1, x0, SP");
	asm("cflths #1, x0, SP");
	asm("cflteq #1, x0, SP");
	asm("cfltne #1, x0, SP");

	asm("flt.eq #1");
	asm("flt.ne #1");
	asm("flt.hs #1");
	asm("flt.lo #1");
	asm("flt.mi #1");
	asm("flt.pl #1");
	asm("flt.vs #1");
	asm("flt.vc #1");
	asm("flt.hi #1");
	asm("flt.ls #1");
	asm("flt.ge #1");
	asm("flt.lt #1");
	asm("flt.gt #1");
	asm("flt.le #1");
	asm("flt.al #1");
	asm("flt.nv #1");

	asm("tfltnz #1, w0, #31");
	asm("tfltnz #1, x0, #60");
	asm("tfltz #1, w0, #31");
	asm("tfltz #1, x0, #60");
}
