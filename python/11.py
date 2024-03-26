def matrix_multiply(matrix1, matrix2):
    result = []

    # Check if the number of columns in the first matrix is equal to the number of rows in the second matrix
    if len(matrix1[0]) != len(matrix2):
        print("Number of columns in the first matrix must be equal to the number of rows in the second matrix.")
        return result

    # Create the result matrix filled with zeros
    for i in range(len(matrix1)):
        result.append([0] * len(matrix2[0]))

    # Perform matrix multiplication
    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j] += matrix1[i][k] * matrix2[k][j]

    return result

# Example matrices
matrix1 = [[1, 2, 3],
           [4, 5, 6]]

matrix2 = [[7, 8],
           [9, 10],
           [11, 12]]

# Perform matrix multiplication
result_matrix = matrix_multiply(matrix1, matrix2)

# Print the result matrix
if result_matrix:
    print("Resultant matrix after multiplication:")
    for row in result_matrix:
        print(row)