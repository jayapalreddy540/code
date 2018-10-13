import java.io.*;
import java.net.*;
import java.util.*;
public class TcpClient
{
	public static void main(String args[])
	{
		String host=args[0];
		int port=Integer.parseInt(args[1]);
		while(true)
		{
			try
			{
				Socket socket=new Socket(host,port);
				System.out.println("Enter Your Message : ");
				BufferedReader send_buffer=new BufferedReader(new InputStreamReader(System.in));
				String message=send_buffer.readLine();
				PrintStream printMessage=new PrintStream(socket.getOutputStream());
				printMessage.println(message);
				BufferedReader recieve_buffer=new BufferedReader(new InputStreamReader(socket.getInputStream()));
				message=recieve_buffer.readLine();
				System.out.println("Message is : "+message);
			}
			catch(Exception e)
			{
			 System.out.println(e);
			}
		}
	}
}