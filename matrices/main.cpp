#include <iostream>
void add();
void sub();
void mul_s();
void mul_m();
void trans();
using namespace std;

int main()
{
    int choice;
    do
    {
        cout<<"\n";
        cout<<"1.  Addition of two matrices  \n";
        cout<<"2.  Subtraction of two matrices  \n";
        cout<<"3.  Multiplication of a matrix by a scalar  \n";
        cout<<"4.  Multiplication of a matrix by a matrix  \n";
        cout<<"5.  Transpose of a matrix \n";
        cout<<"\n";
        cout<<"Enter the operation which you wanted to perform\n";
        cin>>choice;

        switch(choice)
        {
            case 1: add();
                    break;
            case 2: sub();
                    break;

            case 3: mul_s();
                    break;
            case 4: mul_m();
                    break;
            case 5: trans();
                    break;
            default : cout<<"wrong choice\n";
                        break;
        }
    }while(choice!=6);

    return 0;
}

    void add()
    {
int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];
    cout << "Enter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q;
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        return;
    }
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
    }

    void sub()
    {
            int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];
    cout << "Enter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q;
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        return;
    }
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
    }

    void mul_m()
    {
        int r1, c1, r2, c2, i, j, k;
    int A[5][5], B[5][5], C[5][5];
    cout << "Enter number of rows and columns of matrix A : ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of matrix B : ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied!";
        return;
    }
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            cin >> A[i][j];
    cout << "Enter elements of matrix B : ";
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            cin >> B[i][j];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Product of matrices\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
    }

    void trans()
    {
        int a[10][10], trans[10][10], r, c, i, j;

    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix: " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }

    // Finding transpose of matrix a[][] and storing it in array trans[][].
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

    // Displaying the transpose,i.e, Displaying array trans[][].
    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if(j == r - 1)
                cout << endl << endl;
        }
    }
        void mul_s()
        {
            int SIZE=3;
            int A[SIZE][SIZE];
    int num, row, col;

    /* Input elements in matrix from user */
    cout<<"Enter elements in matrix of size %dx%d: \n", SIZE, SIZE;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cin>>A[row][col];
        }
    }

    /* Input multiplier from user */
    cout<<"Enter any number to multiply with matrix A: ";
    cin>>num;

    /* Perform scalar multiplication of matrix */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* (cAij) = c . Aij */
            A[row][col] = num * A[row][col];
        }
    }

    /* Print result of scalar multiplication of matrix */
    cout<<"\nResultant matrix c.A = \n";
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cout<< A[row][col];
        }
        cout<<endl;
    }
        }
