package scut.cs.cwh;

public class InterPolation {
	double[] x, y, h, alp, beta, a, b, m;
	double m0, mn;
	int n;

	void interpolate(int n, double[] x, double[] y, double xx,
			int type, double m0, double mn) {
		init(x, y, n, m0, mn);
		setByCond(type);
		for (int i = 1; i < n; i++) {
			alp[i] = h[i - 1] / (h[i - 1] + h[i]);
			beta[i] = 3 * ((1 - alp[i]) / h[i - 1]
					* (y[i] - y[i - 1]) + alp[i] / h[i]
					* (y[i + 1] - y[i]));
		}
		a[0] = -alp[0] / 2;
		b[0] = beta[0] / 2;
		for (int i = 1; i < n + 1; i++) {
			a[i] = -alp[i] / (2 + (1 - alp[i]) * a[i - 1]);
			b[i] = (beta[i] - (1 - alp[i]) * b[i - 1])
					/ (2 + (1 - alp[i]) * a[i - 1]);
		}
		m[n + 1] = 0;
		for (int i = n; i >= 0; i--) {
			m[i] = a[i] * m[i + 1] + b[i];
		}
		int i = -1;
		for (int k = 0; k < n; k++)
			if (xx >= x[k] && xx <= x[k + 1]) {
				i = k;
				break;
			}
		if (i == -1) {
			System.out.println("xxerror");
		}
		double res = (1 + 2 * (xx - x[i]) / (x[i + 1] - x[i]))
				* Math.pow((xx - x[i + 1]) / (x[i] - x[i + 1]),
						2)*y[i]
				+ (1 + 2 * (xx - x[i + 1]) / (x[i] - x[i + 1]))
				* Math.pow((xx - x[i]) / (x[i + 1] - x[i]), 2)*y[i+1]
				+ (xx - x[i])
				* Math.pow((xx - x[i + 1]) / (x[i] - x[i + 1]),
						2) * m[i] + (xx - x[i + 1])
				* Math.pow((xx - x[i]) / (x[i + 1] - x[i]), 2)
				* m[i + 1];
		System.out.println("s[" + xx + "]=" + res);
	}

	void init(double[] argx, double[] argy, int argn, double argm0,
			double argmn) {
		n = argn;
		h = new double[n];
		alp = new double[n + 1];
		beta = new double[n + 1];
		a = new double[n + 1];
		b = new double[n + 1];
		m = new double[n + 2];

		x = new double[n + 1];
		y = new double[n + 1];
		for (int i = 0; i < n + 1; i++) {
			x[i] = argx[i];
			y[i] = argy[i];
		}
		for (int i = 0; i < n; i++) {
			h[i] = x[i + 1] - x[i];
		}
		m0 = argm0;
		mn = argmn;
	}

	void setByCond(int type) {
		if (type == 1) {
			alp[0] = 0;
			alp[n] = 1;
			beta[0] = 2 * m0;
			beta[n] = 2 * mn;
		} else if (type == 2) {
			alp[0] = 1;
			alp[n] = 0;
			beta[0] = 3 / h[0] * (y[1] - y[0]);
			beta[n] = 3 / h[n - 1] * (y[n] - y[n - 1]);
		}
	}

	public static void main(String[]args){
		/**
		 * args exmp:5 75 76 77  78 79 80 2.768 2.833 2.903 2.979 3.062 3.153 2 78.3 0 0
		 * 4 0.25 0.3 0.39 0.45 0.53 0.5 0.5477 0.6245 0.6708 0.728 1 0.35 1 0.6868 
		 */
		int n = Integer.parseInt(args[0]);
		double[] x = new double[n+1];
		double[] y = new double[n+1];
		for(int i= 0;i<=n;i++){
			x[i]=Double.parseDouble(args[i+1]);
			y[i]=Double.parseDouble(args[i+n+2]);
		}
		int type = Integer.parseInt(args[2*n+3]);
		double xx = Double.parseDouble(args[2*n+4]);
		double m0 = Double.parseDouble(args[2*n+5]);
		double mn= Double.parseDouble(args[2*n+6]);
		
		new InterPolation().interpolate(n, x, y, xx, type, m0, mn);
	}
}
