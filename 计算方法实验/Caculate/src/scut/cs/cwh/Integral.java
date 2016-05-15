package scut.cs.cwh;

public class Integral {
	double f(double x){
		return 2/(1+x*x);
	}
	double f2(double x){
		return Math.sqrt(x);
	}
	double autoLadder(double a, double b, double e) {
		double h = (b - a) / 2;
		double T1 = (f(a) + f(b)) * h, T0, S;
		int n = 1;
		while(true){
			T0 = T1;
			S = 0;
			for (int i = 1; i < n + 1; i++)
				S += f(a + (2 * i - 1) * h / n);
			T1 = T0 / 2 + S * h / n;
			if(Math.abs(T1 - T0) >= 3 * e)n *= 2;
			else break;
		}
		return T1;
	}
	
	double romberg(double a,double b,double e,int max){
		double[][] T=new double[max][max];
		T[0][0]=(b-a)/2*(f2(a)+f2(b));
		int k=1;
		while(true){
			double sum=0;
			for(int i =1;i<Math.pow(2,k-1)+1;i++)
				sum+=f2(a+(2*i-1)*(b-a)/Math.pow(2,k));
			T[0][k]=0.5*(T[0][k-1]+(b-a)/Math.pow(2,k-1)*sum);
			for(int m=1;m<=k;m++)
				T[m][k-m]=(Math.pow(4,m)*T[m-1][k-m+1]-T[m-1][k-m])/(Math.pow(4, m)-1);
			if(Math.abs(T[k][0]-T[k-1][0])<e)break;
			else k++;
			if(k>max){
				System.out.println("failed");
				break;
			}
		}
		return T[k][0];
	}

	public static void main(String[] args) {
		/*
		 * args: 0 9 0.0000001
		 */
		double a = Double.parseDouble(args[0]);
		double b = Double.parseDouble(args[1]);
		double e = Double.parseDouble(args[2]);
		System.out.println(new Integral().autoLadder(a, b, e));
		System.out.println(new Integral().romberg(a, b, e, 128));
	}

}
