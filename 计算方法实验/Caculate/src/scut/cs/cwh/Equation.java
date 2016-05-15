package scut.cs.cwh;

public class Equation {
	double e = 0.000001;

	void swap(double[][] a, int xi, int xj, int yi, int yj) {
		double tmp = a[xi][xj];
		a[xi][xj] = a[yi][yj];
		a[yi][yj] = tmp;
	}

	void swap(double[] b, int i, int j) {
		double tmp = b[i];
		b[i] = b[j];
		b[j] = tmp;
	}

	void rowGauss(int n, double[][] a, double[] b) {
		double T = 0;
		double[] x = new double[n + 1];
		for (int k = 1; k < n + 1; k++) {
			double max = 0;
			int ik = k;
			for (int i = k; i < n + 1; i++) {
				if (max < Math.abs(a[i][k])) {
					max = Math.abs(a[i][k]);
					ik = i;
				}
			}
			if (max < e) {
				System.out.println("failed");
				return;
			}
			if (ik != k) {
				for (int i = 1; i <= n; i++) {
					swap(a, ik, i, k, i);
				}
				swap(b, ik, k);
			}
			for (int i = k + 1; i <= n; i++) {
				T = a[i][k] / a[k][k];
				b[i] = b[i] - T * b[k];
				for (int j = k + 1; j <= n; j++)
					a[i][j] = a[i][j] - T * a[k][j];
			}
		}
		if (Math.abs(a[n][n]) < e) {
			System.out.println("failed");
			return;
		}
		x[n] = b[n] / a[n][n];
		for (int i = n - 1; i >= 1; i--) {
			double sum = 0;
			for (int j = i + 1; j <= n; j++)
				sum += a[i][j] * x[j];
			x[i] = (b[i] - sum) / a[i][i];
		}
		for (int i = 1; i <= n; i++)
			System.out.print(x[i] + " ");
		System.out.println();
	}

	void LU(int n, double[][] a, double[] b) {
		double[] x = new double[n + 1];
		double[] y = new double[n + 1];
		double[][] u = new double[n + 1][n + 1];
		double[][] l = new double[n + 1][n + 1];

		for (int k = 1; k <= n; k++) {
			for (int j = k; j <= n; j++) {
				double sum = 0;
				for (int m = 1; m <= k - 1; m++)
					sum += l[k][m] * u[m][j];
				u[k][j] = a[k][j] - sum;
				if (Math.abs(u[k][k]) < e) {
					System.out.println("failed");
					return;
				}
				for (int i = k + 1; i <= n; i++) {
					sum = 0;
					for (int m = 1; m <= k - 1; m++)
						sum += l[i][m] * u[m][k];
					l[i][k] = (a[i][k] - sum) / u[k][k];
				}
			}
		}
		y[1] = b[1];
		for (int i = 2; i <= n; i++) {
			double sum = 0;
			for (int j = 1; j <= i - 1; j++)
				sum += l[i][j] * y[j];
			y[i] = b[i] - sum;
		}
		x[n] = y[n] / u[n][n];
		for (int i = n - 1; i >= 1; i--) {
			double sum = 0;
			for (int j = i + 1; j <= n; j++)
				sum += u[i][j] * x[j];
			x[i] = (y[i] - sum) / u[i][i];
		}
		
		for (int i = 1; i <= n; i++)
			System.out.print(x[i] + " ");
		System.out.println();
	}
	
	void jacorseid(int n,double[][]a,double[]b,double[]y,int type){
		double[]x=new double[n+1];
		double[]g=new double[n+1];
		int k =1;
		double T=0;
		if(type==1)//seidel
			for(int i=1;i<=n;i++)x[i]=y[i];
		for(int i=1;i<=n;i++){
			if(Math.abs(a[i][i])<e){
				System.out.println("failed");
				return;
			}
			T=a[i][i];
			for(int j=1;j<=n;j++){
				a[i][j]=(-1)*a[i][j]/T;
				a[i][i]=0;
				g[i]=b[i]/T;
			}
		}
		while(true){
			for(int i=1;i<=n;i++){
				double sum=0;
				for(int j=1;j<=n;j++)
					if(j!=i)
						if(type==0)sum+=a[i][j]*y[j];
						else sum+=a[i][j]*x[j];
				x[i]=g[i]+sum;
			}
			double sum = 0;
			for(int i=1;i<=n;i++)sum+=Math.abs(x[i]-y[i]);
			if(sum<e){
				System.out.print("k="+k+"\nX[");
				for(int i=1;i<n;i++)System.out.print(x[i]+",");
				System.out.print(x[n]+"]");
				System.out.println();
				return;
			}
			k++;
			for(int i=1;i<=n;i++)y[i]=x[i];
		}
	}
	void jacobi(int n,double[][]a,double[]b,double[]y){
		jacorseid(n,a,b,y,0);
	}
	void seidel(int n,double[][]a,double[]b,double[]y){
		jacorseid(n,a,b,y,1);
	}
	static void input(String[]args,double[][]a,double[]b){
		int n = Integer.parseInt(args[0]);
		for (int i = 1; i < n + 1; i++) {
			for (int j = 1; j < n + 1; j++)
				a[i][j] = Double.parseDouble(args[(i - 1) * n
						+ j]);
		}
		for (int i = 1; i < n + 1; i++)
			b[i] = Double.parseDouble(args[i + n * n]);
	}
	public static void main(String[] args) {
		/**
		 * args:4 2 -1 0 0 -1 2 -1 0 0 -1 2 -1 0 0 -1 2 1 0 1 0
		 */
		int n = Integer.parseInt(args[0]);
		double[][] a = new double[n + 1][n + 1];
		double[] b = new double[n + 1];
		
		input(args,a,b);
		System.out.println("Gauss:");
		new Equation().rowGauss(n, a, b);// »áÐÞ¸Äµ½a,b
		
		input(args,a,b);
		System.out.println("LU:");
		new Equation().LU(n, a, b);
		
		input(args,a,b);
		System.out.println("Jacobi:");
		double[]y={0,1,1,1,1};
		new Equation().jacobi(n, a, b, y);
		
		input(args,a,b);
		System.out.println("Seidel:");
		double[]x={0,1,1,1,1};
		new Equation().seidel(n, a, b, x);
	}
}
