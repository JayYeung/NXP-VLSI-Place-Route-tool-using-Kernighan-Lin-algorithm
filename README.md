# VLSI-Place-Route-tool-using-Kernighan-Lin-algorithm
Developed a C++ based VLSI Place &amp; Route tool by using the Kernighan-Lin algorithm to optimize the data structure and speed up the run time from 50 to 4500 gates in seven hours. 

Created a Perl program to convert firmware code from binary to ATE (automatic test equipment) code format to streamline test code loading flow.

Expected output for base case: 
jtag.drload(`CPU1LOAD_CMD_SIZE, (16'h0000 << 5) | (16'h0 << 4) | (16'h1 << 3) | 16'h2, 16'h0, 16'h0,rdata);
jtag.serial_access(`CPU1LOAD_DATA);
jtag.drload(32, 32'h00000001, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'hc0000000, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h0000005c, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h1d8fb0af, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h21004812, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h4a134d12, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h6813e015, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h0310f043, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h4b0f6013, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h681b1f1b, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'hd0102b01, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h681b682b, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'hda012910, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h1c49c008, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h071b6813, 8'h0, 8'h0, rdata);
jtag.drload(32, 32'h6813d4fc, 8'h0, 8'h0, rdata);
