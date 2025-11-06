import java.util.*;
import java.io.*;
import java.net.*;

class Server1
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Server is running...");
        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server is waiting at 2100");
        Socket sobj = ssobj.accept();
        System.out.println("Clients request arries and gets accepted by server");

        DataInputStream diobj = new DataInputStream(sobj.getInputStream());
        DataOutputStream doobj = new DataOutputStream(sobj.getOutputStream());

        
        
        int iNo1 = 0, iNo2 = 0, iSum = 0;
        
        iNo1 = diobj.readInt();
        
        
        iNo2 = diobj.readInt();

        iSum = iNo1 + iNo2;

        doobj.writeInt(iSum);

        sobj.close();
        ssobj.close();
        System.out.println("Server application terminated");
    }
}