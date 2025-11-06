import java.util.*;
import java.io.*;
import java.net.*;

class Client1
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Client is running");


        Socket sobj = new Socket("localhost", 2100);
        System.out.println("Connected to server to successfully");

        DataInputStream diobj = new DataInputStream(sobj.getInputStream());
        DataOutputStream doobj = new DataOutputStream(sobj.getOutputStream());

        Scanner scobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0, iSum = 0;

        System.out.println("Enter first number: ");
        iNo1 = scobj.nextInt();

        System.out.println("Enter second number: ");
        iNo2 = scobj.nextInt();

        doobj.writeInt(iNo1);
        doobj.writeInt(iNo2);

        iSum = diobj.readInt();
        System.out.println("Addition is: "+iSum);

        sobj.close();

        System.out.println("Client application terminated");
    }
}