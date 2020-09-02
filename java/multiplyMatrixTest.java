//multiplyMatrixTest.java 

import static org.junit.Assert.*; 

import static org.mockito.Matchers.anyBoolean; 

import static org.mockito.Mockito.*; 

  

import org.junit.Test; 

  

public class multiplyMatrixTest extends multiplyMatrix{ 

  

    @Test 

    public boid checkmatrixTest(){ 

        multiplymMatrix matrixTest = new multiplyMatrix(); 

        int[][] matrix1 = {{1,2,3},{1,2,3},{1,2}}; 

        boolean methodResult = matrixTest.checkMatrix(matrix1); 

        assertFalse(methodResult); 

    } 

     

    @Test 

    public void formatMatrixTest(){ 

        int[][] checkMatrix = {{1,2},{3,4}}; 

        multiplyMatrix formatTest = new multiplyMatrix(); 

        int[] unformattedArray = {1,2,3,4}; 

        int[][] newMatrix = formatTest.formatMatrix(unformattedArray, 2, 2); 

        assertArrayEquals(newMatrix, checkMatrix); 

    } 

  

    @Test 

    public void dotMultiplyTest(){ 

        int[][] checkMatrix = {{1,4,9},{1,4,9},{1,4,9}}; 

        multiplyMatrix dotMatrixTest = new multiplyMatrix(); 

        int[][] matrix1 = {{1,2,3},{1,2,3},{1,2,3}}; 

        int[][] newMatrix = dotMatrixTest.dotMultiply(matrix1,matrix1); 

        asserArrayEquals(newMatrix, checkMatrix); 

    } 

     

    @Test 

    public void dotMultiplyWrongDimensionTest(){ 

        int[][] checkMatrix = null; 

        multiplyMatrix dotMatrixTest = new multiplyMatrix(); 

        int[][] matrix1 = {{1,2,3},{1,2,3},{1,2,3}}; 

        int[][] matrix2 = {{1,2,3},{1,2,3}}; 

        int[][] newMatrix = dotMatrixTest.dotMultiply(matrix1,matrix2); 

        assertArrayEquals(newMatrix, checkMatrix); 

    } 

     

    @Test 

    public void trueMultiplyTest(){ 

        int[][] checkMatrix = {{22,28},{49,64}}; 

        multiplyMatrix trueMatrixTest = new multiplyMatrix(); 

        int[][] matrix1 = {{1,2,3},{1,2,3},{1,2,3}}; 

        int[][] matrix2 = {{1,2},{3,4},{5,6}}; 

        int[][] newMatrix = trueMatrixTest.trueMultiply(matrix1,matrix2); 

        assertArrayEquals(newmatrix, checkMatrix); 

    } 

  

    @Test 

    public void trueMultiplyWrongDimenstionTest(){ 

        int[][] checkMatrix = null; 

        multiplyMatrix trueMatrixtest = new multiplyMatrix(); 

        int[][] matrix1 = {{1,2,3},{4,5,6}}; 

        int[][] newMatrix = trueMatrixTest.trueMultiply(matrix1,matrix1); 

        assertArrayEquals(newMatrix, checkMatrix); 

    } 

} 