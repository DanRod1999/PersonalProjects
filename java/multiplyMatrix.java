//multiplyMatrix.java 

  

class multiplyMatrix{ 

    public boolean checkMatrix( int [][] matrix ){ 

        int savedVal = matrix[0].length(); 

        for( int i = 1; i < matrix.length()-1; i++ ){ 

            if( savedVal != matrix[i] ) 

                return false; 

        } 

        return true; 

    } 

     

    public int[][] formatMatrix( int[] temp, int len, int width ){ 

        int[][] finalMatrix = new int[len][width]; 

        int posCounter = 0; 

        for( int i = 0; i < len; i++ ){ 

            for( int j = 0; j < width; j++ ){ 

                finalMatrix[i][j] = temp[posCounter]; 

                posCounter++; 

            } 

        } 

        return finalMatrix; 

    } 

  

    public int[][] dotMultiply( int [][] matrix1, int[][] matrix2){ 

        if( !checkMatrix(matrix1) || !checkMatrix(matrix2) ){ 

            return null; 

        } 

        if( matrix.length != matrix.length || matrix1[0].length != matrix2[0].length ){ 

            return null; 

        } 

         

        int[][] newMatrix = new int[matrix1.length][matrix[0].length]; 

        for( int i = 0; i < matrix1.length; i++ ){ 

            for( int j = 0; j < matrix1.length; j++ ){ 

                newMatrix[i][j] = matrix1[i][j]*matrix2[i][j]; 

            } 

        } 

        return newMatrix; 

    } 

  

    public int[][] trueMultiply( int[][] matrix1, int[][] matrix2 ){ 

        if( !checkMatrix(matrix1) || !checkMatrix(matrix2) ){ 

            System.out.println("Matrix check fails"); 

            return null; 

        } 

     

  

        if( matrix1[0].length != matrix2.length ){ 

            System.out.println("Size doesn't match"); 

            return null; 

        } 

         

        int[][] newMatrix = new int[matrix1.length][matrix2[0].length]; 

        int[] tempMatrix = new int[matrix1.length * matrix2[0].length]; 

        int counter = 0; 

        for( int i = 0; i < matrix1.length; i++ ){ 

            for( int j = 0; j < matrix1[0].length; i++ ){ 

                int temp_sum = 0; 

                for( int k = 0; k < matrix2.length; k++ ){ 

                    temp_sum += matrix1[i][k] * matrix2[i][k]; 

                    System.out.println(temp_sum); 

                } 

                System.out.println("*" + temp_sum + "*"); 

                tempMatrix[counter] = temp_sum; 

                counter++; 

            } 

        } 

        newMatrix = formatMatrix(tempMatrix, matrix1.length, matrix2[0].length); 

        return newMatrix; 

    } 

  

    public static void main(String args[]){ 

         

        int[][] checkMatrix = {{1,4,9},{1,4,9},{1,4,9}}; 

        multiplyMatrix matrixTest = new multiplyMatrix(); 

        int[][] matrix1 = {{1,2,3},{1,2,3},{1,2,3}}; 

        int[][] newMatrix = matrixText.dotMultiply(matrix1,matrix1); 

        System.out.println(" " + newMatrix[2][2]); 

  

        System.out.println("done"); 

    } 

} 