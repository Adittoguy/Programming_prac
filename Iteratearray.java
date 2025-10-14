class Iteratearray
{
    public static void main(String A[])
    {
        int Arr[][] = new int[2][4];
        Arr[0][0] = 10;
        Arr[0][1] = 20;
        Arr[0][2] = 30;
        Arr[0][3] = 40;
        Arr[1][0] = 50;
        Arr[1][1] = 60;
        Arr[1][2] = 70;
        Arr[1][3] = 80;

        System.out.println(Arr.length);
        System.out.println(Arr[0][3]);


        int iCnt = 0;
        for(iCnt=0; iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

    }
}