unsigned long findValue(unsigned int min, unsigned max) {
	int num = max;
	int count = 0;
	while (count != (max-min) + 1) {
		num++;
		count = 0;
		for (int dev = min; dev <= max; dev++){
			if (num % dev == 0){
				count++;
			}
		}
	}
	return num;
}