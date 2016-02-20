import java.net.*;
import java.io.*;
public class SimpleServer {
	public static void main(String[] args) 
	{
		try
		{
			ServerSocket server=new ServerSocket(8080);
			System.out.println("监听服务已启动");
			Socket socket=server.accept();
			InetAddress clientAddress=socket.getInetAddress();
			System.out.println("Client connected"+"from\n"+clientAddress+"\n");
			BufferedReader in=new BufferedReader(new InputStreamReader(socket.getInputStream()));
			String s=in.readLine();//读取客户端信息
			System.out.println(s);//输出读取到的hello server
			Thread.sleep(3000);
			PrintWriter out=new PrintWriter(new OutputStreamWriter(socket.getOutputStream()));
			out.println("Nice work");//不会输出，但是会传给客户端
			out.close();//关闭out,输出缓冲区内容
			in.close();//关闭in
			server.close();//关闭socketserver,不再监听
		}catch(Exception e)
		{
			System.out.println(e);
		}
	}
}