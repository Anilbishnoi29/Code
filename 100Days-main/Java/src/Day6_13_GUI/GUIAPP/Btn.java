package Day6_13_GUI.GUIAPP;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;

public class Btn {
    static JButton button;

    public static void main(String[] args) {

        // btn icon
        ImageIcon thumbsicon = new ImageIcon("src\\Day6_13_GUI\\GUIAPP\\resource\\thumbs.png");
        // button
        button = new JButton();
        button.setBounds(100, 100, 200, 50);
        button.setIcon(thumbsicon);
        button.setText("Click me!");
        button.setFocusable(false);

        button.addActionListener(e -> System.out.println("Clicked"));

        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);
        frame.setSize(400, 400);

        frame.add(button);

        frame.setVisible(true);

    }

}
