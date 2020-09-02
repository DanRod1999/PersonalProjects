//test_script.java 

class parent_class{ 

    int val; 

    String name; 

     

    public int parent_method(int x, int y){ 

        return x * y; 

    } 

} 

  

class text_script extends parent_class{ 

    String child_name; 

  

    public String true_false( boolean t_f ){ 

        if(t_f) 

            return "true"; 

        else 

            return "false"; 

    } 

     

    public String child_method(String str){ 

        String new_str = ""; 

        int len = str.length()-1; 

        for( int i = 0; i <= len; i++ ){ 

            new_str += str.charAt(len - i); 

        } 

        return new_str; 

    } 

     

    public static void main(String args[]){ 

        test_scipt child = new test_script(); 

        child.name = "parent"; 

        child.child_name = "child"; 

        child.val = 22; 

  

        System.out.println("parent name: " + child.name + ", child name: " + child.child_name + ", val: " + child.val); 

  

        int par_meth = child.parent_method(3,4); 

        String child_meth = child.child_method("Hello"); 

        System.out.println("Parent: " + par_meth + " Child: " + child_meth); 

    } 

} 