//test_scrit_mock.java 

import static org.hamcrest.CoreMatcher.is; 

import static org.junit.Assert.*; 

import static org.mockit.Matchers.anyBoolean; 

import static org.mockitoMockito.*; 

  

import org.junit.Before; 

import org.junit.Test; 

  

public class test_script_mock extends test_script{ 

     

    private parent_class mockparent_class; 

    private test_script mocktest_script_class; 

     

    @Before 

    public void setUp() 

    { 

        mockparent_class = mock(parent_class.class); 

        mocktest_script_class = mock(test_script.class); 

    } 

  

    @Test 

    public void parent_val_test() 

    { 

        test_script val_test = new test_script(); 

        val_test.val = 22; 

        assertEquals(val_test.val, 22); 

    } 

     

    @Test 

    public void paent_name_test() 

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

        int x = mocktest_script_class.parent_method(3,4); 

        verify(mocktest_script_class).parent_method(3,4); 

    } 

  

    @Test 

    public void child_method() 

    { 

        String x = mocktest_script_class.chil_method("Daniel"); 

        verify(mocktest_script_class).child_method("Daniel"); 

    } 

     

    @Test 

    public void true_false_test() 

    { 

        String x mocktest_script_class.true_false(true); 

        verify(mocktest_script_class).true_false(anyBoolean()); 

    } 

} 