import java.net.*;
import java.io.*;
public class SimpleCient {
	public static void main(String[] args) 
	{
		try
		{
			Socket socket=new Socket("127.0.0.1",8080);
			PrintWriter out=new PrintWriter(new OutputStreamWriter(socket.getOutputStream()));
			out.println("hello java");//不会输出，但可以传给服务器端输出
			out.flush();//似乎必须这样服务器才能检测到out
			BufferedReader in=new BufferedReader(new InputStreamReader(socket.getInputStream()));
			String s=in.readLine();//读取服务器端传过来的数据
			System.out.println(s);//输出服务器端输出的you too
			out.close();
			in.close();
			socket.close();
		}catch(Exception e)
		{
			System.out.println(e);
		}
	}
}
