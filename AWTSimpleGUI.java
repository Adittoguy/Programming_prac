import java.awt.*;

class AWTSimpleGUI
{
    AWTSimpleGUI()
    {
        Frame fobj = new Frame("Awt GUI");

        Label lobj = new Label("Enter your name: ");
        lobj.setBounds(20 ,80, 120, 30);

        TextField tfobj = new TextField();
        tfobj. setBounds(150, 80, 100, 30);

        Button bobj = new Button("Submit");
        bobj.setBounds(100, 120, 80, 30);

        fobj.add(lobj);
        fobj.add(tfobj);
        fobj.add(bobj);

        fobj.setSize(300, 200);
        fobj.setLayout(null);
        fobj.setVisible(true);
    }

    public static void main(String A[])
    {
        new AWTSimpleGUI();
    }

}