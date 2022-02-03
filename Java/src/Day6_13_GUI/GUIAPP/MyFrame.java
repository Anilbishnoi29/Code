package Day6_13_GUI.GUIAPP;

import java.awt.*;

import javax.swing.*;

public class MyFrame {
    public static void main(String[] args) {

        // JFrame create
        JFrame frame = new JFrame(); // create frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // exit on close
        frame.setResizable(false);
        // Create an image icon
        ImageIcon icon = new ImageIcon("src\\Day6_13_GUI\\GUIAPP\\resource\\logo.jpg"); // set
        // icon
        frame.setIconImage(icon.getImage()); // set the image icon on app
        frame.setLayout(null);// set Layout
        frame.setSize(500, 500); // set the size of application

        // JPanel create it's container that hold other component
        // 1. redPanel
        JPanel redPanel = new JPanel();// create JPanel
        redPanel.setBackground(Color.decode("#FF6F6F")); // set the bg-color to panel
        redPanel.setBounds(0, 0, 250, 250); // set the panel size and set it's position
        // redPanel.setBounds(x, y, width, height);
        // 2. redPanel
        JPanel bluePanel = new JPanel();// create JPanel
        bluePanel.setBackground(Color.decode("#5A71FF")); // set the bg-color to panel
        bluePanel.setBounds(250, 0, 250, 250); // set the panel size and set it's position
        // 3. greenPanel
        JPanel greenPanel = new JPanel();// create JPanel
        greenPanel.setBackground(Color.decode("#86FF5A")); // set the bg-color to panel
        greenPanel.setBounds(0, 250, 500, 250); // set the panel size and set it's position
        greenPanel.setLayout(new BorderLayout());

        // Create JLabel
        JLabel label = new JLabel();
        ImageIcon thumbsicon = new ImageIcon("src\\Day6_13_GUI\\GUIAPP\\resource\\thumbs.png");

        label.setText("Hi...");// simple text
        label.setIcon(thumbsicon); // set label icon
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);

        // add panel to frame
        frame.add(redPanel);
        frame.add(bluePanel);
        frame.add(greenPanel);
        // set frame visible after added all components
        frame.setVisible(true); // set visible true for showing window
    }
}