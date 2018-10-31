import java.io.*;
import java.net.*;
import java.util.*;
public class TcpServer
{
	public static void main(String args[])
	{
		int port=Integer.parseInt(args[0]);
		try
		{
			while(true)
			{
				ServerSocket ssocket=new ServerSocket(port);
				while(true)
				{
					Socket socket=ssocket.accept();
					BufferedReader recieve_buffer=new BufferedReader(new InputStreamReader(socket.getInputStream()));
					String message=recieve_buffer.readLine();
					System.out.println("message is : "+message);
					System.out.println("enter your message : ");
					BufferedReader send_buffer=new BufferedReader(new InputStreamReader(System.in));
					message=send_buffer.readLine();
					PrintStream printMessage=new PrintStream(socket.getOutputStream());
					printMessage.println(message);
				}
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}