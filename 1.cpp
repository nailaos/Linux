int see(int score) {
	int k = 100;
	switch (score / 10) {
		case 10:
		case 9:
			k = 9;
			break;
		case 6:
			k = 6;
			break;
		case 12:
			k = 12;
			break;
		case 8:
			k = 8;
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			k = 0;
			break;
		default:
			k = -1;
			break;
	}
	return k;
}
