import javax.swing.*;

public class Fenetre extends JFrame {

	private static final long serialVersionUID = 1L;
	
	public Fenetre(){
		this.setSize(518, 284);
		this.setUndecorated(false);
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(false);
		this.setFocusable(true);
    	this.setVisible(true);
	}
	
}
