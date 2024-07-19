import java.net.*;
import java.io.*;
import java.util.*;

public class Dns {

  public static void main(String args[])
  {
    int n;
    BufferedReader in =new BufferedReader(new InputStreamReader(System.in));
    do{
      System.out.println("Menu: \n 1.DNS 2.Reverse DNS 3.Exit \n");
      System.out.println("Enter your choice");
      n=Integer.parseInt(System.console().readLine());
      if(n==1)
      {
        try{
          System.out.println("Enter Host Name: ");
          String hname = in.readLine();
          InetAddress address;
          address = InetAddress.getByName(hname);
          System.out.println("Host Name: "+address.getHostName());
          System.out.println("\nIP: "+address.getHostAddress()); 
        }
        catch(IOException ioe)
        {
          ioe.printStackTrace();
        }
      }
      if(n==2)
      {
        try
        {
          System.out.println("\n Enter IP address");
          String ipstr = in.readLine();
          InetAddress ia = InetAddress.getByName(ipstr);
          System.out.println("\nIP: "+ipstr);
          System.out.println("\nHost Name: "+ia.getHostName());

        }
        catch(IOException ioe)
        {
          ioe.printStackTrace();
        }
      }
    }while(!(n==3));
  }

  
}
