//test_script.java 

import static org.junit.Assert.*; 

import static org.mockit.Matchers.anyBoolean; 

import static org.mockito.Mockito.*; 

  

import org.junit.Test; 

  

public class test_script_jUnit extends test_script{ 

    @Test 

    public void parent_val_test() 

    { 

        test_script val_test = new test_script(); 

        val_test.val = 22; 

        assertEquals(val_test.val, 22); 

    } 

  

    @Test 

    public void parent_name_test() 

    { 

        test_script name_test = new test_script(); 

        name_test.name = "parent"; 

        assertEquals(name_test.name, "parent"); 

    } 

     

    @Test 

    public void child_name_test() 

    { 

        test_script child_name_test = new test_script(); 

        child_name_test.name = "child"; 

        assertEquals(child_name_test.name, "child"); 

    } 

  

    @Test 

    public void parent_method_test() 

    { 

        test_script par_meth_test = new test_script(); 

        int x = par_meth_test.parent_method(3,4); 

        asserEquals(x,12); 

    } 

  

    @Test 

    public void child_method_test() 

    { 

        test_script child_meth_test = new test_script(); 

        String x = child_meth_test.child_mehtod("Daniel"); 

        assertEquals(x, "leinaD"); 

    } 

  

    @Test 

    public void true_false_test() 

    { 

        test_script true_false_meth_test = new test_script(); 

        String x = true_false_meth_test.true_false(true); 

        assertEquals(x,"true"); 

    } 

} 