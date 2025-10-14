class Base
{
    public int i , j;

    public void fun()
    {
        System.out.println("Inside base fun");
    }

    public void gun()
    {
        System.out.println("Inside base  gun");
    }

    public void sun()
    {
        System.out.println("Inside base sun");
    }

    public void bun()
    {
        System.out.println("INside base bun");
    }
}

class Derived extends Base
{
    public int x;

    public void gun()
    {
        System.out.println("Inside Derived gun");
    }

    public void sun()
    {
        System.out.println("Inside Derived sun");
    }

    public void run()
    {
        System.out.println("Inside Derived run");
    }

    public void mun()
    {
        System.out.println("Inside Derived mun");
    }

}

class Overriding
{
    public static void main(String A[])
    {
        Base bp1 = new Base();
        Base bp2 = new Derived();
        
        Derived dp1 = new Derived();

        bp2.fun();
        bp2.gun();
        bp2.sun();
        //bp2.run();
        //bp2.mun();
        bp2.bun();
        
    }
}