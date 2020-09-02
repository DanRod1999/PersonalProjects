c class JTableExample 

{ 

	JFrame f; 

	JTable j; 

	 

	JTableExample() 

	{ 

		f = new JFrame(); 

		f.setTitle("Courses"); 

		String[][] courses = { 

			{"ECE","T380","Applied Machine Learning","92"}, 

			{"ECEC","471","Introduction to CLSI Design","53"}, 

			{"ECEC","357","Introduction to Computer Networks","291"}, 

			{"CS","377","Software Security","30"}, 

			{"ECE","303","ECE Laboratory","120"} 

		}; 

		 

		String[] columnNames = {"Dept","Num","Name","CRN"}; 

		 

		j = new JTable(courses, columnNames); 

		j.setBounds(30,40,200,300); 

		 

		JScrollPane sp = new JScrollPane(j); 

		f.add(sp); 

		f.setSize(500,200); 

		f.setVisible(true); 

	} 

	 

	Public static void main (String[] args) 

	{ 

		new JTableExample(); 

	} 

} 
