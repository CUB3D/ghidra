int main() {
/*
	asm("test:");
	asm("cas w0, w1, [SP]");
	asm("casa w0, w1, [SP]");
	asm("casal w0, w1, [SP]");
	asm("casl w0, w1, [SP]");
	asm("cas x0, x1, [SP]");
	asm("casa x0, x1, [SP]");
	asm("casal x0, x1, [SP]");
	asm("casl x0, x1, [SP]");

	asm("casb w0, w1, [SP]");
	asm("casab w0, w1, [SP]");
	asm("casalb w0, w1, [SP]");
	asm("caslb w0, w1, [SP]");

	asm("cash w0, w1, [SP]");
	asm("casah w0, w1, [SP]");
	asm("casalh w0, w1, [SP]");
	asm("caslh w0, w1, [SP]");

	asm("casp w0, w1, w2, w3, [SP]");
	asm("caspa w0, w1, w2, w3, [SP]");
	asm("caspal w0, w1, w2, w3, [SP]");
	asm("caspl w0, w1, w2, w3, [SP]");
	asm("casp x0, x1, x2, x3, [SP]");
	asm("caspa x0, x1, x2, x3, [SP]");
	asm("caspal x0, x1, x2, x3, [SP]");
	asm("caspl x0, x1, x2, x3, [SP]");

	asm("ldadd w0, w1, [SP]");
	asm("ldadda w0, w1, [SP]");
	asm("ldaddal w0, w1, [SP]");
	asm("ldaddl w0, w1, [SP]");
	asm("ldaddl x0, x1, [SP]");
	asm("ldadda x0, x1, [SP]");
	asm("ldaddal x0, x1, [SP]");
	asm("ldaddl x0, x1, [SP]");

	asm("ldaddb w0, w1, [SP]");
	asm("ldaddab w0, w1, [SP]");
	asm("ldaddalb w0, w1, [SP]");
	asm("ldaddlb w0, w1, [SP]");

	asm("ldaddh w0, w1, [SP]");
	asm("ldaddah w0, w1, [SP]");
	asm("ldaddalh w0, w1, [SP]");
	asm("ldaddlh w0, w1, [SP]");

	asm("ldclr w0, w1, [SP]");
	asm("ldclra w0, w1, [SP]");
	asm("ldclral w0, w1, [SP]");
	asm("ldclrl w0, w1, [SP]");

	asm("ldclr x0, x1, [SP]");
	asm("ldclra x0, x1, [SP]");
	asm("ldclral x0, x1, [SP]");
	asm("ldclrl x0, x1, [SP]");

	asm("ldclrb w0, w1, [SP]");
	asm("ldclrab w0, w1, [SP]");
	asm("ldclralb w0, w1, [SP]");
	asm("ldclrlb w0, w1, [SP]");

	asm("ldclrh w0, w1, [SP]");
	asm("ldclrah w0, w1, [SP]");
	asm("ldclralh w0, w1, [SP]");
	asm("ldclrh w0, w1, [SP]");

	asm("ldeor w0, w1, [SP]");
	asm("ldeora w0, w1, [SP]");
	asm("ldeoral w0, w1, [SP]");
	asm("ldeorl w0, w1, [SP]");

	asm("ldeor x0, x1, [SP]");
	asm("ldeora x0, x1, [SP]");
	asm("ldeoral x0, x1, [SP]");
	asm("ldeorl x0, x1, [SP]");

	asm("ldeorb w0, w1, [SP]");
	asm("ldeorab w0, w1, [SP]");
	asm("ldeoralb w0, w1, [SP]");
	asm("ldeorlb w0, w1, [SP]");

	asm("ldeorh w0, w1, [SP]");
	asm("ldset w0, w1, [SP]");
	asm("ldsetb w0, w1, [SP]");
	asm("ldseth w0, w1, [SP]");
	asm("ldsmax w0, w1, [SP]");
	asm("ldsmaxb w0, w1, [SP]");
	asm("ldsmaxh w0, w1, [SP]");
	asm("ldsmin w0, w1, [SP]");
	asm("ldsminb w0, w1, [SP]");
	asm("ldsminh w0, w1, [SP]");
	asm("ldumax w0, w1, [SP]");
	asm("ldumaxb w0, w1, [SP]");
	asm("ldumaxh w0, w1, [SP]");
	asm("ldumin w0, w1, [SP]");
	asm("lduminb w0, w1, [SP]");
	asm("lduminh w0, w1, [SP]");

	asm("stadd w0, [SP]");
	asm("staddb w0, [SP]");
	asm("staddh w0, [SP]");
	asm("stclr w0, [SP]");
	asm("stclrb w0, [SP]");
	asm("stclrh w0, [SP]");
	asm("steor w0, [SP]");
	asm("steorb w0, [SP]");
	asm("steorh w0, [SP]");
	asm("stset w0, [SP]");
	asm("stsetb w0, [SP]");
	asm("stseth w0, [SP]");
	asm("stsmax w0, [SP]");
	asm("stsmaxb w0, [SP]");
	asm("stsmaxh w0, [SP]");
	asm("stsmin w0, [SP]");
	asm("stsminb w0, [SP]");
	asm("stsminh w0, [SP]");
	asm("stumax w0, [SP]");
	asm("stumaxb w0, [SP]");
	asm("stumaxh w0, [SP]");
	asm("stumin w0, [SP]");
	asm("stuminb w0, [SP]");
	asm("stuminh w0, [SP]");
	asm("swp w0, w1, [SP]");
	asm("swpb w0, w1, [SP]");
	asm("swph w0, w1, [SP]");
*/
	asm("ldsetp x0, x1, [SP]");
	asm("ldsetpa x0, x1, [SP]");
	asm("ldsetpal x0, x1, [SP]");
	asm("ldsetpl x0, x1, [SP]");
	asm("ldclrp x0, x1, [SP]");
	asm("ldclrpa x0, x1, [SP]");
	asm("ldclrpal x0, x1, [SP]");
	asm("ldclrpl x0, x1, [SP]");
	asm("swpp x0, x1, [SP]");
	asm("swppa x0, x1, [SP]");
	asm("swppal x0, x1, [SP]");
	asm("swppl x0, x1, [SP]");
}
